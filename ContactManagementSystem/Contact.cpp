#include "Contact.h"
#include <string>

int Contact::count = 0;

void Contact::setId() {
	//if (id == -1)
	count++;
	id = count;
}

Contact::Contact() {
	this->name = Name();
	this->address = Address();
	this->phone = "xxx-xxx-xxxx";

	//do not update count until attributes are assigned

	this->id = -1;
}
 
Contact::Contact(string firstName, string lastName, string street, string state, string zip, string phone) {
	this->name = Name(firstName, lastName);
	this->address = Address(street, state, zip);
	this->phone = phone;
}

Contact::Contact(const Contact& c) {
	this->name = c.name;
	this->address = c.address;
	this->phone = c.phone;
}

istream& operator>>(istream& in, Contact& rhs) {
	//int id;
	//in >> id;
	in >> rhs.name; // uses istream from name class
	in >> rhs.address; // uses istream from address class
	getline(in, rhs.phone);
	//in >> rhs.phone;
	//Contact::count++;
	//rhs.id = Contact::count;
	rhs.setId();
	return in;
}

ostream& operator<<(ostream& out, Contact& rhs) {
	out << rhs.id << "\n" << rhs.name << "\n" << rhs.address << "\n" << rhs.phone << "\n"; // split name and address into components

	return out;
}

Name Contact::getName() const {
	return name;
}

Address Contact::getAddress() const {
	return address;
}

string Contact::getPhone() const {
	return phone;
}

void Contact::setName(Name name) {
	this->name = name;
}

void Contact::setAddress(Address address) {
	this->address = address;
}

void Contact::setPhone(string phone) {
	this->phone = phone;
}


