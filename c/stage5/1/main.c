#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int array_number[n];
    int min,max;

    for (int i = 0; i < n; ++i) {
        scanf("%d",&array_number[i]);
    }

    min = array_number[0];
    max = array_number[0];

    for (int j = 0; j < n; ++j) {
        if(min >= array_number[j])
            min = array_number[j];

        if(max <= array_number[j])
            max = array_number[j];
    }

    printf("%d %d",min,max);

    return 0;
}