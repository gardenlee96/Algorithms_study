#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 102

int main(){

    char string[SIZE];
    int alphabet[26];

    for (int i = 0; i < 26; ++i) {
        alphabet[i] = -1;
    }

    fgets(string, sizeof(string),stdin);

    for (int j = 0; j < strlen(string); ++j) {
        if(alphabet[string[j] - 97] == -1){
            alphabet[(string[j]-97)] = j;
        }
    }


    for (int k = 0; k < 26; ++k) {
        printf("%d ",alphabet[k]);
    }

    return 0;
}