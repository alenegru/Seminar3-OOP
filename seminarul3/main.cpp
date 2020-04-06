#include "Auto.h"
#include "pkw.h"
#include "lkw.h"
#include "kunde.h"
#include "rental.h"
#include <iostream>
#include <assert.h>
#include <iostream>
using namespace std;

int main() {
    Rental r;

    Kunde k1(1, "client1");
    Kunde k2(2, "client2");

    Auto a1(1, "bmw", "x6");
    PKW p1("test", 2, "exemplu", "exemplu");
    LKW l1(1000,"bezeichnung", 3, "exemplu", "exemplu");

    r.addAuto(a1);
    r.addAuto(p1);
    r.addAuto(l1);

    r.addClient(k1);
    r.addClient(k2);

    assert(r.clients.size() == 2);
    assert(r.autos.size() == 3);

    r.deleteAuto(a1);
    assert(r.autos.size() == 2);

    r.deleteAuto(p1);
    r.deleteAuto(l1);
    assert(r.autos.size() == 0);

    Rental rental;

    Kunde kunde1(1, "client1");
    Kunde kunde2(2, "client2");

    Auto auto1(1, "bmw", "seria3");
    PKW pkw("test", 2, "exemplu", "exemplu");
    LKW lkw(1000, "bezeichnung", 3, "exemplu", "exemplu");

    r.addAuto(auto1);
    r.addAuto(pkw);
    r.addAuto(lkw);

    r.addClient(kunde1);
    r.addClient(kunde2);

    lkw.Load();
    lkw.Load();
    lkw.Unload();
    lkw.Load();

    assert(lkw.get_Gesamtgewicht() == 1002);
}
