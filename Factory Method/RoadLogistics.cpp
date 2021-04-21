#include "RoadLogistics.h"
#include "Truck.h"

RoadLogistics::RoadLogistics()
{
}

Transport *RoadLogistics::CreateTransport()
{
	return new Truck();
}
