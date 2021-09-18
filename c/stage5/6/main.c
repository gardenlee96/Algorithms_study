#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int j = 0;
    scanf("%d",&n);
    fflush(stdin);
    char **string_pointer = malloc(sizeof(char *) * n);
    int count =0;
    int total_count = 0;

    for (int k = 0; k < n; ++k) {
        string_pointer[k] = malloc(sizeof(char) * 80);
        fgets(string_pointer[k],80,stdin);
    }


    for (int i = 0; i < n; ++i) {
        while (1){
            if(string_pointer[i][j] == 'O'){
                count++;
                total_count += count;
            } else
                count =0;

            j++;
            if(string_pointer[i][j] == '\0') {
                j = 0;
                count =0;
                printf("%d\n",total_count);
                total_count=0;
                break;
            }
        }
    }

    free(string_pointer);

    return 0;
}