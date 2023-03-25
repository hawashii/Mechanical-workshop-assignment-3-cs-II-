#include<iostream>
using namespace std;



class person
{
private:
	string name;
	int id;
	int age;
public:
	person();
	void setname(string n);
	void setid(int idd);
	void setage(int a);
	string getname();
	int getid();
	int getage();
	void print();
	struct appointments {
		int hours;
		int minutes;
	};


};


