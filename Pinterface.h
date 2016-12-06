#ifndef PINTERFACE_H
#define PINTERFACE_H
#include "Card.h"
#include <deque>
class Player;
class Game;

class Pinterface
{
	public:

		Pinterface ( Player* p );
		virtual ~Pinterface();
		Player* player;


		friend Game;
		Game* game;

		virtual void loop();

		virtual void turn();

		virtual void receivedCard ( Card );
		virtual void removeCard ( Card );

		virtual void played ( Player*, Card, int arg1 = 0 , int arg2 = 0, int arg3 = 0 );
		virtual void wonTurn ( Player* );
		virtual void playerVictory ( Player* );

		virtual void terminate();
		;


	protected:
	    std::deque<Card>& getCards();
	private:

};

#endif // PINTERFACE_H
