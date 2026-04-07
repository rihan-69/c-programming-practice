# include <stdio.h>
struct employee{
	int code ;
	float salary;
	char name[50];
	

};
// by using this method we can can made an array using the structure we made and make as much as much as we can 
#include <stdio.h>

int main() {
    struct employee civil[100];
    civil[0].code = 100;
    civil[1].code = 120;
    struct employee rihan = {123, 450000, "rihan"};
    printf("the code from the array made using our strct is %d\n", civil[0].code);
    printf("the full information regarding structure harry is %d %f %s", rihan.code, rihan.salary, rihan.name);
    return 0;
}
