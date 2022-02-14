#pragma once
#ifndef NAME_H
#define NAME_H
#include <iostream>
using namespace std;

class Name {
private:
	string firstName;
	string lastName;

public:
	Name();
	Name(string, string);
	Name(const Name&);
	string getFirstName() const;
	string getLastName() const;
	string getFullName() const;
	void setFirstName(string);
	void setLastName(string);
	friend ostream& operator<<(ostream&, Name&);
	friend istream& operator>>(istream&, Name&);
};

#endif