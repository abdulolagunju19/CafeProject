//Abdul-Samad Olagunju

//include all libraries to be used
#include <iostream>
#include "SELFCHECKOUT.h"
#include "CASHIERCHECKOUT.h"
#include "MAINSCREEN.h"
#include "STRUCTURE.h"
#include <string>

using namespace std;

int main() 
{
	//welcome message
	cout << "Welcome to Abdul's Cafe!" << endl;
	//create object and call on function needed
	MainScreen m;
	m.mainMessage();
	//thank you message
	cout << "Thank you for shopping at Abdul's Cafe! Come Back Again!" << endl;	
}
