#include <stdio.h>

void hanoi(int n,int from,int to,int middle_space){
   if(n ==1) {
       printf("%d %d\n",from,to);
       return ;
   }
   else{ 
    hanoi(n-1,from,middle_space,to);
    printf("%d %d\n",from,to);
    hanoi(n-1,middle_space,to,from);
    }
}

int main(){
    int n;
    int total_count=1;
    scanf("%d",&n);

   for (int i = 0; i < n; i++)
   {
       total_count *= 2;
   }
   total_count -= 1;


   printf("%d\n",total_count);

   hanoi(n,1,3,2);

   return 0;

}