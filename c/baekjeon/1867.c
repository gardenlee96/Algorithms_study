#include <stdio.h>
#include <stdlib.h>

void re_match(int **group,int *index,int * link,int temp) {
    int y;
    int temp_;

    if (index[temp] != 0) {
        y = group[temp][index[temp]];
        index[temp]--;

        if (link[y] == 0)
            link[y] = temp;

        else if(index[link[y]] == 0){
            re_match(group,index,link,temp);
        }

        else {
            temp_ = link[y];
            link[y]=temp;
            re_match(group, index, link, temp_);
        }
    }
}

void binary_matching(int **group,int* index,int *link,int n){
    int y;
    int temp;
    int test;

    for (int i = 1; i < n+1; ++i) {
        if(index[i] != 0){
            y = group[i][index[i]];
            index[i]--;

            test = index[link[y]];
            if(link[y] == 0)
                link[y] = i;

            else if(index[link[y]] == 0)
                re_match(group, index, link,i);

            else{
                temp = link[y];
                link[y] = i;
                re_match(group, index, link,temp);
            }

        }

    }
}


int main(){
    int n,m;
    int *index;
    int *link;
    int a,b;
    int** group_x;
    int x,y;
    int count = 0;

    scanf("%d %d",&n,&m);

    group_x = (int **)calloc(501, sizeof(int *));

    for (int l = 0; l < n+1; ++l)
        group_x[l] = (int *)calloc(501,sizeof(int));

    index = (int*)calloc(501, sizeof(int));
    link = (int *)calloc(501, sizeof(int));

    for (int j = 0; j <= n; ++j)
        index[j] = 0;

    for (int i = 0; i < m; ++i) {
        scanf("%d %d", &a, &b);
        index[a]++;
        group_x[a][index[a]]=b;
    }

    binary_matching(group_x,index,link,n);

    for (int k = 1; k < n+1; ++k)
        if(link[k])
            count++;

    printf("%d",count);





}