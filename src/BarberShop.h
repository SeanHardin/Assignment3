/*
 * BarberShop.h
 *
 *  Created on: Oct 30, 2017
 *      Author: Sean
 *      header for barbershop used in part 1. defined customer in here
 */

#ifndef BARBERSHOP_H_
#define BARBERSHOP_H_

#include <string>
#include "LinkedStack.h"
class Customer{
	string mfName;
	string mlName;
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
