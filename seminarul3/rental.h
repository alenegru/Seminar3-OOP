#pragma once
#include "kunde.h"
#include "Auto.h"
#include <vector>
using namespace std;

class Rental {

public:
    vector<Kunde> clients;
    vector<Auto> autos;
    
	void addClient(Kunde c);
	void deleteClient(Kunde c);
	void updateClient(Kunde c, string newName);
	void addAuto(Auto a);
	void deleteAuto(Auto a);

};

