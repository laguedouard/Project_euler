#include <iostream>
using namespace std;

bool is_prime(int n){
    if (n <= 1) return false;
    for (int i = 2; i <= n/2; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n = 0;
    int count = 0;
    while(count<=10000){
        n++;
        if(is_prime(n)){
            count++;
        }
    }
    cout << n << endl;
}