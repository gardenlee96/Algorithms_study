#include <stdio.h>

int main(){
    int min=0;
    int m1,m2;
    int count;
    int sum = 0;


    scanf("%d",&m1);
    fflush(stdin);
    scanf("%d",&m2);

    for (int i = m1; i <=  m2; i++)
    {
        count = 0;

        for (int j = 1; j <= i; j++)
        {
         if((i % j) == 0) 
           count ++; 
        }

        if(count ==2){
            sum += i;
            if(min == 0)
                 min = i; 
            }
    }
   
    if(sum == 0)
        printf("-1");
    else
    printf("%d\n%d",sum,min);

    return 0;
}