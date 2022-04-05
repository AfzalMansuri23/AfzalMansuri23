// write a programe to convet days to years weeks and days
#include <stdio.h>
#include<limits.h>
int main()
{int a,b,c,d;
printf("No. of days to be converted: ");
scanf("%d",&a);
b=(a/365);
c=(a-(b*365))/7;
d=(a-((b*365)-(c*7)));
printf("The given no. of days convert to %d Years %d Weeks and %d Days ",b,c,d);
printf("Storage size for int is: %d \n", sizeof(int));
printf("Storage size for char is: %d \n", sizeof(char));
return 0;
}
// input variable = input-((years*365)+(weeks*7))
