#ifndef MAINSCREEN_H
#define MAINSCREEN_H
//include all libraries to be used
#include <iostream>
#include "SELFCHECKOUT.h"
#include "CASHIERCHECKOUT.h"
#include <string>
#include "STRUCTURE.h"

using namespace std;

//create class mainscreen, declare members required for program
class mainscreen 
{
	public:
		int numberofcustomers = 5;
		int continueornot;
		int option, whichmenu;
		bool correctlogin = false;
		bool correctpassword;
		char ans;
		int num, num2;
		float discountcost;
		int id;
		int position, position2;
		int choice;
		int IDans, IDnum;
		int counter;
		float discount;
		float customercash;
		float customercashtotal = 0;
		char typeofdiscount;
		float cost = 0;
		int password;
		void mainmessage();
		float menu[11] = {0, 8, 14, 16, 15, 16, 17, 14, 15, 9, 9};
};
#endif
