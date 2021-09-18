#include <stdio.h>

void sugar(int weight){
    int temp = weight;
    int count_5 = (weight / 5);
    int count_3;

    while(1){
        temp = weight;

        if(count_5 >= 0)
            temp = temp - (count_5 * 5);

        if((temp % 3) == 0){
            count_3 = temp/3;
            printf("%d",count_3+count_5);
            break;
        }
        else if(count_5 < 0) {
            printf("-1");
            break;
        }
        else count_5 --;
    }
}
int main(){
    int sugar_weight;

    scanf("%d",&sugar_weight);
    sugar(sugar_weight);

}