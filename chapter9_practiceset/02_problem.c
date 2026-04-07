#include <stdio.h>
#include <string.h>
struct vector {
	int i ;
	int j;
};
struct vector sumvector(struct vector v1 , struct vector v2)
{
	struct vector v3 = {(v1.i+v2.i) , v1.j  + v2.j};

return v3;
}


int main() {
	struct vector a1 = {1,2};
	struct vector a2 = {3,4};
	struct vector a3 = sumvector(a1,a2);
	printf("the first vector is %di , %dj  \n", a1.i, a1.j);
	printf("the second vector is %di , %dj  \n", a2.i, a2.j);
	printf("the sum of two vector is %di , %dj", a3.i, a3.j);
    
    return 0;
}
