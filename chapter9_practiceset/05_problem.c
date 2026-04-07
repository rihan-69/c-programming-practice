#include <stdio.h>
#include <string.h>
//this program is about making a representation of imaginary number using struct
typedef struct complex{
	int real;
	int imaginary;

}nigga;

int main() {
nigga a1 = {2,3};
	printf("the complex number are %d , i%d",a1.real,a1.imaginary);
    
    return 0;
}
