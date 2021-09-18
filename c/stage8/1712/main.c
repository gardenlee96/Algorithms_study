#include <stdio.h>

int main(){
    long fixed_fee,making_fee,sell_price;


    scanf("%ld %ld %ld",&fixed_fee,&making_fee,&sell_price);



        if(sell_price <= making_fee) {
        printf("-1");
            return 0;
        }

        printf("%ld",fixed_fee/(sell_price-making_fee) +1);

    return 0;

    }
