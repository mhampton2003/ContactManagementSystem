#include "Address.h"
#include <string>

Address::Address() {
	this->street = "";
	this->state = "";
	this->zip = "";
}

Address::Address(string street, string state, string zip) {
	this->street = street;
	this->state = state;
	this->zip = zip;
}

ostream& operator<<(ostream& out, Address& rhs) {
	out << rhs.street << "\n" << rhs.state << "\n" << rhs.zip;
	return out;
}

istream& operator>>(istream& in, Address& rhs) {
	getline(in, rhs.street);
	getline(in, rhs.state);
	getline(in, rhs.zip);
	return in;
}

string Address::getStreet() const {
	return street;
}

string Address::getState() const {
	return state;
}

string Address::getZip() const {
	return zip;
}

void Address::setStreet(string street) {
	this->street = street;
}

void Address::setState(string state) {
	this->state = state;
}

void Address::setZip(string zip) {
	this->zip = zip;
}