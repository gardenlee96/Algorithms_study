#include <iostream>

int factorial(int n){
    int sum;

    if(n>0){
        sum = factorial(n-1) * n;
    }
    else
        sum =1;

        return sum;
}



int main(){
    int n = 3;

    std::cout << factorial(n) << std::endl;

    return 0;
}