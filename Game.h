#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include <vector>
#include "Deck.h"
#include <algorithm>


#include <unordered_map>
class Player;
class GameRules;
class Pinterface;

class Game
{
	public:
		Game ( std::vector<Pinterface*> players, GameRules* );


        int getTurnTime();
		virtual ~Game();


	protected:
		friend GameRules;

		void startGame();
		void gameRound();
		void countDown();

        bool checkVictory();
        void announceVictory(Player*);
        void endGame();

		void playCard ( Pinterface*, Card card, int arg1 = 0, int arg2 = 0, int arg3 = 0 );

		Deck deck;
		std::vector<Pinterface*> players;


		GameRules* gr;

		std::mutex waitingMut;
		bool waiting;
		int turnTime;
		int turn;
	private:







};

#endif // GAME_H
