#pragma once
#include <string>

using namespace std;
class Flight
{
public:
	Flight() = default;
	Flight(
		string flightAirline,
		string flightNumber,
		string flightDepartureTime,
		string flightArrivalTime,
		string flightDepartureDate,
		string flightArrivalDate,
		string flightOrigin,
		string flightDestination);
	void display();

	//Getter and Setter
	string getAirline();
	string getNumber();
	string getDepartureTime();
	string getArrivalTime();
	string getDepartureDate();
	string getArrivalDate();
	string getOrigin();
	string getDestination();


private: 
	string airline;
	string number;
	string departureTime;
	string arrivalTime;
	string departureDate;
	string arrivalDate;
	string origin;
	string destination;
};
