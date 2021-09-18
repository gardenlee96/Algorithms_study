#include <stdio.h>
#include <string.h>
int main(){
    int n=0;
    scanf("%d",&n);
    fflush(stdin);
    char string_array[81]={'\0'};
    int count =0;
    int total_count=0;
    int save_count[n];


    for (int i = 0; i < n; ++i) {
      scanf("%s",string_array);

        for (int j = 0; j < strlen(string_array); ++j) {
            if(string_array[j] == 'O'){
                count ++;
                total_count += count;
            } else
                count = 0;

        }
        save_count[i] = total_count;
        count = 0;
        total_count=0;
    }

    for (int k = 0; k <n; ++k) {
        printf("%d\n",save_count[k]);
    }

    return 0;
}