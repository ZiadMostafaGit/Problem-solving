#include <iostream>
#include <cmath>

using namespace std;

double f(double n, double c, double time) {
    return c * n * log2(n) - time;
}

int main() {
    double c, time;
    cin >> c >> time;

    double a = 1, b = time / c;
    double mid, fmid;
    double eps = 1e-6;

    while (b - a > eps) {
        mid = (a + b) / 2;
        fmid = f(mid, c, time);
        if (fmid > 0) {
            b = mid;
        } else {
            a = mid;
        }
    }

    cout.precision(6);
    cout << fixed << a << endl;

    return 0;
}