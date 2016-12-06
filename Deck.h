#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <deque>

class Deck
{
	public:
		Deck();
		virtual ~Deck();

		void addCard ( Card );
		Card removeTop();


		void addToDiscart ( Card );
		void reshuffle();

	protected:
		std::deque<Card> cards;
		std::deque<Card> discards;
	private:
};

#endif // DECK_H
