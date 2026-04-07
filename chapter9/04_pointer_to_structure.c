#include <stdio.h>
#include <string.h>
// in this program we are gonna learn how we can use pointer with stucture after declaring and connecting it with the \
// adress of the structure you can just keep dereffrencing the address and get the value 
struct employee{
	int code;
	char name[50];
	float salary;
};

int main() {
	struct employee e1 = {1223, "rihan", 450000};
	struct employee *ptr;
	ptr = &e1;
	printf("the content of structure e1 is displayed using normal way is %d %s %f\n",e1.code, e1.name, e1.salary);
	printf("the content of structure e1 is displayed using pointer is %d\n", (*ptr).code);
	//we can use arrow to defrrence or we cann use  normal way of printing
	printf("the content of the structure e1 is displayed using the arrow are %f \n ", ptr->salary);       
    
    return 0;
}
