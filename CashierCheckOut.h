#ifndef CASHIERCHECKOUT_H
#define CASHIERCHECKOUT_H
#include <string>
//include all libraries to be used
#include <iostream>
#include "SELFCHECKOUT.h"
#include "MAINSCREEN.h"
#include "STRUCTURE.h"

using namespace std;
//creat class cashier checkout, inherit public mainscreen
class cashiercheckout : public mainscreen
{	
	public:
		void salesMenu();
		void dataEntryMenu(customer person[50]); 
};

#endif
