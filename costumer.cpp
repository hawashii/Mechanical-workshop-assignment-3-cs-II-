#include "costumer.h"
#include <iostream>
#include"person.h"
using namespace std;
void costumer::setmechanicalid(int mechid) {
	mechanicalid = mechid;
}
void costumer::setappointment(int h, int m) {
	appointment.hours = h;
	appointment.minutes = m;
}
int costumer::getmechanicalid() {
	return mechanicalid;
}
person::appointments costumer::getappointment() {
	return appointment;
}
bool costumer:: operator==(const costumer& b) {
	if ((this->appointment.hours == b.appointment.hours) && (this->appointment.minutes == b.appointment.minutes)) {
		return true;
}
}
bool costumer::operator>(const costumer& b) {
	if ((this->appointment.hours > b.appointment.hours) || ((this->appointment.hours == b.appointment.hours) && (this->appointment.minutes > b.appointment.minutes)))
	{
		return true;
	}
	else return false;
}
bool costumer::operator<(const costumer& b) {
	if ((this->appointment.hours < b.appointment.hours) || ((this->appointment.hours == b.appointment.hours) && (this->appointment.minutes < b.appointment.minutes)))
	{
		return true;
	}
	else {
		return false;
	}
}

