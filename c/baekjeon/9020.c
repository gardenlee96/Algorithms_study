#include <stdio.h>
#include <stdbool.h>

bool prime_number(int n){
    int count = 0;

        for (int i = 1; i <= n; i++)
        {
           if(n%i == 0)
                count ++;
        }

            if(count == 2) 
                return 1;
            else    
                return 0;
}

int main(){
    int n;
    int data;
    int temp;

        scanf("%d",&n);

            for (int i = 0; i < n; i++)
            {   
                scanf("%d",&data);
                temp = (data/2);
                    while(1){
                       if(prime_number(temp)){
                            if(prime_number(data - temp)){
                                printf("%d %d\n",temp,data-temp);
                                break; 
                            }
                       } 

                             
                                temp --; 
                    }       
            }


       return 0; 
}