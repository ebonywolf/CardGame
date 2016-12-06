#include "Game.h"
#include "GameRules.h"
#include "Pinterface.h"

#include <ctime>
#include <stdlib.h>
#include <iostream>
using namespace std;

Game::Game ( std::vector<Pinterface*> players, GameRules* gr ) :
	players ( players )
{

	gr->game = this;
	deck = gr->createDeck();
	turnTime = gr->turnTime;


}
Game::~Game()
{

}
void Game::gameRound()
{
	//TODO :

	Pinterface* p = players[turn];
	auto card = deck.removeTop();
	p->receivedCard ( card );
	p->turn();



}
bool Game::checkVictory()
{

	//TODO :
}
void Game::announceVictory ( Player* p )
{
	for ( auto x : players ) {
		x->playerVictory ( p );
	}

}
void Game::endGame()
{
	for ( auto x : players ) {
		x->terminate();
	}




}
void Game::startGame()
{
	turn = 0;
	deck.reshuffle();

	for ( int i = 0; i < gr->initialCards; i++ ) {
		for ( Pinterface* x : players ) {
			x->receivedCard ( deck.removeTop() );
		}
	}




//TODO :


}


void Game::playCard ( Pinterface* p, Card card, int arg1, int arg2 , int arg3 )
{
	if ( !p->player->hasCard ( card ) ) {
		return;
	}

	std::vector<int> args = {arg1, arg2, arg3};
	if ( gr->verifyPlay ( p->player, card, args ) == INVALID_PLAY ) {
		return;
	}

	p->removeCard ( card );
	for ( auto x : players ) {
		x->played ( p->player, card, arg1, arg2, arg3 );
	}
}
