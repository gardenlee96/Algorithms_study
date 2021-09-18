#include <stdio.h>  
int data[1000];

 int main(void){ 
     int i, j, temp, num;
      scanf("%d", &num); 

      for(i=0; i<num; i++){ 
          scanf("%d", &data[i]); 
          } // 버블 정렬 

          for(i=0; i<num; i++){ 
              for(j=0; j<num-1-i; j++){ 
                  if(data[j] > data[j+1]){
                       temp = data[j];
                        data[j] = data[j+1]; 
                        data[j+1] = temp; 
                        } 
                        } 
                        } 
                        for(i = 0; i<num; i++){ 
                            printf("%d\n", data[i]);
                             }
                              return 0; 
                             }