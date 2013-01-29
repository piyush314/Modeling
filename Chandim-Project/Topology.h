#include "TrafficLight.h"
#include "IntersectionwithSignal.h"
#include "IntersectionwoSignal.h"
#include <iostream>

using namespace std;

class Topology
{
    TrafficLight I1EB, I1WB, I1NB, I1SB;
    TrafficLight I2EB, I2WB, I2NB, I2SB;
    TrafficLight I3EB, I3WB, I3NB, I3SB;
    TrafficLight I4EB, I4WB, I4NB, I4SB;
    
    VehicleQueue I1SI, I1SO, I1EI, I1EO, I1WI, I1WO, I12N, I12S, I2EI, I2EO, I2WI, I2WO, I23N, I23S, I3EI, I3EO, I3WO, I3WI, I34N, I34S, I4EI, I4EO, I4WI, I4WO, I45N, I45S, I5EI, I5EO, I5WI, I5WO, I5NI, I5NO;
                
    IntersectionwithSignal I1;//10th street
    IntersectionwithSignal  I2;//11th street
    IntersectionwithSignal I3; //12th street
    IntersectionwithoutSignal I4; //13th street
    IntersectionwithSignal I5; //14th street
};
