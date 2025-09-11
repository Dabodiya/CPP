#include <stdio.h>
#include <math.h>
 
int rev(int, int);
 
int main()
{
    int num, result,rem;
    int length = 0, temp;
 
    printf("Enter an integer number to reverse: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        length++;
        temp = temp / 10;
    }
    while(num!=0)
    {
    	rem=num%10;
    	temp=temp*10+rem;
    	num=num/10;
	}
    printf("The reverse is %d.\n", temp);
    return 0;
}
