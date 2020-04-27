#include "kunde.h"
#include <string>
#include <iostream>
using namespace std;

Kunde::Kunde() {
    this->id = 0;
    this->name = "?";
}

Kunde::Kunde(int id, string name) {
	this->id = id;
	this->name = name;
}

// getters
int Kunde::getId() { return this->id; }
string Kunde::getName() { return this->name; }

// setters
void Kunde::setId(int newId) { this->id = newId; }
void Kunde::setName(string newName) { this->name = newName; }

void Kunde::show_clients() {
    cout << "ID: " << id << " Name: " << name << endl;
}
