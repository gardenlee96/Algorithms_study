#include <stdio.h>
#include <stdlib.h>

void link(int* data,int child,int parent){
   data[child] ++;
   data[parent] ++;
}


int main(){
    int total_input_count;
    int total_search_count;
    int *data;
    int child,parent;
    int choice,point;

       scanf("%d",&total_input_count);
       data = (int *)calloc(total_input_count+1, sizeof(int));
            for (int i = 1; i < total_input_count; ++i) {
               scanf("%d %d",&parent,&child) ;
                link(data,child,parent);
            }

                    scanf("%d",&total_search_count);
                        for (int j = 0; j < total_search_count; ++j) {
                           scanf("%d %d",&choice,&point);
                                if(choice == 2)
                                    puts("yes");
                                else if(data[point] >= 2){
                                   puts("yes");
                                } else
                                    puts("no");
                        }
}