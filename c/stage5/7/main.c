#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,student_count;
    int **score_pointer;
    int average = 0;
    double average_count=0;

    scanf("%d",&n);

    score_pointer = malloc(sizeof(int*) * n);

        for (int i = 0; i < n; ++i) {
            scanf(" %d",&student_count);
            score_pointer[i] = malloc(sizeof(int) * student_count);
        for (int j = 0; j < student_count; ++j) {
            scanf(" %d",&score_pointer[i][j]);
            average += score_pointer[i][j];
        }
        average = average / student_count;

            for (int k = 0; k < student_count; ++k) {
                if(average < score_pointer[i][k])
                    average_count++;
            }
                    average_count = average_count/student_count * 100;

                            printf("%.3f%%\n",average_count);
                             average_count = 0;
                             average = 0;
    }

}