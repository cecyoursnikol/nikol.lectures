#include<stdio.h>
int main()
{
	int day;
	
	printf("Enter the number of day :");
	scanf("%d",&day);
	
	switch(day){
		case 1:
			{
				printf("Sunday");
				break;
			}
		case 2:
			{
				printf("MOn");
				break;
			}
		case 3:
			{
				printf("Tue");
				break;
			}
		case 4:
			{
				printf("Wed");
				break;
			}
		case 5:
			{
				printf("Thur");
				break;
			}
		case 6:
			{
				printf("Fri");
				break;
			}
		case 7:
			{
				printf("Sat");
				break;
			}
			
		default:
			{
				printf("Eneter only days");
			}
	}
	return 0;
}
