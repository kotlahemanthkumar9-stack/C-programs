#include <stdio.h>
int main()
{
    int sum=0;
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        int dig=num%10;
        if((dig%2)==0)
        {
            sum=sum+dig;
        }
        num=num/10;
    } 
    printf("sum of even digits:%d",sum);
    return 0;
}