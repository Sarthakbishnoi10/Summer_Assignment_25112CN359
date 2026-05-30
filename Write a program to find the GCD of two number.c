#include<stdio.h>
int main()
{
    int i,n1,n2,GCD;
    printf("enter the first number=");
    scanf("%d",&n1);



    
    printf(" Enter the second number=");
    scanf("%d",&n2);
    for(i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            GCD=i;
        }
    }
    printf("%d",GCD);
    return 0;
}

    