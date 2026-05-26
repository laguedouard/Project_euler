#include <iostream>
using namespace std;

int main() {
    int u_0 = 1, u_1 = 2;
    int sum = 0;
    while (u_1 < 4000000) {
        if (u_1 % 2 == 0) {
            sum += u_1;
        }
        int u_next = u_0 + u_1;
        u_0 = u_1;
        u_1 = u_next;
    }
    cout << sum << endl;
}