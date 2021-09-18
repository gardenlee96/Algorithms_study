#include <stdio.h>

int fibo_num(int n,int count,int number,int sum){

            if(n == count){
                return number+sum;
            }
                    else{
                        return fibo_num(n,++count,sum,number+sum);
                    }
}

int main(){
    int n;
    scanf("%d",&n);

    if(n == 0)
        printf("0");
        else if(n == 1)
            printf("1");
                else if(n == 2)
                    printf("1");
                        else
                            printf("%d",fibo_num(n,3,1,1));
}