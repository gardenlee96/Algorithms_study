#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    int x1,y1,r1,x2,y2,r2,sub;
    double length;

        scanf("%d",&n);    
        fflush(stdin);   

            for (int i = 0; i < n; i++)
            {
              scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);      
                length = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
                sub = r1 > r2 ? r1 - r2 : r2 - r1;

            if((length==0) && (sub == 0))
              printf("-1\n");
                else if((length == sub) || (length == (r1+r2)))
                      printf("1\n");
                            else if((length > sub) && (length < (r1 + r2)))
                                printf("2\n");
                                  else 
                                    printf("0\n");
            }
   return 0; 
}