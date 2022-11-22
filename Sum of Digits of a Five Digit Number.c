#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,last_num,sum=0,temp;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    temp=n;
    while(temp>0)
    {
        last_num=temp%10;
        sum=sum+last_num;
        temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}
