#include <iostream>
#include"costumer.h"
#include"mechanic.h"
#include"person.h"
#include"queuec.h"
#include<queue>
#include<cmath>
using namespace std;
int main() {
	// initalizing the mechanics information
	mechanic mech1;
	mechanic mech2;
	mechanic mech3;
	mech1.setname("ayman");
	mech2.setname("khaled");
	mech3.setname("mai");
	mech1.setid(1);
	mech2.setid(2);
	mech2.setid(3);
	// creating a table for the mechanics
	mechanic tablee[3] = {mech1, mech2, mech3};
	//initalizing the costumers information
	costumer cos1;
	costumer cos2;
	costumer cos3;
	costumer cos4;
	cos1.setname("ahmed");
	cos2.setname("sara");
	cos3.setname("karim");
	cos4.setname("mohamed");
	cos1.setappointment(1, 00);
	cos2.setappointment(4, 00);
	cos3.setappointment(3, 00);
	cos4.setappointment(1, 00);
	// creating a table for the costumers
	costumer table[4] = { cos1 , cos2, cos3, cos4 };
	// seting a mechanicaal to each costumer acccording to the availability
	int j = 0;
	for (int i = 0; i < 4; i++) {
		for (j; j < 4; j % 4) {
			if ((tablee[j].isavailable(table[i].getappointment())) == true) {
				table[i].setmechanicalid(tablee[j].getid());
				tablee[j].setapp(table[i].getappointment());
		
				j++;

			}
			else {
				table[i].setmechanicalid(tablee[j + 1].getid());
				tablee[j + 1].setapp(table[i].getappointment());
				
				j++;
			}
		}
	}
	// putting the costumers into a queue in order of their appointments using the overloaded operators
	queuec <costumer> costumersqueue;
	costumer temp;
	sort(table, table + 4);
	for (int m = 0; m < 4; m++) {
		costumersqueue.push(table[m]);
	}
	// printing the costumer name and the mechanical assigned to and their appointment time
	for (int n = 0; n < 4; n++) {
		cout << costumersqueue.pop().getname() << " is assigned to ";
		for (int h = 0; h < 3; h++) {
			if (tablee[h].getid() == (costumersqueue.pop().getmechanicalid())) {
				cout << tablee[h].getname() << endl;
			}
		}
		cout << " at " << costumersqueue.pop().getappointment().hours <<" : "<< costumersqueue.pop().getappointment().minutes;
	}
						
				
			

			
		
	

}
