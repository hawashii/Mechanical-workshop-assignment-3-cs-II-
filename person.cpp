#include "person.h"
#include <iostream>
using namespace std;
person::person() {
	name = "unknown";
	id = 0;
	age = 0;
}
void person::print() {
	cout << name << endl << id << endl << age << endl;
}
void person::setname(string n) {
	name = n;
}
void person::setid(int idd) {
	id = idd;
}
void person::setage(int a) {
	age = a;
}
string person::getname() {
	return name;
}
int person::getid() {
	return id;
}
int person::getage() {
	return age;
}
