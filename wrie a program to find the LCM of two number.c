#include <stdio.h>

int main() {
    int n1, n2, gcd, lcm, i;

    printf("Enter the first numbers= ");
    scanf("%d",&n1);
    printf("Enter the second number=");
    scanf("%d",&n2);

    for(i = 1; i <= n1 && i <= n2; i++) {
        if(n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("LCM = %d", lcm);

    return 0;
}