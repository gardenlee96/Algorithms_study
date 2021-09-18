#include <stdio.h>
#include <math.h>

int main(){
    
    double a,b,v;

        scanf("%lf %lf %lf",&a,&b,&v);
        printf("%d",(int)ceil((v-a)/(a-b)) + 1);

return 0;
}