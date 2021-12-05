#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void convert(string &input) {
    std::for_each(input.begin(), input.end(), [](char & c) {
        c = ::tolower(c);
    });
}
int check_text(string input, vector<std::string> keywords) {
    convert(input);
    for(const auto& keyword : keywords) {
        auto pos = input.find(keyword);
        if (pos!=std::string::npos) {
            return 1;
        }

    }
    return 0;
}

void continuous(bool &opt){
    char options[100];
    std::vector<std::string> key;
    cout << "Vrei sa cauti alte informatii? ";
    cin >> options;
    if (check_text(options, key={"da", "d", "yes", "ye", "aha", "sigur"})==1) {
        opt=1;
    } else if (check_text(options, key={"nu", "neh", "nup", "no", "altcandva", "nope"})==1) {
        opt=0;
        cout << "O zi buna!" << endl;
    } else {
        cout << "Poti repeta?" << endl;
        continuous(opt);
    }
}
