#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// This code finds the product of the Pythagorean triplet for which a + b + c = 1000

int main(){
    for(int a=1;a<=999;a++){
        for(int b=a+1;b<=999;b++){
            int c=1000-a-b;
            if (a*a+b*b==c*c){
                cout << a*b*c << endl;
            }
        }
    }
    return 0;
}