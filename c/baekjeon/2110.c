#include <stdio.h>
#include <stdlib.h>

int compare(const void *first,const void *second){
    if(*(int*)first >*(int*)second)
    return 1;
    else if(*(int *)first <  *(int *)second)
    return -1;
    else
    return 0;
}

int main(){
    int N,C;
    scanf("%d %d",&N,&C);
    int House_location[N];
    int start,mid,end;
    int result =0;
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&House_location[i]);
            
        }
        
        qsort(House_location,N,sizeof(int),compare);

            start = 1;
            end = House_location[N-1] - House_location[0];

                while(start <= end){
                   int Wifi_machine_temp_count=1;
                   int prev_wifi=House_location[0];
                    mid = (start+end)/2;

                        for (int i = 0; i < N; i++)
                        {
                            if((House_location[i] - prev_wifi) >= mid){
                                Wifi_machine_temp_count++;
                                prev_wifi=House_location[i];
                            }                            
                        }

                                    if(Wifi_machine_temp_count >= C){
                                        result = mid;
                                        start = mid+1;
                                        
                             ;
                                    }
                                    else
                                        end = mid - 1;
                         
                }

                    printf("%d\n",result);        

       return 0; 
}