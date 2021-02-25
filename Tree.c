#include <stdio.h>

int main()
{
	int i, j;
	
	int s = 10;
	
	for(i=0; i<=10; i++){
		for(j=0; j<=s; j++){	
			printf(" ");	//樹葉
		}
		s--;
		
		for(j=0; j<=2*i; j++){
			printf("*"); 
		}
		
		printf("\n");
	}
	
	for(i=0; i<=4; i++){
		for(j=0; j<=8; j++){	//木頭
			printf(" ");
		}
		
		for(j=0; j<=4; j++){
			printf("*");
			
		}
		printf("\n");
	}
	
	for(j=0; j<8; j++){		//樹的底座
		printf(" ");
	}
	for(j=0; j<=6; j++){
		printf("*");
	}
	
}
