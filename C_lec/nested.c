#include<stdio.h>
main()
{
	int product, price;
	
	switch(product){
		case 1:
			{
				printf("The product 1 is Kites Let me know about ur range..");
				scanf("%d",&price);
				switch(price){
					case 100:{
						printf("From 100 u got 20 kites");
						break;
					}
					case 200:{
						printf("From 200 u got 40 kites");
						break;
					}
					default:{
						printf("pls enter 100 or 200 only");
						break;
					}
				}
			}
	}
}
