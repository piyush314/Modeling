#pragma once

#include <queue>
#include "CommonDefs.h"
#include "TrafficLight.h"
#include "VehicleClass.h"

//#include "TrafficLight.h"

class Intersection
{
  protected:
	int ID;
	bool haveSignal;

	bool busy; // busy or not
	dir routingtable[12]; //for routing cars

public:
	VehicleQueue* EBI;
	VehicleQueue* WBI;
	VehicleQueue* NBI;
	VehicleQueue* SBI;

	VehicleQueue* ExitQ;

	Intersection* NInter;	//neighboring intersection in the North
	Intersection* SInter;	//neighboring intersection in the South
	

	virtual void addVehicletoQueue(VehicleQueue* joinqueue, VehicleClass* vehicle)=0;
	Intersection();
	Intersection(int);
	~Intersection();

	int getID()	{return ID;}

};

