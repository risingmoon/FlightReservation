#pragma once
#include "Flight.h"
#include <vector>

class Schedule
{
public: 
	Schedule() = default;

	void pushFlight(Flight& flight);
	void display();
private:
	vector<Flight> flights;
};

