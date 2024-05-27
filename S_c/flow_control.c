#include<stdio.h>

int main()
{
	int i = 6;
	
//	for(i = 1; i<=10; i++)
//	{
//		if(i == 6)
//		continue;
//		printf("%d\n",i);
//		
//	}

	number:   //lablel
		{
			printf("Hello I am label");
			i++;
		}
	increment:  //Lable
		{
			printf("\nThe new Label..");
			i++;
		}
		
		if(i == 6)
		{
			goto number;	
		}
			if(i == 7)
		{
			goto increment;	
		}
		
//	for(i = 1; i<=10; i++)
//	{
//		
//		
//		printf("%d\n",i);
//		
//	}
	return 0;
}
