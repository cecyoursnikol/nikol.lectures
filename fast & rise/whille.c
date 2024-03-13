#include<stdio.h>
struct person{
		
		int yash;
		float manav;
		char yashvi;
	};

int main()
{
	struct person s1,s2;
	
	
	printf("First Member is Yash Give Them int value :");
	scanf("%d",&s1.yash);
	
	printf("%d",s1.yash);
	
	
	printf("\n\nFirst NEw Member is Yash Give Them int value :");
	scanf("%d",&s1.yash);
	
	printf("%d",s1.yash);
	return 0;

}
