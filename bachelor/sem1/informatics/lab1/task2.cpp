#include <iostream>
using namespace std;

int main() {
    int m = 10;
    int n = 5;

    // 1) m - ++n
    // n увеличивается до 6, затем 10 - 6 = 4
    int res1 = m - ++n;
    cout << res1 << endl;

    // 2) ++m > --n
    // m стало 11, n уменьшилось до 5. 11 > 5 - верно (1)
    int res2 = ++m > --n;
    cout << res2 << endl;

    // 3) --n < ++m
    // n стало 4, m стало 12. 4 < 12 - верно (1)
    int res3 = --n < ++m;
    cout << res3 << endl;

    return 0;
}
