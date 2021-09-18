#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    int data[N];
    int max=0;
    int sum = 0;


        for (int i = 0; i < N; i++)
        {
            scanf("%d",&data[i]);
        }

            for (int i = 0; i < N; i++)
            {
                for (int k = i+1; k < N; k++)
                {
                  for (int j = k+1; j < N; j++)
                  {
                    sum = data[i] + data[j] + data[k]; 
                     if(sum > max && sum <= M)
                        max = sum;

                  }
                   
                }
                
            }
           printf("%d",max) ;
        
    }