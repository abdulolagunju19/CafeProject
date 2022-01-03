//include all libraries to be used
#include <iostream>
#include "SELFCHECKOUT.h"
#include "CASHIERCHECKOUT.h"
#include "MAINSCREEN.h"
#include "STRUCTURE.h"
#include <string>

using namespace std;

void selfcheckout :: findcost(int newID, customer person[50]) 
{
	//create customers
	/*customer person[50];
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
	person[4].typeofdiscount = 'R';*/
	//show menu
	cout << "Abdul's Cafe and Bakery Breakfast Menu: " << endl;
	cout << "1. YOGURT PARFAIT | $8.00 |" << endl;
	cout << "2. BACON & EGG | $14.00 |" << endl;
	cout << "3. EGGS BENEDICT – CANADIAN | $16.00 |" << endl;
	cout << "4. EGGS BENEDICT – GARDEN | $15.00 |" << endl;
	cout << "5. EGGS BENEDICT – GRAVLAX | $16.00 |" << endl;
	cout << "6. CRAB & SPRING ONION OMELETTE | $17.00 |" << endl;
	cout << "7. BUTTERMILK WAFFLES | $14.00 |" << endl;
	cout << "8. HAZELNUT CHOCOLATE CRÈPE | $15.00 |" << endl;
	cout << "9. BACON BREAKFAST SANDWICH | $9.00 |" << endl;
	cout << "10. VEGGIE BREAKFAST SANDWICH | $9.00 |" << endl;
	//ask user for amount of products they would like to buy, and number of units
	do{
		cout << "Please choose the product you would like to purchase by entering the product number: ";
		cin >> num;
		cout << "How many units of the product would you like to purchase? ";
		cin >> num2;
		for(int i = 1; i <= 11; i++)
		{
			if(num == i)
			{
				for(int otheri = 0; otheri < num2; otheri++)
				{
					cost += menu[i];
				}
			}
		}
		cout << "Would you like to purchase another product? (y/n)";
		cin >> ans;
	}while(ans == 'y');
	//since it is self checkout, already know membership
	typeofdiscount = person[newID].typeofdiscount;
	if(typeofdiscount == 'E')
	{
		discount = 0.8;
	}
	if(typeofdiscount == 'R')
	{
		discount = 0.9;
	}
	discountcost = cost * discount;
	//show cost
	cout << "The total cost of your meal is $" << discountcost << "." << endl;
	do
	{
		//get customer cash, see if they have paid right amount
		cout << "Please enter the amount of money you would like to deposit: " << endl;
		cin >> customercash;
		customercashtotal += customercash;					
		if(customercashtotal > discountcost)
		{
			cout << "Here is your change: " << customercashtotal - discountcost << endl;
		}
		else if((customercash < discountcost) && (discountcost - customercashtotal != 0))
		{
			cout << "Here is the amount you still need to pay: " << discountcost - customercashtotal << endl;	
		}
	}while(customercashtotal < discountcost);
}


	
