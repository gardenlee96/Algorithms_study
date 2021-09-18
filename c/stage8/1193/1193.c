#include <stdio.h> 

int Array_number(int order){
    int sum = 0;
    int i=0;

    while (1)
    {
        i++;
        sum += i;
        if(order <= sum)
            break;
    }
    
    return i;
}

int main(){
    int i,order;
    int sum=0;
    scanf("%d",&order);


    i = Array_number(order);
    for (int j = 0; j < i; j++)
    {
        sum += j;
    }

    order -= sum;

    if(i % 2 ==0){
        printf("%d/%d\n",order,i - order + 1);
    }
    else 
    {
        printf("%d/%d\n",i-order + 1,order);
    }
    

    return 0;
}