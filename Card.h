#ifndef CARD_H
#define CARD_H
#include <string>

class Card
{
	public:
		Card();
		Card ( int value, std::string type );

		void operator= ( Card c )
		{
			*this = Card ( c.value, c.type );
		}

		const int value;
		const std::string type;
        bool operator==(Card a) const{
            return this->value == a.value && this->type==a.type;
        }

		virtual ~Card();
	protected:
	private:
};

#endif // CARD_H
