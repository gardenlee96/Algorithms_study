#include <stdio.h>

int main(){
    int a,b,c,n,rest;
    int count_num[10] ={0,};

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);


        n = a * b * c;

            while(1){
                rest = n % 10;
                for (int i = 0; i <= 9; ++i) {
                    if(rest == i)
                        count_num[i]++;
                }
                if(n < 10)
                    break;

                n = n/10;
            }

    for (int j = 0; j < 10; ++j) {
        printf("%d\n",count_num[j]);
    }

    return 0;
}