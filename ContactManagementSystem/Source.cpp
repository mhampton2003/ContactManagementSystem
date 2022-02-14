#include "Contact.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void loadContacts(istream& in, vector<Contact>& lst);
void saveContacts(ostream& out, const vector<Contact>& lst);
void addContact(vector<Contact>& lst);

int main() {

	ifstream fin("contact.txt");
	ofstream fout("output.out");
	if (!fout) {
		cout << "not found";
	}
	vector<Contact> contacts;
	loadContacts(fin, contacts);

	for (int i = 0; i < 2; ++i) {
		addContact(contacts);
	}

	//search
	string input = "yes";
	cout << "Would you like to search for a contact? Type yes or no: ";
	cin >> input;
	while (input == "yes") {
		cout << "Type the id of the contact you would like to see: ";
		int userId = -1;
		cin >> userId;
		for (int i = 0; i < contacts.length)

	}

	saveContacts(fout, contacts);

	return 0;
}

void loadContacts(istream& in, vector<Contact>& lst) {

	if (!in) {
		cout << "file not found";
		exit(5);
	}

	Contact c;
	while (in >> c) {
		lst.push_back(c);
		cout << c << endl;
	}
	
}


void saveContacts(ostream& out, const vector<Contact>& lst) {
	Contact c;
	out << c << endl;
}


void addContact(vector<Contact>& lst) {
	string firstName, lastName, street, state, zip, phone;
	cout << "Enter a new contact: " << endl;
	cout << "First Name: ";
	getline(cin, firstName);
	cout << "Last Name: ";
	getline(cin, lastName);
	cout << "Street: ";
	getline(cin, street);
	cout << "State: ";
	getline(cin, state);
	cout << "Zip: ";
	getline(cin, zip);
	cout << "Phone: ";
	getline(cin, phone);

	Contact c(firstName, lastName, street, state, zip, phone);
	lst.push_back(c);
}