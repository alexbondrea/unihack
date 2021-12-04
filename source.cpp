#include <iostream>
#include <vector>
#include <string>
#include "checker.h"
using namespace std;

int main() {
    char input[100];
    std::vector<std::string> keywords;
    cin.get(input, 100);
    //check against C1: EVP ID
    if (check_text(input, keywords={"buletin", "carte de identitate", "ci", "c.i.", "pasaport"})==1) {
        cout << "am gasit fra";
    }
    //check against C2: EVP Marriage
    if (check_text(input, keywords={"casatorie", "stare civila", "starea civila"})==1) {
        cout << "traiasca mirii";
    }
    //check against C3: Truck permits
    if (check_text(input, keywords={"tir", "autorizatie tir", "acces oras", "camion", "camioane"})==1) {
        cout << "Vrum vrum && Tit tit!";
    }
    //check against C4: Legal guardian - child allowance
    if (check_text(input, keywords={"alocatie", "bani copii"})==1) {
        cout << "Baiatu meu, ai gresit buzunaru! $$$";
    }
    //check against C5: Registering the birth of a child
    if (check_text(input, keywords={"nastere", "certificat de nastere"})==1) {
        cout << "La multi ani! tag-radag-ra-dag-dag!";
    }
    //check against C6: Local taxes
    if (check_text(input, keywords={"taxe", "amenda", "amenzi", "taxa"})==1) {
        cout << "Here comes the money! here we go again...";
    }
    //check against C7: Public relations
    if (check_text(input, keywords={"audienta", "primarie", "primaria", "primar", "primarul"})==1) {
        cout << "Alta intrebare?";
    }
    //check against C8: Decisional transperency
    if (check_text(input, keywords={"decizii", "hotarare"})==1) {
        cout << "Dura lex, sed lex.";
    }
}