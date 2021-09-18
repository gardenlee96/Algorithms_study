#include <stdio.h>

int main(){
    int x;

    scanf("%d",&x);

    if(100 >= x && x >= 90)
        printf("A");
    else if(90 > x && x >= 80)
        printf("B");
    else if(80 > x && x >= 70)
        printf("C");
    else if(70 > x && x >= 60)
        printf("D");
    else if(60 > x )
        printf("F");

    return 0;
}