#include "mechanic.h"
#include<iostream>
using namespace std;
bool mechanic:: isavailable(appointments b) {
	for (int i = 0; i < counter; i++) {
		if ((b.hours == mechanicapp[i].hours) && (b.minutes == mechanicapp[i].minutes)) {
			return false;
		}
		else return true;
}
}
void mechanic::setapp(appointments a) {
	 
		mechanicapp[counter] = a;
		counter++;
}
void mechanic::setcounter(int c) {
	counter = c;
}
int mechanic::getcounter() {
	return counter;
}
 void mechanic::getapp() {
	 for (int a = 0; a < counter; a++) {
		 cout << mechanicapp[a].hours<<" : "<< mechanicapp[a].minutes << endl;
	 }
}
