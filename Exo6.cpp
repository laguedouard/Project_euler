#include <iostream>
using namespace std;

long long sum_square(int N){
    long long sum = 0;
    for (int i=1;i<=N;i++){
        sum += i*i;
    }
    return sum;
}

long long sum_squared (int N){
    long long sum = 0;
    for (int i=1;i<=N;i++){
        sum+=i;
    }
    return sum*sum;
}

int main(){
    cout<<sum_squared(100)-sum_square(100)<<endl;
}