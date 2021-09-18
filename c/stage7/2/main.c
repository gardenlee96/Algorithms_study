#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    fflush(stdin);
    char* string_number;
    int sum = 0;


    string_number = malloc(sizeof(char)*(n+2));

    scanf("%s",string_number);

    for (int i = 0; i < n; ++i) {
        sum += (int)string_number[i];
    }

        printf("%d",sum - 48 * n);

}