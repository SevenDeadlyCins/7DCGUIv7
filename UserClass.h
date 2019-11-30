#include <iostream>
#include <vector>
#include "cabinetClass"
using namespace std;

class UserClass{
	private:
    vector <Cabinet> list; // list of cabinets

public:
    UserClass();
    ~UserClass(); 
    void addCabinet(Cabinet); 
    void removeCabinet(Cabinet);
    void viewCabinet();
};
