//include all libraries to be used
#include <iostream>
#include "SELFCHECKOUT.h"
#include "CASHIERCHECKOUT.h"
#include "MAINSCREEN.h"
#include "STRUCTURE.h"
#include <string>

using namespace std;

void MainScreen :: mainMessage()
{
	//create information for five customers
	customer person[50];
	person[0].ID = 11;
	person[0].username = "joe@gmail.com";
	person[0].password = "bobby";
	person[0].typeofdiscount = 'E';
	person[1].ID = 12;
	person[1].username = "kyle@gmail.com";
	person[1].password = "drew";
	person[1].typeofdiscount = 'E';
	person[2].ID = 13;
	person[2].username = "narr@gmail.com";
	person[2].password = "dog";
	person[2].typeofdiscount = 'R';
	person[3].ID = 18;
	person[3].username = "daad@gmail.com";
	person[3].password = "doop";
	person[3].typeofdiscount = 'R';
	person[4].ID = 166;
	person[4].username = "narrkk@gmail.com";
	person[4].password = "dogmath";
	person[4].typeofdiscount = 'R';
	int othernum;
	//do while so that customer enters correct id and password
	do{
		numberofcustomers = 5;
		cout << "Please enter your correct login information: " << endl;
		cout << "ID: ";
		cin >> id;
		cout << "Password: ";
		cin >> person[40].password;
		for(int i = 0; i <= numberofcustomers; i++)
		{
			if((id == person[i].ID) && (person[40].password == person[i].password))
			{
				othernum = i;
				correctlogin = true;
			}
		}
	}while(correctlogin == false);
	//do while if user wants to continue shopping
	do{
		//so user enters 1 or 2
		do
		{
			if(correctlogin == true)
			{
				cout << "Please enter option 1 or option 2 in order to identify your preferred method of check out. " << endl;
				cout << "Option 1: Self Check Out" << endl; 
				cout << "Option 2: Check Out by Cashier" << endl;
				cin >> option;
			}
		}while((option != 1) && (option != 2));
		if(option == 1)
		{
			//create object s for self check out
			SelfCheckOut s;
			s.findcost(othernum, person);
		}
		if(option == 2)	
		{	
			//create object c for cashiercheckout
			CashierCheckOut c;
			//must enter 1 or 2 to enter sales menu of data entry menu
			do{
				cout << "Select 1 to enter the sales menu, or 2 to enter the data entry menu: ";
				cin >> whichmenu;
			}while((whichmenu != 1) && (whichmenu != 2));
			if (whichmenu == 1)
			{
				//call on function for sales menu
				c.salesMenu();
			}
			else if(whichmenu == 2)
			{
				//call on function for data entry menu
				c.dataEntryMenu(person);
			}
		}
		cout << "If you would like to continue shopping, press 1. If you would like to quit the program, press 2: ";
		cin >> continueornot;
	}while(continueornot == 1);
}
