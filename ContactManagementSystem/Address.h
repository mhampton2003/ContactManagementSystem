#pragma once
#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
using namespace std;

class Address {
private:
	string street;
	string state;
	string zip;

public:
	Address();
	Address(string, string, string);
	string getStreet() const;
	string getState() const;
	string getZip() const;
	void setStreet(string);
	void setState(string);
	void setZip(string);
	friend ostream& operator<<(ostream&, Address&);
	friend istream& operator>>(istream&, Address&);
};

#endif
