#include <stdio.h>
#include <string.h>
int main() {
    int n1;
    int n2;
    char string[21];

    scanf("%d", &n1);

    for (int i = 0; i < n1; ++i) {
        scanf("%d",&n2);
        fflush(stdin);
       scanf("%s",string);

                for (int j = 0; j < strlen(string); ++j) {
                    for (int k = 0; k < n2; ++k) {
                        printf("%c", string[j]);
                    }
                }
                printf("\n");
    }

    return 0;

}
