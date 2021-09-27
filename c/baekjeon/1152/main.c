#include <stdio.h>
#include <string.h>

int main(){
    char string[1000001];
    int count = 0;
    int size;

        scanf("%[^\n]s",string);
        size = strlen(string);

    if(size == 1)
        if(string[0] == ' '){
            printf("0\n");
            return 0;
        }

    for (int i = 1; i < size-1; ++i) {
        if(string[i] == ' ') {
            count++;
        }
    }


    printf("%d",count+1);

    return 0;
}