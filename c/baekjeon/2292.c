#include <stdio.h>

int main(){
    int des;
    int an=2;
    int n=1;

    scanf("%d",&des);


    if (des < an)
    {
        printf("1");
    }
        else{
            while(1){
                    an += (6*n);
                if(des < an){
                        printf("%d",n+1);
                        break;
                    }
                    n++;
                }
        }

    return 0;
}