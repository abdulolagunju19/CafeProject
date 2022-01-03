//Abdul-Samad Olagunju
//Ms. Dalal
//Programming 35
//Cafe Final Project
//June 7, 2018

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
	mainscreen m;
	m.mainmessage();
	//thank you message
	cout << "Thank you for shopping at Abdul's Cafe! Come Back Again!" << endl;	
}
