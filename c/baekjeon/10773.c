#include <stdio.h>

void is_mistake(int* array){
    int total_k;
    int n;
    int array_count = 0;

        for (int i = 0; i < total_k; i++)
        {
            scanf("%d",&n);
            if(n == 0){
                array_count --;
                array[array_count] = 0;
            }
            else{
                array[array_count] = n;
                array_count++;
            }
        }
}



int main(){
    int array[100000]={0,};
    int sum=0;

        is_mistake(array);

            for (int i = 0; i < 100000; i++)
            {
                sum += array[i];
            }
            printf("%d",sum);
            
      return 0;
}