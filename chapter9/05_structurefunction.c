#include <stdio.h>
#include <string.h>
// here we have used typedef and fucntion used for making an alias that is new name for already existing data type 
// for convenience in many way but the time it comes most handy is during making use of structures and while using 
// then you avoid typing whole struct employee as we have made alias for it that is rmf so we can use just rmf avoiding it
typedef struct employee {
	int code;
	char name[50];
	float salary;
}rmf;

void show (rmf variable ){
	printf("the code of the employee is %d\n",variable.code);
	printf("the name of the employee is %s\n", variable.name);
	printf("the salary of the employee is %f\n", variable.salary);

}

int main() {
	rmf e1 ={1223, "rihan", 560000};
	show(e1);
    
    return 0;
}
