#include "DS.h"

int main () {
    int i = 1;
    int ii = 0;
    while (true){
        cls();
        draw(9,5,"@", i, ii);
        timer(30);
        i = i +5;
        if (i >= 100){
            i = 1;
            ii = ii + 5;
        }
    }
}
