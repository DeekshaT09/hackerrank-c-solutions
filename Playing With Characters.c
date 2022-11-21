#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LIMIT 40
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    
    char ch;
    char s[MAX_LIMIT];
    char sen[MAX_LIMIT];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s",ch,s,sen);
    
    
    
    
    return 0;
}
