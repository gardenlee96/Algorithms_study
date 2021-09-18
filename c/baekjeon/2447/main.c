#include <stdio.h>

void star(char** prev_star,int N,int count,int curr_count) {
    char curr_star[N][N];

        if(count == curr_count){
                for (int i = 0; i < N/3; ++i) {
                    for (int j = 0; j < N/3; ++j) {
                       printf("%c",curr_star[i][j]);
                    }
                }
                return;
            }

        else {
            for (int i = 0; i < N / 3; i++) {
                for (int j = 0; j < N / 3; ++j) {
                    curr_star[i][j] = prev_star[i][j];
                    curr_star[i + 2 * N][j] = prev_star[i][j];
                    curr_star[i + 3 * N][j] = prev_star[i][j];
                    curr_star[i][j + N] = prev_star[i][j];
                    curr_star[i + 2 * N][j + N] = prev_star[i][j];
                    curr_star[i][j + 2 * N] = prev_star[i][j];
                    curr_star[i + N][j + 2 * N] = prev_star[i][j];
                    curr_star[i + 2 * N][j + 2 * N] = prev_star[i][j];
                }
            }
             curr_star(curr_star,3*N,count,++count);
            return ;
        }
}


int tree_count(int n){
    int count = 0;

    while(n > 1){
       n /= 3;
       count ++;
    }

    return count;
}

int main(){
    int n;
    char star[1][1] = {'*'};
    scanf("%d",&n);


        if(n == 1)
            printf("*");
        else{
            star(star,3,tree_count(n),0);
        }
}