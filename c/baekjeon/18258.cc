#include <stdio.h>
#include <string.h>

typedef struct queue{
    int* head;
    int* tail;    
}Queue;

    void push(int data,int* int_data,int index);
    void pop(int* int_data,int index);
    void size(int index);
    void empty(int inddex);
    void front(int* head);
    void back(int* tail);
        
        int main(){
            int int_data[2000001];
            int n;
            char* string;
            int data; 
            int index=0; 
            Queue q;
        

            q.head = &int_data[0];

               scanf("%d",&n);
                    for (int i = 0; i < n; i++)
                    {
                        scanf("%s",string);
                        if(strcmp(string,"push")==0){
                            scanf(" %d",&data); 
                            push(data,int_data,index);
                            q.tail = &int_data[index];
                            index ++;
                        }    
                            else if(strcmp(string,"pop")==0){
                                index--;
                               pop(int_data,index);
                                q.tail = &int_data[index]; 
                            }
                                else if(strcmp(string,"size")==0){
                                   size(index); 
                                }
                                    else if(strcmp(string,"empty")==0){
                                        empty(index);
                                    }
                                        else if(strcmp(string,"front")==0){
                                            front(q.head);
                                        }
                                            else{
                                                back(q.tail);
                                            } 
                    }
                     
        }

        void push(int data,int *int_data,int index){
            int_data[index] = data; 
            printf("%d",data);
        }
        void pop(int* int_data,int index){
           if(int_data[index] == '\0'){
               printf("-1\n");
           } 
                else{
                    printf("%d\n",int_data[index]);
                }
        }
        void size(int index){
            printf("%d\n",index+1);
        }
        void empty(int index){
            if(index ==0 )
                printf("1");
                    else
                        printf("0");
        }
        void fornt(int* head){
            if(head == NULL)
                printf("-1");
                    else
                        printf("%d",*head);
        }
         void back(int* tail){
            if(tail == NULL)
                printf("-1");
                    else
                        printf("%d",*tail);
        }