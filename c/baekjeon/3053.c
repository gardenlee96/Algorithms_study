#include <stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

void taxicap_geometry(int r){
    printf("%.6lf",(double)2*r*r);
}

void circle(int r){
    printf("%.6lf\n",M_PI*r*r);
}

int main(){
    int r;

        scanf("%d",&r);

        circle(r);
        taxicap_geometry(r);

        return 0;
}