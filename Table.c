#include<stdio.h>
int main()
{
    int num;
	printf("\nEnter the number you want multiplication table of : ");
	scanf("%d", &num);

	printf("\nMultiplication table of %d is :", num);
	
    for (int i = 0; i <=10; i++)
    {
        printf("%d * %d = %d\n ", num, i , num *i);
    }
    

	return 0;
}