#ifndef SHIP_H
#define SHIP_H

#include "Transport.h"

class Ship : public Transport
{
	public:
		Ship();
		void Deliver();
};

#endif
