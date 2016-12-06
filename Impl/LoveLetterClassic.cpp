#include "LoveLetterClassic.h"
#include "Deck.h"
#include "Card.h"
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

LoveLetterClassic::LoveLetterClassic(int playernum=2){

}
LoveLetterClassic::~LoveLetterClassic(){

}
std::vector<int> LoveLetterClassic::getDefaultPlay ( Player*, Card )
{
	int turnTime = 30;
	int initialCards=1;
	int maxScore=5;
}
int  LoveLetterClassic::verifyPlay ( Player*, Card card, std::vector<int> args ){

return 1;

}
Deck  LoveLetterClassic::createDeck(){
    stringstream s("guard priest baron handmaiden prince king countess princess");
    int n[] = {5, 2, 2, 2, 2, 1, 1, 1};
    Deck deck;
    for (int i=0;i<8;i++){
        string type;
        s>>type;
        for (int j=0;j<n[i];j++){
            Card novo(i+1, type);
            deck.addCard(novo);
        }

    }
    return deck;

}

