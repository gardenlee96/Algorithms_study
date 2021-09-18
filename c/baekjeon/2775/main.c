#include <stdio.h>

int apart[14][14];

void apart_ment(){
    int temp = 0;
    for (int k = 1; k < 14; ++k) {
        for (int i = 0; i < 14; ++i) {
            for (int j = 0; j <= i; ++j) {
               temp+= apart[k-1][j];
            }
            apart[k][i] = temp;
            temp = 0;
        }
    }
}

int main(){
    int k,n,test_case;
    int sum = 0;

       scanf("%d",&test_case);

    for (int j = 1; j <= 14; ++j) {
       sum += j;
       apart[0][j-1] = sum;
    }

    apart_ment();

    for (int i = 0; i < test_case; ++i) {
        

       scanf("%d %d",&k,&n);
        printf("%d\n",apart[k-1][n-1]);



    }


}