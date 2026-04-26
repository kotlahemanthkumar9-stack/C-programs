#include <stdio.h>
int main()
{
    int count=0;
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        int dig=num%10;
        if((dig%2)!=0)
        {
            count++;
        }
        num=num/10;
    } 
    printf("count of odd digits:%d",count);
    return 0;
}