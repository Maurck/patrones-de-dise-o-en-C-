#include "Logistics.h"

Logistics::Logistics()
{

}

void Logistics::PlanDelivery()
{
	Transport *t = CreateTransport();
	t->Deliver();
}
