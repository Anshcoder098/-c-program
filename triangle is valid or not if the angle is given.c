#include <stdio.h>

int main()
 {
    int angle1,angle2,angle3,sum;

    printf("Enter three angles of the triangle: ");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    printf("%d",sum);
    if(angle1+angle2+angle3==180)
    {
    	printf("triangle is valid");
	}
	else
	{
		printf("triangle is invalid");
	}
    return 0;
}
