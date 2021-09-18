#include <stdio.h>

int main() {
    int n;
    int a;
    int temp;
    int sum = 0;
    int flag=0;

    scanf("%d", &n);

    for (a = (n - 54); a < n; ++a) {
        sum = a;
        temp = a;
        while (temp > 0) {
            sum += (temp % 10);
            temp /= 10;
        }
        if (sum == n) {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("%d", a);
        else
            printf("0");
}
