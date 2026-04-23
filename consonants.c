
#include <stdio.h>

int main() {
    // Write C code here
    char ch;
    printf("Enter the character \n");
    scanf("%c",&ch);
    int res=!((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')||(ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'));
    printf("%c is a consonant i.e is:%d",ch,res);
    return 0;
}