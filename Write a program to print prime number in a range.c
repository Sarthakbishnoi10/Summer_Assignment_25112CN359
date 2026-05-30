#include<stdio.h>
int main()
{
    int start,end,i,j,c;
    printf("Enter the starting number=");
    scanf("%d",&start);
    printf("enter the ending number=");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
    if(c==2)
    {
        printf("%d\n",i);
    }
}
return 0;
}