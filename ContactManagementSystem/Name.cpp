#include "Name.h"
#include <string>

Name::Name() {
	this->firstName = "";
	this->lastName = "";
}

Name::Name(string firstName, string lastName) {
	this->firstName = firstName;
	this->lastName = lastName;
}


Name::Name(const Name& n) {
	this->firstName = n.firstName;
	this->lastName = n.lastName;
}


string Name::getFirstName()const
{
	return firstName;
}

string Name::getLastName()const {
	return lastName;
}

string Name::getFullName()const {
	return firstName + " " + lastName;
}

void Name::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Name::setLastName(string lastName) {
	this->lastName = lastName;
}

ostream& operator<<(ostream& out, Name& rhs) {
	out << rhs.lastName << ", " << rhs.firstName;
	return out;
}

istream& operator>>(istream& in, Name& rhs) {
	getline(in, rhs.firstName);
	getline(in, rhs.lastName);
	return in;
}