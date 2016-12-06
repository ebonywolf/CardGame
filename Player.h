#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <deque>
#include "Card.h"
#include <string>
#include <mutex>
class Pinterface;
class Game;

class Player
{
	public:
		Player();
		virtual ~Player();

		int getScore();
		std::string getName();

	protected:
		void playCard ( Card , int arg1 = 0 , int arg2 = 0, int arg3 = 0 );
		std::vector<Player*> getPlayers();

		virtual void turn() {};
		virtual void played ( Player*, Card, int arg1 = 0 , int arg2 = 0, int arg3 = 0 ) {};
		virtual void receivedCard ( Card ) {};

		virtual void lostCard ( Card ) {};
		virtual void playerVictory ( Player* ) {};
		virtual void wonTurn ( Player* ) {};


	private:
        friend Game;

		std::string name;
		std::deque<Card> _cards;
		int _score;

		bool hasCard(Card);




};

#endif // PLAYER_H
