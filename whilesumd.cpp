#include <stdio.h>
 
int sum (int a);
 /*  
 * C Program to find Sum of Digits of a Number using Recursion
 */
int main()
{
    int num, result;
 
    printf("Enter the number: ");
    scanf("%d", &num);
    int sum=0;
    while(num!=0)
    {
    	int temp=num%10;
    	sum+=temp;
    	num=num/10;
	}
    printf("Sum of digits is %d\n", sum);
    return 0;
}
