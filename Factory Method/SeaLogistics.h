#ifndef SEALOGISTICS_H
#define SEALOGISTICS_H

#include "Logistics.h"

class SeaLogistics : public Logistics
{
	public:
		SeaLogistics();
		Transport *CreateTransport();
	protected:
};

#endif
