#include <stdio.h>

int main(){
    int n;
    int c,w,h;

    scanf("%d",&n);


    for (int i = 0; i < n; ++i) {
        int floor_count=0;
        scanf("%d %d %d",&h,&w,&c);

        for (int j = 0; j < w; ++j) {
            for (int k = 0; k < h; ++k) {
                floor_count++;
                if (floor_count == c)
                    printf("%d", ((k + 1) * 100 + (j + 1)));
            }
            }
        printf("\n");
        }
    return 0;
    }