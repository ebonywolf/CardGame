#include "Player.h"
using namespace std;
Player::Player()
{
	_cards = std::deque<Card> ( 2 );

}

Player::~Player()
{
	//dtor
}
string Player::getName(){
    return name;
}


int Player::getScore(){
    return _score;
}

bool Player::hasCard(Card c){
    for(auto x: _cards){
        if(x==c)return true;
    }
    return false;
}


