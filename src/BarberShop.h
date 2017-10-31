/*
 * BarberShop.h
 *
 *  Created on: Oct 30, 2017
 *      Author: Sean
 */

#ifndef BARBERSHOP_H_
#define BARBERSHOP_H_

#include <string>
#include "LinkedStack.h"
class Customer{
	string fName;
	string lName;
public:
	Customer();
	Customer(string s1, string s2);
	string getName();
};

class BarberShop{
		LinkedStack<Customer> s1;
    	LinkedStack<Customer> s2;
	public:
    	void addCustomer( Customer& customer);
    	Customer nextCustomer();
};

#endif /* BARBERSHOP_H_ */
