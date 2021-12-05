#include <iostream>
#include <vector>
#include <string>
#include "checker.h"
#include "info.h"
using namespace std;

int main() {
    char input[100];
    bool opt = 1;
    cout << "Bun venit in Primaria Digital! Aici gasesti informatiile necesare pentru a interactiona cu primaria noastra." << endl;
    cout << "Pentru a incepe, scrie ce vrei sa faci azi: ";
    std::vector<std::string> keywords;
    while (opt==1) {
        cin.get(input, 100);
        if (check_text(input, keywords={"buletin", "carte de identitate", "ci", "c.i.", "pasaport"})==1) {
            generalEVP_info();
            EVPID_info(); //check against C1: EVP ID
            continuous(opt);
        } else if (check_text(input, keywords={"casatorie", "stare civila", "starea civila"})==1) {
            generalEVP_info();
            EVPMarry_info(); //check against C2: EVP Marriage
            continuous(opt);
        } else if (check_text(input, keywords={"tir", "camion", "tiruri", "camioane", "autorizatie", "oras"})==1) {
            Truckauth_info(); //check against C3: Truck permits
            continuous(opt);
        } else if (check_text(input, keywords={"alocatie", "bani copii"})==1) {
            ChildAllowance_info(); //check against C4: Legal guardian - child allowance
            continuous(opt);
        }else if (check_text(input, keywords={"nastere", "certificat de nastere"})==1) {
            ChildBirth_info(); //check against C5: Registering the birth of a child
            continuous(opt);
        } else if (check_text(input, keywords={"taxe", "amenda", "amenzi", "taxa"})==1) {
            LocalTaxes_info();
            ghiseulro_info(); //check against C6: Local taxes
            continuous(opt);
        } else if (check_text(input, keywords={"audienta", "primarie", "primaria", "primar", "primarul"})==1) {
            PublicRelations_info(); //check against C7: Public relations
            continuous(opt);
        } else if (check_text(input, keywords={"decizii", "hotarare"})==1) {
            DecisionalTransperacy_info(); //check against C8: Decisional transperency
            continuous(opt);
        } else {
            cout << "Ne pare rau dar nu am inteles. Poti repeta?" << endl;
            opt=1;
        }
        cin.ignore(256, '\n');
    }
}
