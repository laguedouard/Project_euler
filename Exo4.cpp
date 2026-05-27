#include <iostream>
using namespace std;

int main(){
    int max_pal=0;
    for (int i=100; i<1000; i++){
        for (int j=100; j<1000; j++){
            int product = i*j;
            int reversed_product = 0;
            int temp_product = product;
            while (temp_product > 0){
                reversed_product = reversed_product*10 + temp_product%10;
                temp_product /= 10;
            }
            if (product == reversed_product && product > max_pal){
                max_pal = product;
            }
        }
        
    }
    cout << max_pal << endl;
}