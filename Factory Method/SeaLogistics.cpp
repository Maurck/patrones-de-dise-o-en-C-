#include "SeaLogistics.h"
#include "Ship.h"

SeaLogistics::SeaLogistics()
{
}

Transport *SeaLogistics::CreateTransport()
{
	return new Ship();
}
