#include "rental.h"
#include <iostream>
using namespace std;

void Rental::addClient(Kunde c) {
	if (clients.size() == 0) {
		clients.push_back(c);
		return;
	}

	for (auto i = clients.begin(); i != clients.end(); ++i) {
		if (i->getId() == c.getId()) {
			return;
		}
	}
	clients.push_back(c);

}

void Rental::addAuto(Auto a) {
	if (autos.size() == 0) {
		autos.push_back(a);
		return;
	}

	for (auto i = autos.begin(); i != autos.end(); ++i) {
		if (i->getId() == a.getId()) {
			return;
		}
	}
	autos.push_back(a);

}

void Rental::deleteClient(Kunde c) {
	if (clients.size() == 0) {
		return;
	}
	for (int i = 0; i < clients.size(); i++) {
		if (clients[i].getId() == c.getId()) {
			clients.erase(clients.begin() + i);
			return;
		}
	}
}

void Rental::deleteAuto(Auto a) {
	if (autos.size() == 0) {
		return;
	}
	for (int i = 0; i < autos.size(); i++) {
		if (autos[i].getId() == a.getId()) {
			autos.erase(autos.begin() + i);
			return;
		}
	}
}

void Rental::updateClient(Kunde c, string newName) {
	if (clients.size() == 0) {
		return;
	}
	for (int i = 0; i < clients.size(); i++) {
		if (clients[i].getId() == c.getId()) {
			clients[i].setName(newName);
		}
	}
}

void Rental::show_orders() {
    cout << "Orders:\n";

    for (int i = 0; i < clients.size(); i++) {
        cout << "ID: " << clients[i].getId() << " Name: " << clients[i].getName() << " List:\n";
        for (int j = 0; j < clients[i].orders.size(); j++)
            clients[i].orders[j].show_auto();
        cout << endl;
    }
     
}
