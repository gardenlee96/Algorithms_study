#include <stdio.h>

int main(){
    int n=0;
    int count =0;

    scanf("%d",&n);

        if(n < 100) {
            printf("%d", n);
        }

        else{
            for (int i = 100; i <= n; ++i) {


                if(((i - i % 100 )/100 - ((i % 100) - i % 10)/10) == ((i % 100 - i % 10)/10 - i % 10))
                    count ++;
            }
            count += 99;
            printf("%d",count);
        }


}