#include <stdio.h>
// this one is about making an program that can take input from the users for complex number that have 2 parts one real and one imaginary and we are going to do that by making a blue 
// print of each number using a structure and for our ease we are going to use the type deff funtion to give it a custom name or we can say we have made our own coustom datatype
// and after that what we are going to do in int main() we are going to declare 5 of these bluprint structure and after that we can just traverse them using a simple loop//
typedef struct cmp{
	int real;
	int imaginary;

}nrr;
void display(nrr arr[]) {
	for (int i = 0; i<5; i++){
		printf( " %d", arr[i].real );
		printf(" %di", arr[i].imaginary);
	}
}


int main(){
		nrr arr[5];
		for (int j = 0 ; j<5; j++){
			printf("pls enter the real part of the complex number\n");
			scanf("%d",&arr[j].real);
			printf("pls enter the imaginary part of the complex number\n ");
			scanf("%d", &arr[j].imaginary);
			
		}
display(arr);		
		return 0;
		}
	
