#include "Auto.h"
#include <iostream>
using namespace std;

Auto::Auto() {
    id = 0;
    marke = "?";
    modell = "?";
}

Auto::Auto(int id, string marke, string modell) {
	this->id = id;
	this->marke = marke;
	this->modell = modell;
}

// getters
int Auto::getId() { return this->id; }
string Auto::getMarke() { return this->marke; }
string Auto::getModell() { return this->modell; }

// setters
void Auto::setId(int newId) { this->id = newId; }
void Auto::setMarke(string newMarke) { this->marke = newMarke; }
void Auto::setModell(string newModell) { this->modell = newModell; }

void Auto::show_auto() {
    cout << "ID: " << id << " Marke: " << marke << " Modell: " << modell << endl;
}

