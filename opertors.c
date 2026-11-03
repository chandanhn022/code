#include<stdio.h>

void main()
{
        int num;
        float num1;
        float num2;

        printf("1:ADDITION\n 2:SUBTRACTION\n 3:MULTIPLICATION\n 4:DIVISION\n");

        printf("enter the number:");
        scanf("%d",&num);

        printf("enter num1 :");
        scanf("%f",&num1);

        printf("enter num2 :");
        scanf("%f",&num2);

        switch(num)
        {
                case 1:
                        {
                                printf("%f",num1+num2);
                                break;
                        }
                case 2:
                        {
                                printf("%f",num1-num2);
                                break;
                        }
                case 3:
                        {
                                printf("%f",num1*num2);
                                break;
                        }
                case 4:
                        {
                                printf("%f",num1/num2);
                                break;
                        }
                default :
                        {
                                printf("Invalid");
			}
	}
}
