#include <stdio.h>

double factorial(int x){

   if(x != 0 )
    return x * factorial(x -1);
   else
       return 1;
}


double bridge_link(int N,int M){
    return factorial(M) / (factorial(N) * factorial(M - N));
}

    int  main(){
    int n,N,M;

        scanf("%d",&n);
        for (int i = 0; i < n; ++i) {
            scanf("%d %d",&N,&M);
           printf("%.lf\n",bridge_link(N,M));
        }
    }