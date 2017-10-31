/*
 * BarberShop.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: Sean
 *      creates definitions for the barbershop.h file
 */

#include <iostream>
using namespace std;
#include "BarberShop.h"

//***PART II********************************************

Customer::Customer(){//constructor
	mfName = mlName = "";
}

Customer::Customer(string str1, string str2){//constructor
	mfName = str1;
	mlName = str2;
}

string Customer::getName(){//returns full name
	return mfName + " " + mlName;
}

void BarberShop::addCustomer(Customer& customer){//add customer to stack
	//EVIL CODE THAT BREAKS DESPITE WORKING FINE.
	s1.push(customer);
}

Customer BarberShop::nextCustomer(){//returns first customer to enter stack
	Customer c;
	if (!s1.isEmpty()){
		while (!s1.isEmpty()){//move all to stack 2
			s2.push(s1.pop().data);
		}
		c = s2.pop().data;//take the top value from stack 2
		while (!s2.isEmpty()){//move rest back to stack 1
			s1.push(s2.pop().data);
		}
	}
	return c;//return next customer in line
}
