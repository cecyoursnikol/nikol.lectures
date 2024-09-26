#include<stdio.h>
void main()
{
   int year,y;

   printf("Enter the Year :\n");
   scanf("%d",&year);

 y = year % 400 == 0 || year % 100 == 0 || year % 4 == 0;

 switch (y) {
        case 1:
            printf("\n%d is the leap year.\n", year);
            break;

        case 0:
            printf("\n%d is not the leap year.\n", year);
            break;

        default:
            printf("\n%d is not the leap year.\n", year);
    }

}
