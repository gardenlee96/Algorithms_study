#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    double score[n];
    double max;
    double average=0;

    for (int i = 0; i < n; ++i) {
        scanf("%lf",&score[i]);
    }

    max = score[0];

    for (int j = 0; j < n; ++j) {
        if(max <= score[j]) {
            max = score[j];

        }
    }


    for (int k = 0; k < n; ++k) {
            score[k] = (score[k]/max) * 100;
    }

    for (int l = 0; l < n; ++l) {
        average += score[l];
    }
    average = average/(double)n;

    printf("%lf",average);
}