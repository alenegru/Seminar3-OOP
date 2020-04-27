#pragma once
#include <string>
#include "Auto.h"
#include <vector>
using namespace std;
class Kunde
{
private:
	int id;
	string name;

public:
	Kunde(int id, string name);
    Kunde();
    vector <Auto> orders;
	// getters
	int getId();
	string getName();

	// setters
	void setId(int newId);
	void setName(string newName);
    void show_clients();
};

