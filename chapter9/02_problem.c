#include <stdio.h>
#include <string.h>
struct employee{
	int code;
	float salary;
	char name[10];
}; 



int main() {
	struct employee e1;
	printf("pls enter the employee code \n");
	scanf("%d",&e1.code);
	printf("pls enter the employe salary \n");
	scanf("%f",&e1.salary);
	printf("pls enter the name of the employee \n");
	scanf("%s", e1.name);
	printf("%s %d %f",e1.name,e1.code,e1.salary);
    return 0;
}
