#ifndef ROADLOGISTICS_H
#define ROADLOGISTICS_H

#include "Logistics.h"

class RoadLogistics : public Logistics
{
	public:
		RoadLogistics();
		Transport *CreateTransport();
};

#endif
