#include <iostream>
#include <string>
#include <limits>

using namespace std;

void print(const std::string& text) {
    cout << text;
}

void input(string& variable, const string& prompt) {
    cout << prompt;
    cin >> variable;
}

void end() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}
void draw(int x, int y,char symbol) {
    //cout << x << y << symbol;
    int i = 1;
    int ii = 1;
    while (ii <= y) {
        while (i <= x) {
            cout << symbol;
            i++;
        }
        i = 1;
        cout << "\n";
        ii++;
    }
    ii = 0;
    i = 0;
}
void draw2(int x, int y,char symbol, int posX, int posY) {
    //cout << x << y << symbol;
    int i = 1;
    int ii = 1; 
    int iii = 1;
    int iiiii = 1;
    x = x + 2;
    while (posY >= iii) {
        print("\n");
        iii++;
    }
    while (ii <= y) {
        while (iiiii <= posX) {
            print(" ");
            iiiii++;
        }
        iiiii = 1;
        while (i <= x) {
            cout << symbol;
            i++;
        }
        i = 1;
        cout << "\n";
        ii++;
    }
    ii = 1;
    iii = 1;
    iiiii = 1;
    i = 1;
}
