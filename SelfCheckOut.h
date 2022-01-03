#ifndef SELFCHECKOUT_H
#define SELFCHECKOUT_H
//include all libraries to be used
#include <iostream>
#include <string>
#include "CASHIERCHECKOUT.h"
#include "MAINSCREEN.h"
#include "STRUCTURE.h"

using namespace std;
//create selfcheckout, inherit mainscreen
class selfcheckout : public mainscreen
{	
	public:
		void findcost(int newID, customer person[50]);
};
#endif
