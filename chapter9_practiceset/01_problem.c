#include <stdio.h>
#include <string.h>
struct vector {
	int i ;
	int j;
};

int main() {
	struct vector a1 = {1,2};
	printf("the vector is magnitude with diection and its 2 values are %d %d\n", a1.i,a1.j);

    
    return 0;
}
