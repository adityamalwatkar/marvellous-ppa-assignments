/*5. Write a program which accept total marks & obtained marks from user and
calculate percentage.*/

#include<stdio.h>

float Percentage(float iNo1, float iNo2)
{
	float percent = 0.0;

	percent = (iNo2 * 100)/iNo1;

	return percent;
}

int main()
{
	float iValue1 = 0, iValue2 = 0;
	float fRet = 0.0;

	printf("Please enter totle marks: ");
	scanf("%f", &iValue1);

	printf("Please enter obtained marks: ");
	scanf("%f", &iValue2);

	fRet = Percentage(iValue1, iValue2);

	printf("%.1f", fRet);

	return 0;
}