#include <iostream>
#include "RoadLogistics.h"
#include "SeaLogistics.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	RoadLogistics *rl = new RoadLogistics();
	rl->PlanDelivery();
	
	SeaLogistics *sl = new SeaLogistics();
	sl->PlanDelivery();
	
	system("pause");
}
