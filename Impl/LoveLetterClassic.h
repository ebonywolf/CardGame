#ifndef LOVELETTERCLASSIC_H
#define LOVELETTERCLASSIC_H

#include "GameRules.h"

class LoveLetterClassic:public GameRules
{
    public:

        LoveLetterClassic(int );

        virtual std::vector<int> getDefaultPlay(Player*,Card);
		virtual int verifyPlay ( Player*, Card card, std::vector<int> args );
		virtual Deck createDeck() ;

		int turnTime;
		int initialCards;
		int maxScore;

        virtual ~LoveLetterClassic();
    protected:
    private:
};

#endif // LOVELETTERCLASSIC_H
