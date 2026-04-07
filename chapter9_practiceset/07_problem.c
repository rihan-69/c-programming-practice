#include <stdio.h>
#include <string.h>
typedef struct bankaccount{
	int accountnumber;
	char name[50];
	float accountbalance;

}acc;
//this program is about making a structure that can hold values just like your bank account ;
int main(){
	int a;
	acc c1 ={224567,"rihan",4500000};
	printf("pls enter 1 to show the overall account detils \n pls enter 2 just to show the account balance\n pls enter 3 to see the account number \n");
	scanf("%d",&a);
	if(a == 1){
		printf("your overall account details are %d %s %f \n",c1.accountnumber,c1.name,c1.accountbalance);
	}else if(a == 2){
		printf("your current balance is %f \n", c1.accountbalance);
	}else {
		printf("your account number is %d \n", c1.accountnumber);
	}
	return 0;
}
