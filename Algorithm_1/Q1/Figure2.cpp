#include<stdio.h>
int main( void ) 
{
	int row=11;
	//print a cross shape with " " in a 11x11 grid of "*"
//	printf("Enter the length of the starting row:\n");
//	scanf("%d",&row);
	for (int counter_y=0; counter_y != row;counter_y++){
		for(int counter_x=0;counter_x != row;counter_x++){
			if(counter_x==counter_y || counter_x== row - counter_y -1){
				printf(" ");
			}
				
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
