#include "Deck.h"
#include <algorithm>
Deck::Deck()
{
	//ctor
}

Deck::~Deck()
{
	//dtor
}
void Deck::addCard ( Card c )
{
	cards.push_back ( c );
}
Card Deck::removeTop()
{
	Card c = cards.front();
	cards.pop_front();
	return c;
}
void Deck::reshuffle()
{
	for ( auto x : discards ) {
		addCard ( x );
		discards.clear();
	}
	std::random_shuffle ( cards.begin(), cards.end() );

}
