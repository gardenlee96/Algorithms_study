#include <stdio.h>
#include <stdlib.h>

typedef struct data{
    int data_int;
    data* link;
}Data;

typedef struct queue{
    Data* head;
    Data* tail;
}Queue;


    int main(){
        int N,K;
        Data* index;
        Data* prev;
        Queue q;
        int count =0;
        Data* d;
        d = (Data*)malloc(sizeof(Data));
        index =d;

            scanf("%d %d",&N,&K);
            q.head = index;
            for (int i = 1; i < N ; i++)
            {
                index->data_int=i;
                index->link = (Data*)malloc(sizeof(Data));
                index = index -> link;            
            }
                
                    index ->data_int = N;
                    q.tail = index;
                    q.tail ->link = q.head;
                    index = q.head; 
                    prev = q.tail;
                                
                                printf("<");

                                        while(1){
                                            count ++;
                                            if(count == K){
                                                printf("%d, ",index->data_int);
                                                count = 0;
                                                prev->link = index ->link;
                                                index = index->link; 
                                            }        

                                                    else if(prev == index){
                                                        printf("%d>",index->data_int);
                                                        break;
                                                    }                                
                                                            else{
                                                                prev = prev->link;
                                                                index = index ->link;
                                                            }
                                        }

                        return 0;

               }