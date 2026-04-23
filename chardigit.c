
#include <stdio.h>

int main() {
    // Write C code here
    char ch;
    printf("Enter the character \n");
    scanf("%c",&ch);
    int res=(ch>='0')&&(ch<='9');
    printf("%c is a digit i.e is:%d",ch,res);
    return 0;
}