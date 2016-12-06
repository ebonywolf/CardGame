#ifndef LOCAL_H
#define LOCAL_H
#include "Pinterface.h"

class Local
{
	public:

		Local();
		virtual ~Local();

		virtual void loop();

		virtual void turn();

		virtual void receivedCard ( Card );
		virtual void removeCard ( Card );

		virtual void played ( Player*, Card, int arg1 = 0 , int arg2 = 0, int arg3 = 0 );
		virtual void wonTurn ( Player* );
		virtual void playerVictory ( Player* );

		virtual void terminate();
		virtual bool hasCard ( Card );



	protected:

	private:
};

#endif // LOCAL_H
