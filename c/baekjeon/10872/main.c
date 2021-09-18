#include <stdio.h>

/*int factorial(int n){
    if(n ==1)
        return 1;
    else
        return n * factorial(n-1);
}
*/

int main(){
    int n;
    int sum =1;

        scanf("%d",&n);
    for (int i = 1; i <= n ; ++i) {
       sum *= i;
    }

    printf("%d",sum);
   return 0;
}