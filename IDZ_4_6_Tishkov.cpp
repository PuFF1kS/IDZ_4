#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double eps;
    cin >> eps;

    double sum = 0.0;
    double exact = 0.25;
    int n = 1;
    double diff;

    do {
        double a = 1.0 / (n * (n + 1) * (n + 2));
        sum += a;
        diff = fabs(sum - exact);
        n++;
    } while (diff >= eps);

    cout << "Приближённая сумма: " << sum << endl;
    cout << "Количество слагаемых: " << n - 1 << endl;
    cout << "Абсолютная погрешность: " << diff << endl;

    return 0;
}