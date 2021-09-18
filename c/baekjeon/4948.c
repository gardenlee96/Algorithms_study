#include <stdio.h>
#include <math.h>

int is_prime(int number){
    int temp = (int)sqrt(number);
    
        for (int i = 2; i <= temp; i++)
        {
          if(number % i == 0) return 0; 
        }
      return 1;  
}

int main(){
    int number;

    while(1){ 
   int count = 0;
        scanf("%d",&number);
        if(number == 0) break;

            for (int i = number+1; i <= 2*number; i++)
            {
                count += is_prime(i);
            }
            printf("%d\n",count);
    } 

    return 0;
}