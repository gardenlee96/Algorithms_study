#include <stdio.h>
int blue = 0;
int white = 0;
int paper[128][128];

void divid_paper(height_start,height_end,botton_start,botton_end){
    int check = paper[height_end][botton_start];

        for (int i = height_end; i <= height_start; ++i) {
            for (int j = botton_start; j <= botton_end ; ++j) {
                if(check != paper[i][j]){
                    divid_paper((height_end-height_start)/2,height_end,botton_start,(botton_end-botton_start)/2);
                    divid_paper((height_end-height_start)/2,height_end,(botton_end-botton_start)/2,botton_end);
                    divid_paper(height_start,(height_end-height_start)/2,botton_start,(botton_end-botton_start)/2);
                    divid_paper(height_start,(height_end-height_start)/2,(botton_end-botton_start)/2,botton_end);
                    return;
                }
            }
        }
                    if(check == 0)
                        white ++;
                    else
                        blue ++;

    return;


}

    int main(){
        int n;

            scanf("%d",&n);

                for (int i = 0; i < n; ++i) {
                    for (int j = 0; j < n; ++j) {
                        scanf("%d",&paper[i][j]);
                    }
                }
                divid_paper(n-1,0,0,n-1);
                    printf("%d\n",white);
                    printf("%d",blue);

        return 0;
    }
