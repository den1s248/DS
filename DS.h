#include <iostream>
#include <string>
#include <limits>

using namespace std;

void print(const std::string& text) {
    cout << text << endl;
}

void input(string& variable, const string& prompt) {
    cout << prompt;
    cin >> variable;
}

void end() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}