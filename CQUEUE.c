#include<stdio.h>
#include "CQueue.h"

int main()

{
	QUEUE q;
	init(&q);
	int ch,val,pos;

	while(1)
	{

		printf("\nChoose the option");
		printf("\n1_INSERT\n2_DISPLAY\n3_DELETE\n4_CHANGE\n5_PEEK\n6_EXIT\n_______________: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the value :");
				scanf("%d",&val);
				insert(&q,val);
				break;

			case 2:
				display(&q,val);
				break;

			case 3:
				val=isdelete(&q);
				printf("\nThe value %d is DELETED\n",val);
				break;

			case 4:
				printf("Enter the position of change value \n");
				scanf("%d",&pos);
				printf("Enter the new value \n");
				scanf("%d",&val);
				change(&q,pos,val);
				break;

			case 5:
				val=peek(&q);
				if(val!=NULL)
				{
					printf("\nThe Returned value is %d\n",val);
				}
				break;

			case 6:
				return 0;

 			default : printf("\nPlease enter valid option\n");
				break;
		}
	}
}
