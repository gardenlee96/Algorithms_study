#include <stdio.h>

int main(){
    int array_value[10];
    int count = 0;
    int rest_value[42]={0,};
    int rest;

    for (int i = 0; i < 10; ++i) {
        scanf("%d",&array_value[i]);
    }


    for (int j = 0; j < 10; ++j) {
        rest = array_value[j]%42;
        for (int i = 0; i < 42; ++i) {
            if(rest == i)
                rest_value[i]++;
        }
    }

    for (int k = 0; k < 42; ++k) {
        if(rest_value[k] >= 1)
            count++;
    }

    printf("%d",count);

    return 0;
}