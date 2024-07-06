#include<stdio.h>
int main()
{
    float num;
    printf("Enter your number :");
    scanf("%f",&num);

    printf("Value:\t%10f\n",num);
    printf("Value:%2f\n",num);
    printf("Value:%.2f\n",num);
    printf("Value:%d\n",(int)(num+ 0.5));
    printf("Value:%e\n",num);
    return 0;
}
