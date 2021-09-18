#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int count=0;
    int number = 666;
    int op;
    int temp;
    scanf("%d",&n);

        while (1)
        {
         op = 0;
         temp = number;

            while (1)
            {
                if((number % 10) == 6){
                    op++;
                        if(op == 3){
                            count++;
                            break;
                        }
                }
                            else
                                op = 0;

                if(number < 10)
                   break;

                        number = number/10; 
            }
                number = temp;

                if((op ==3) && (n == count)){
                    printf("%d\n",number);
                    break;
                }
                        else
                            number++;
        }

               return 0; 
}