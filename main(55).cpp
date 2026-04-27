#include <iostream>
#include "macros.h" 

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double x, z, w;

    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення z: ";
    cin >> z;

    #ifdef IS_BETWEEN
        if (IS_BETWEEN(z)) {
            double part1 = MIN(x, z);
            double part2 = MAX(x + z, x * z);
            w = part1 * part2;
        } else {
            double abs_diff = ABS(x - z);
            double max_val = MAX(abs_diff, z);
            w = SQR(max_val);
        }
    #else
        #error "Макрос IS_BETWEEN не визначено!"
    #endif

    PRINT_RESULT("w", w);

    return 0;
}
