#include <stdio.h>

int index_array[9] = {0,};
int order_array[9] = {0,};

void number_array(int N,int M,int count){

    if(M ==count){
        for (int i = 0; i < M; ++i) {
            if(order_array[i])
            printf("%d ",order_array[i]);
        }
        printf("\n");
    }
    else{
        for (int i = 1; i <= N; ++i) {
               if(index_array[i] == 0){
                   index_array[i] = 1;
                   order_array[count] = i;
                   number_array(N,M,++count);
                   order_array[count] = 0;
                   index_array[i] = 0;
                   count--;

               }
        }

    }

}

int main() {
    int N,M;

        scanf("%d %d",&N,&M);
        number_array(N,M,0);
}
