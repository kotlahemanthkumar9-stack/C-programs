// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int temp;
    printf("Enter the temparature:\n");
    scanf("%d",&temp);
    int summer;
    printf("Enter 1 for the summer and 0 for the Not summer:\n");
    scanf("%d",&summer);
    if(summer==1)
    {
        if(temp>=60&&temp<=100)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        if(temp>=60&&temp<=90)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }

    return 0;
}