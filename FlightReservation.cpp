#include "pch.h"
#include "Flight.h"
#include "Schedule.h"
#include <string>
#include <iostream>

int main()
{
	Flight flight1("AA123");
	flight1.display();

	Flight flight2;
	flight2.setNumber("UA123");
	flight2.display();

	Schedule schedule;
	schedule.addFlight(flight1);
}