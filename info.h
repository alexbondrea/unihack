#include <iostream>
#include <iomanip>
#include <windows.h>
#include <shellapi.h>
using namespace std;

void generalEVP_info(char director_EVP[50], char adresa_EVP[100], char telefon_EVP[10], char fax_EVP[10]) {
    cout<<endl;

    cout<<"Program de lucru cu publicul - Evidenta Populatiei\n";
    cout<<left;
    cout<<
        setw(20) << "[Program]" << setw(20) << "[Depunerea actelor]" << setw(20) << "[Eliberarea documentelor]" <<
        "\n" <<
        setw(20) << "Luni - Vineri" << setw(20) << "   08.00 - 19.00" << setw(20) << "     19.00 - 20.00";

    cout<<endl<<endl;

    cout<<"Director executiv: "<< director_EVP << "\n";
    cout<<"Adresa: "<< adresa_EVP << "\n";
    cout<<"Numar de telefon: "<< telefon_EVP <<"\n";
    cout<<"FAX: "<< fax_EVP <<"\n";
}

void EVPID_info(char adresa_EVP[100]) {
    cout<<endl;

    cout<<"La nivelul Directiei de Evidenta a Persoanelor a Municipiului, cartile de identitate, cartile de identitate provizorii si vizele de resedinta se elibereaza, in termen de 7 zile calendaristice de la data depunerii cererii, cu exceptia situatiilor in care se efectueaza verificari in teren sau la alte structuri\n\n";

    cout<<"\n"<<left;
    cout<<"Termenul de valabilitate al C.I:\n";
    cout<<
        setw(20) << "[Varsta]" << setw(20) << "[Durata]" <<
        "\n" <<
        setw(20) << "14 - 18 ani" << setw(20) << "4 ani" <<
        "\n" <<
        setw(20) << "18 - 25 ani" << setw(20) << "7 ani" <<
        "\n" <<
        setw(20) << "Dupa 25 ani" << setw(20) << "10 ani" <<
        "\n" <<
        setw(20) << "Dupa 55 ani" << setw(20) << "Permanent";

    cout<<endl<<endl;
    cout<<"Eliberarea buletin la 14 ani: https://mag.wcoomd.org/uploads/2018/05/blank.pdf\n";

    cout<<"Eliberarea buletin la 18 ani: https://mag.wcoomd.org/uploads/2018/05/blank.pdf\n";

    cout<<"\n\n"<<left;
    cout<<
        setw(30) << "[Taxe speciale]" << setw(30) << "[Pret]" <<
        "\n" <<
        setw(30) << "Emiterea C.I." << setw(30) << "100 lei" <<
        "\n" <<
        setw(30) << "Emiterea C.I. provizoriu" << setw(30) << " 50 lei" <<
        "\n" <<
        setw(30) << "Acordarea vizei de resedinta" << setw(30) << " 50 lei" <<
        "\n" <<
        setw(30) << "Emiterea de dovezi" << setw(30) << " 20 lei";

    cout<<"\n\n";

    cout<<"Locatie: " << adresa_EVP <<"\n";
}

void Truckauth_info(char email_tir[30], char telef_tir[10]) {
    cout<<"\nInformatii generale:\nhttps://mag.wcoomd.org/uploads/2018/05/blank.pdf \n";
    //general info

    cout<<"\nTaxe:\nhttps://mag.wcoomd.org/uploads/2018/05/blank.pdf \n";
    //taxes

    cout<<"\nInformatii de contact: \nEmail: "<<email_tir<<"\nNumar de telefon: "<< telef_tir<<"\n";
    //contact info

}

void EVPMarry_info(char adresa_primarie[100], char telef_civile[10], char email_civile[30]) {
    cout<<endl;
    cout<<"Regulament: https://mag.wcoomd.org/uploads/2018/05/blank.pdf\n";

    cout<<endl<<left;
    cout<<
        setw(20) << "   [Zi/Ora]" << setw(20) << "9:00 - 11:30" << setw(20) << "14:00 - 14:45" << setw(20) << "12:00 - 13:30" <<
        "\n" <<
        setw(20) << "Luni - Vineri" << setw(20) << "Nu sunt taxe " << setw(20) << " Nu sunt taxe" << setw(20) << "Taxa: 300 lei" <<
        "\n" <<
        setw(20) << "   Sambata" << setw(20) << "   50 lei" << setw(20) << "   200 lei" << setw(20) << "    111 lei" <<
        "\n" <<
        setw(20) << "   Duminica" << setw(20) << "  100 lei" << setw(20) << "   400 lei" << setw(20) << "    222 lei";

    cout<<"\n\n[*]Precizam faptul ca taxele speciale se fac venit la bugetul local, ofiterii de stare civila care oficiaza casatoriile nu sunt si nu au fost retribuiti cu vreun procent din cuantumul acestor taxe.\n";
    cout<<"[*]In situatia in care nici unul dintre viitorii soti nu au domiciliu sau resedinta in municipiu se va adauga o taxa suplimentara de 200 lei\n";
    cout<<endl<<endl;

    cout<<"Locatie: "<< adresa_primarie "\n";
    cout<<"Informatii de contact:\nTelefon: "<<telef_civile<<"\nEmail:"<<email_civile<<"\n";
}

void ChildAllowance_info() {
    cout<<endl;

    cout<<"Informatii generale cu privinta la alocatia copiilor:\n"
          "[*] Toti copiii in varsta de pana la 18 ani, cetateni romani, fara discriminare\n"
          "[*] Tinerii care au implinit varsta de 18 ani si care urmeaza cursurile invatamantului liceal sau profesional, organizate in conditiile legii, pana la terminarea acestora.\n\n";

    cout<<"Documente doveditoare pentru solicitarea alocatiei de stat pentru copii:\n"
          "[*] Originalul si copia certificatului de nastere al copilului\n"
          "[*] Originalul si copia actului de identitate al reprezentantului legal\n"
          "[*] Documentele din care sa rezulte situatia juridica a copilului fata de reprezentantul legal\n"
          "[*] Pentru copilul cu handicap, cererea este insotita si de copia certificatului de incadrare a copilului intr-un grad de handicap\n\n";

    cout<<"Cerere pentru acordarea alocatiei de stat pentru copii: https://mag.wcoomd.org/uploads/2018/05/blank.pdf";
}

void ChildBirth_info(char locatie_childbirth[50]) {
    cout<<endl;

    cout<<"Termenul pentru declararea si inregistrarea nasterii copilului este de:\n"
          "[*] 30 zile de la data nastere, pentru copilul nascut viu si aflat in viata"
          "[*] 3 zile de la data nastere, pentru copilul nascut mort"
          "[*] 24 de ore de la data decesului pentru copilul nascut viu, dar care a decedat in termenului de 30 zile\n\n";

    cout<<"Acte necesare pentru inregistrarea nasterii:\n"
          "[*] Certificatul medical constatator al nasterii, intocmit pe formular tip, care trebuie sa poarte numar de inregistrare, data certa, sigiliul/stampila unitatii sanitare, semnatura si parafa medicului;\n"
          "[*] Certificatul de casatorie (original si fotocopie) / sentinta definitiva / certificatul de divort (original si fotocopie)\n"
          "[*] Actul de identitate al mamei (original si fotocopie)\n"
          "[*] Actul de identitate al declarantului (original si fotocopie), dupa caz\n\n";
          
    cout<<"Actele se depun la: "<< locatie_childbirth <<"\n";
}

void LocalTaxes_info(char adresa_primarie[50]) {
    cout<<endl;
    cout<<"Locatie: "<<adresa_primarie<<"\n\n";

    cout<<"Orar de functionare, Taxe si Impozite\n";
    cout<<"Luni, marti, miercuri : intre orele 13:00 16:00\n";
    cout<<"Joi : intre orele 13:00 17:30\n";
    cout<<"Vineri : intre orele 13:00-14:30\n\n";

    cout<<"[*] Plata taxelor si impozitelor locale mai poate fi efectuata online sau prin transfer bancar.\n";
}

void ghiseulro_info() {
    cout<<endl;
    cout<<"Taxele si impozitele se pot plati de asemenea si pe site-ul oficial: https://www.ghiseul.ro/ \n";
}

void PublicRelations_info(char nume_primar[50], char adresa_primarie[100], char email_primar[30], char telef_primar[10], char fax_primar[10]) {
    cout<<endl;
    cout<<"Nume primar:"<<nume_primar<< "\n";
    cout<<"Locatie: "<<adresa_primarie<<"\n\n";
    cout<<"Inscrierea se face pe baza de cerere scrisa, depusa cu cel putin o zi lucratoare inainte, la Registratura Primariei\n";
    cout<<"Model de cerere: https://mag.wcoomd.org/uploads/2018/05/blank.pdf\n";
    cout<<"Program de audiente\n"<<"De luni pana vineri, orele 08:00 16:00\n\n";

    cout<<"Date de contact:\n"<<"Email:" << email_primar <<"\n"<<"Telefon:"<<telef_primar<< "\n"<<"Fax:"<<fax_primar<< "\n";

}

void DecisionalTransperacy_info() {
    ShellExecute(0, 0, L"https://www.monitoruloficial.ro/article--e-Monitor--339.html", 0, 0 , SW_SHOW );
}
