#include <stdio.h>
#include <string.h>
//this program is about making use of arrow sign(->) use to dereffrence the pointer to a structure
typedef struct employee {
	int empcode;
	char name[50];
	float salary;

}dmr;

int main() {
	dmr e1 = {1224, "rihan", 4500000};
	dmr*ptr;
	ptr = &e1;
	printf("printing structure using normal way %d , %s, %f\n" , e1.empcode,e1.name,e1.salary);
	printf("printing structure using pointer to struct %d ", ptr->empcode);


    
    return 0;
}
