#include <iostream>
#include "person.h"
using namespace std;
class mechanic :
    public person
{
private:
    int counter;
    person::appointments mechanicapp[3];
public:
    bool isavailable(appointments b);
    void setapp(appointments a);
    void getapp();
    void setcounter(int c);
    int getcounter();
};

