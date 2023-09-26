#include <iostream>
using namespace std;
double pow(double x, int y) {
    long double c = 1;
    for (int i = 0; i < y; i++) {
        c = c * x;
    }
    return c;
}
double factorial2(int x) {
    long double c = 1;
    if (x % 2 == 0) {
        for (int i = 2; i <= x; i = i + 2) {
            c = c * i;
        }
    }
    else {
        for (int i = 1; i <= x; i = i + 2) {
            c = c * i;
        }
    }
    return c;
}
double t(double x) {
    long double chisl = 0;
    long double znam = 0;
    for (int k = 0; k <= 10; k++) {
        chisl += pow(x, 2 * k + 1) / factorial2(2 * k + 1);
    }
    for (int k = 0; k <= 10; k++) {
        znam += pow(x, 2 * k) / factorial2(2 * k);
    }
    long double t = chisl / znam;
    return t;
}

int main() {
    int y;
    cin >> y;
    long double otvet = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(pow(y, 2) - 1));
    cout << otvet;

    return 0;
}