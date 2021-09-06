/*4. Write a program which accept three numbers and print its multiplication.*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0


int Multiply(int iNo1, int iNo2, int iNo3)
{
	if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
	{
		return FALSE;
	}
	else if(iNo1 == 0)
	{
		iNo1 = 1;
	}
	else if(iNo2 == 0)
	{
		iNo2 =1;
	}
	else if(iNo3 == 0)
	{
		iNo3 = 1;
	}

	return iNo1*iNo2*iNo3;
}

int main()
{
	int iValue1 = 0, iValue2 = 0, iValue3 = 0;
	int iRet;

	printf("Enter three number: ");
	scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

	iRet = Multiply(iValue1, iValue2, iValue3);
	
	if(iRet == FALSE)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", iRet);
	}

	return 0;
}