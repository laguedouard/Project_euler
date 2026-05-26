#include <iostream>
using namespace std;

int main() {
    long int N=600851475143;
    int max_factor = 1;
    int j =2;
    while (N > 1) {
        if (N % j == 0) {
            while (N % j == 0) {
                N /= j;
            }
            max_factor = j;
        }
        j++;
    }
    cout << max_factor << endl;
}