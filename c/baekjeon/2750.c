#include <stdio.h>

void bubble_sort(int* array,int n){
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }  
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",array[i]);
    }
}
    
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
        bubble_sort(array,n);
        
     return 0;
        
}