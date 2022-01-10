//include all libraries to be used
#include <iostream>
#include "SELFCHECKOUT.h"
#include "CASHIERCHECKOUT.h"
#include "MAINSCREEN.h"
#include "STRUCTURE.h"
#include <string>

using namespace std;

void CashierCheckout :: salesMenu() 
{   //show menu
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
		cout << "Please choose the product the customer would like to purchase by entering the product number: ";
		cin >> num;
		cout << "How many units of the product would the customer like to purchase? ";
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
		cout << "Would the customer like to purchase another product? (y/n)";
		cin >> ans;
	}while(ans == 'y');
	do{
		//find out type of membership
		cout << "Select 'E' if the customer is an executive member, 'R' if the customer is a regular member, and 'N' if the customer is not a member: ";
		cin >> typeofdiscount;
	}while((typeofdiscount != 'E') && (typeofdiscount != 'R') && (typeofdiscount != 'N'));
	if(typeofdiscount == 'E')
	{
		discount = 0.8;
	}
	else if(typeofdiscount == 'R')
	{
		discount = 0.9;
	}
	else if(typeofdiscount == 'N')
	{
		discount = 1;
	}
	discountcost = cost * discount;
	//show cost
	cout << "The total cost of the meal is $" << discountcost << "." << endl;
	do
	{
		//get customer cash, see if they have paid right amount
		cout << "Please enter the amount of money the customer would like to deposit: " << endl;
		cin >> customercash;
		customercashtotal += customercash;					
		if(customercashtotal > discountcost)
		{
			cout << "Here is the change: " << customercashtotal - discountcost << endl;
		}
		else if((customercash < discountcost) && (discountcost - customercashtotal != 0))
		{
			cout << "Here is the amount the customer still needs to pay: " << discountcost - customercashtotal << endl;	
		}
	}while(customercashtotal < discountcost);
}

void CashierCheckout :: dataEntryMenu(customer person[50]) 
{
	/*//create 5 customers
	numberofcustomers = 5;
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
	person[4].typeofdiscount = 'R';*/
	//ask what user wants, to add, update, or delete
	do{
		cout << "To enter a new customer into the system, please select 1. To search for an ID in the system, please select 2. To update a customer's information, please select 3. To display all the information in the database, please select 4. To delete a customer, please select 5: ";
		cin >> IDans;
	}while((IDans != 1) && (IDans != 2) && (IDans != 3) && (IDans != 4) && (IDans != 5));
	if(IDans == 1)
	{
		cout << "Please enter the person's ID, username, password, and type of discount (E or R): ";
		cin >> person[numberofcustomers].ID >> person[numberofcustomers].username >> person[numberofcustomers].password >> person[numberofcustomers].typeofdiscount;
		numberofcustomers++;
	}
	if(IDans == 2)
	{
		cout << "Please enter the person's ID: ";
		cin >> IDans;
		for(int i = 0; i < numberofcustomers; i++)
		{
			if(IDans == person[i].ID)
			{
				cout << "ID: " << person[i].ID << endl << "Username: " << person[i].username << endl << "Password: " << person[i].password << endl << "Type of Discount: " << person[i].typeofdiscount << endl;
			}		
		}
	}
	if(IDans == 3)
	{
		cout << "Please enter the person's ID: ";
		cin >> IDans;
		cout << "Select 1 to edit the person's ID, 2 to edit the person's username, 3 to edit the person's password, or 4 to edit the person's type of discount (E or R): ";
		cin >> choice;
		if(choice == 1)
		{
			for(int i = 0; i < numberofcustomers; i++)
			{
				if(IDans == person[i].ID)
				{
					cout << "Please enter the person's new ID: ";
					cin >> person[i].ID;
				}		
			}
		}
		else if(choice == 2)
		{
			for(int i = 0; i < numberofcustomers; i++)
			{
				if(IDans == person[i].ID)
				{
					cout << "Please enter the person's new username: ";
					cin >> person[i].username;
				}		
			}
		}
		else if(choice == 3)
		{
			for(int i = 0; i < numberofcustomers; i++)
			{
				if(IDans == person[i].ID)
				{
					cout << "Please enter the person's new password: ";
					cin >> person[i].password;
				}		
			}
		}
		else if(choice == 4)
		{
			for(int i = 0; i < numberofcustomers; i++)
			{
				if(IDans == person[i].ID)
				{
					cout << "Please enter the person's new type of discount: ";
					cin >> person[i].typeofdiscount;
				}		
			}
		}
	}
	if(IDans == 4)
	{
		//sort before displaying
		for(int i = 0; i < numberofcustomers; i++)
		{
			for(int j = 0; j < numberofcustomers-1; j++)
			{
				if(person[j].ID > person[j+1].ID)
				{
					int temp = person[j+1].ID;
					person[j+1].ID = person[j].ID;
					person[j].ID = temp;
				}
			}
		}
		for(int i = 0; i < numberofcustomers; i++)
		{
			cout << "ID: " << person[i].ID << endl << "Username: " << person[i].username << endl << "Type of Discount: " << person[i].typeofdiscount << endl;
		}
	}
	if(IDans == 5)
	{
		cout << "Please enter the person's ID: ";
		cin >> IDans;
		for(int i = 0; i < numberofcustomers; i++)
		{
			if(IDans == person[i].ID)
			{
				position = i;
			}
		}
		position2 = numberofcustomers;
		position2--;
		for(int i = position; i <= position2; i++)
	    {
	    	person[i].ID = person[i+1].ID;
			person[i].username = person[i+1].username;
			person[i].password = person[i+1].password;
			person[i].typeofdiscount = person[i+1].typeofdiscount;
	    }
	    for(int i = 0; i < position2; i++)
		{
			cout << "ID: " << person[i].ID << endl << "Username: " << person[i].username << endl << "Type of Discount: " << person[i].typeofdiscount << endl;
		}
	}
	//sort customers
	for(int i = 0; i < numberofcustomers; i++)
	{
		for(int j = 0; j < numberofcustomers-1; j++)
		{
			if(person[j].ID > person[j+1].ID)
			{
				int temp = person[j+1].ID;
				person[j+1].ID = person[j].ID;
				person[j].ID = temp;
			}
		}
	}
}

