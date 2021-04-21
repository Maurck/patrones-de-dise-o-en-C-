#include "Transport.h"
#ifndef LOGISTICS_H
#define LOGISTICS_H

class Logistics
{
	public:
		Logistics();
		
		void PlanDelivery();
		
		virtual Transport *CreateTransport() = 0;
};

#endif
