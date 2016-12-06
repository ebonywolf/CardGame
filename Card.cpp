#include "Card.h"

Card::Card ( int value, std::string type ) : value ( value ), type ( type )
{
	//ctor
}


Card::Card() : value ( 0 ), type ( "" )
{

}
Card::~Card()
{
	//dtor
}
