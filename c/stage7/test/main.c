#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int n;
    scanf("%d",&n);
    fflush(stdin);
    char* string_number;
    int sum = 0;
    int len;

    string_number = malloc(sizeof(char)*(n+2));

    fgets(string_number,sizeof(char) * (n+2),stdin);
    string_number[n] = '\0';

    len = strlen(string_number);
    for (int i = 0; i < len; ++i) {
        sum += (int)string_number[i];
    }

    printf("%d",sum - 48 * len);

}