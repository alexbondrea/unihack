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