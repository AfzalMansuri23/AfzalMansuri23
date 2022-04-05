#include <stdio.h>
main(){
	int a;
	printf("Value of integer to be checked: ");
	scanf("%d",&a);
	if(a%2==0){
		printf("The given number is even");
	}
	else{
		printf("The given number is odd");
	}
	return 0;
}
