#ifndef GAMERULES_H
#define GAMERULES_H
#include "Card.h"
#include <vector>
#include "Deck.h"
class Game;
class Player;
#define INVALID_PLAY 0

class GameRules
{
	public:

		GameRules();
		virtual ~GameRules();

		Game* game;


		virtual std::vector<int> getDefaultPlay(Player*,Card){};
		virtual int verifyPlay ( Player*, Card card, std::vector<int> args ) {}
		virtual Deck createDeck() {};

		int turnTime;
		int initialCards;
		int maxScore;



	protected:




	private:
};

#endif // GAMERULES_H
