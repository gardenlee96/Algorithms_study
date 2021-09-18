#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define SIZE 10001

int main(){
    int number_array[SIZE];
    int calculation_value=0;
    int i;

    for (int l = 1; l < SIZE; ++l) {
        number_array[l] = 1;
    }


    for (int j = 0; j < SIZE; ++j) {

        if((number_array[j] == 1)) {
            i = j;
            while(1) {
                calculation_value = i;
                while (1) {
                    i += calculation_value % 10;
                    if (calculation_value < 10) {
                        break;
                    }
                    calculation_value = calculation_value / 10;
                }

                if(i >= SIZE)
                    break;
                number_array[i] = 0;
            }
        }
    }

    for (int k = 1; k < SIZE; ++k) {
        if(number_array[k] == 1)
            printf("%d\n",k);
    }

    return 0;
}