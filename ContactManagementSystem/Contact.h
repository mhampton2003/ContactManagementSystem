#pragma once
#ifndef CONTACT_H
#define CONTACT_H
#include "Name.h"
#include "Address.h"
#include <iostream>

using namespace std;

class Contact {
private:
	Name name;
	Address address;
	string phone;
	int id;
	void setId(); // int id;

public:
	static int count;

	Contact();
	Contact(string, string, string, string, string, string);
	Contact(const Contact&);
	Name getName() const;
	Address getAddress() const;
	string getPhone() const;
	void setName(Name);
	void setAddress(Address);
	void setPhone(string);
	friend ostream& operator<<(ostream&, Contact&);
	friend istream& operator>>(istream&, Contact&);

};

#endif
