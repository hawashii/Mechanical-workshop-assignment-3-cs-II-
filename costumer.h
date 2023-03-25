#include <iostream>
#include "person.h"
using namespace std;

class costumer : public person
{
	int mechanicalid;
	appointments appointment;
public:
	void setmechanicalid(int mechid);
	void setappointment(int h, int m);
	int getmechanicalid();
	person::appointments getappointment();
	bool operator==(const costumer& b);
	bool operator>(const costumer& b);
	bool operator<(const costumer& b);
};

