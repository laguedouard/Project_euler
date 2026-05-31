#include <iostream>
using namespace std;
#include <numeric> // for std::lcm

int main() {
    long long ans = 1;

    for (int i = 2; i <= 20; i++) {
        ans = lcm(ans, (long long)i);
    }

    cout << ans << endl;
}