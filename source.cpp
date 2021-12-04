#include <iostream>
#include <vector>
#include <string>
#include "checker.h"
#include "info.h"
using namespace std;

int main() {
    char input[100];
    std::vector<std::string> keywords;
    cin.get(input, 100);
    //check against C1: EVP ID
    if (check_text(input, keywords={"buletin", "carte de identitate", "ci", "c.i.", "pasaport"})==1) {
        generalEVP_info();
        EVPID_info();
    }
    //check against C2: EVP Marriage
    if (check_text(input, keywords={"casatorie", "stare civila", "starea civila"})==1) {
        generalEVP_info();
        EVPMarry_info();
    }
    //check against C3: Truck permits
    if (check_text(input, keywords={"tir", "autorizatie tir", "acces oras"})==1) {
        Truckauth_info();
    }
    //check against C4: Legal guardian - child allowance
    if (check_text(input, keywords={"alocatie", "bani copii"})==1) {
        ChildAllowance_info();
    }
    //check against C5: Registering the birth of a child
    if (check_text(input, keywords={"nastere", "certificat de nastere"})==1) {
        ChildBirth_info();
    }
    //check against C6: Local taxes
    if (check_text(input, keywords={"taxe", "amenda", "amenzi", "taxa"})==1) {
        LocalTaxes_info();
        ghiseulro_info();
    }
    //check against C7: Public relations
    if (check_text(input, keywords={"audienta", "primarie", "primaria", "primar", "primarul"})==1) {
        PublicRelations_info();
    }
    //check against C8: Decisional transperency
    if (check_text(input, keywords={"decizii", "hotarare"})==1) {
        DecisionalTransperacy_info();
    }
}
