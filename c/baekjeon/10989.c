#include <stdio.h>

/*void quick_sort(int* array,int start,int end){
    if(start >= end) return;

    int priviot = start;
    int i = priviot + 1;
    int j = end;
    int temp;

    while (i <= j)
    {
        while(i <= end && array[i] <= array[priviot]){
            i++;
        }
        while(j > start && array[j] >= array[priviot]){
            j --;
        }

        if(i > j){
            temp = array[j];
            array[j] = array[priviot];
            array[priviot] = temp; 
        }
        else{
            temp = array[i];
            array[i] = array[j]; 
            array[j] = temp;
        }
    }

    quick_sort(array,start,j-1);
    quick_sort(array,j+1,end);
}
*/
/*void merge(int* array,int left,int mid,int right){
    int i,j,k;

        i = left;
        j = mid + 1;
        k = left;
            
            while(i <= mid && j <= right){
                if(array[i] <= array[j])
                    sorted[k++] = array[i++];
                    else   
                        sorted[k++]=array[j++];
            }


                    while(i <= mid)
                        sorted[k++] = array[i++];
                    while(j <= right)
                        sorted[k++] = array[j++];
                    for (int l = left; l <= right; l++)
                    {
                       array[l] = sorted[l]; 
                    }
                        

}

void merge_sort(int* array,int left,int right){
    int mid;

    if(left<right){
        mid = (left+right)/2;
        merge_sort(array,left,mid);
        merge_sort(array,mid+1,right);
        merge(array,left,mid,right);
    }
}
*/

int main(){
    int n;
    scanf("%d",&n);
    int array[10001]={0,};
    int temp;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&temp);
        array[temp] ++;
    }
        //quick_sort(array,0,n-1);
       
       for (int i = 1; i < 10001; i++)
       {
           for (int j = 0; j < array[i]; j++)
           {
              printf("%d\n",i);
           }
           
       }
       
        
     return 0;
        
}