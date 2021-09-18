#include <stdio.h>

int main() {
int count=1,max;
int number_array[9];

    for (int i = 0; i < 9; ++i) {
        scanf("%d",&number_array[i]);
    }

    max = number_array[0];
    for (int j = 0; j < 9; ++j) {
        if(max <= number_array[j]){
            max = number_array[j];
            count = j+1;
        }
    }

    printf("%d\n%d",max,count);
    return 0;
}
