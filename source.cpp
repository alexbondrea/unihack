#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "checker.h"
#include "info.h"
using namespace std;

int main() {
    char input[100];
    bool opt = 1;
    char director_EVP[50], adresa_EVP[100], telefon_EVP[10], fax_EVP[10], email_tir[30], telef_tir[10], adresa_primarie[100], telef_civile[10], email_civile[30], locatie_childbirth[50], nume_primar[50], email_primar[30], telef_primar[10], fax_primar[10];
    ifstream in("primarie.txt");
    in >> director_EVP >> adresa_EVP >> telefon_EVP >> fax_EVP >> email_tir >> telef_tir >> adresa_primarie >> telef_civile >> email_civile >> locatie_childbirth >> nume_primar >> email_primar >> telef_primar >> fax_primar;
    in.close();
    cout << "Bun venit in Primaria Digital! Aici gasesti informatiile necesare pentru a interactiona cu primaria noastra." << endl;
    cout << "Sa incepem! ";
    std::vector<std::string> keywords;
    while (opt==1) {
        cout << "Scrie ce vrei sa faci azi: ";
        cin.get(input, 100);
        if (check_text(input, keywords={"buletin", "carte de identitate", "ci", "c.i.", "pasaport"})==1) {
            generalEVP_info(director_EVP, adresa_EVP, telefon_EVP, fax_EVP);
            EVPID_info(adresa_EVP); //check against C1: EVP ID
            continuous(opt);
        } else if (check_text(input, keywords={"casatorie", "stare civila", "starea civila"})==1) {
            generalEVP_info(director_EVP, adresa_EVP, telefon_EVP, fax_EVP);
            EVPMarry_info(adresa_primarie, telef_civile, email_civile); //check against C2: EVP Marriage
            continuous(opt);
        } else if (check_text(input, keywords={"tir", "camion", "tiruri", "camioane", "autorizatie", "oras"})==1) {
            Truckauth_info(email_tir, telef_tir); //check against C3: Truck permits
            continuous(opt);
        } else if (check_text(input, keywords={"alocatie", "bani copii"})==1) {
            ChildAllowance_info(); //check against C4: Legal guardian - child allowance
            continuous(opt);
        }else if (check_text(input, keywords={"nastere", "certificat de nastere"})==1) {
            ChildBirth_info(locatie_childbirth); //check against C5: Registering the birth of a child
            continuous(opt);
        } else if (check_text(input, keywords={"taxe", "amenda", "amenzi", "taxa"})==1) {
            LocalTaxes_info(adresa_primarie);
            ghiseulro_info(); //check against C6: Local taxes
            continuous(opt);
        } else if (check_text(input, keywords={"audienta", "primarie", "primaria", "primar", "primarul"})==1) {
            PublicRelations_info(nume_primar, adresa_primarie, email_primar, telef_primar, fax_primar); //check against C7: Public relations
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
