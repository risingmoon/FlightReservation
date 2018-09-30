#include "pch.h"
#include "Schedule.h"
#include "Flight.h"

void Schedule::addFlight(Flight& flight) {
	flights.push_back(flight);
}
