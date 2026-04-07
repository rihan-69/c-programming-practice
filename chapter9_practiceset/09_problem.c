#include <stdio.h>
// this one is going to be about making a struct and using to make two variable and comparing them using a coustom make function
struct date{
	int dd;
	int mm;
	int yyyy;
	
};
void compair(struct date d1 , struct date d2){
    if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yyyy == d2.yyyy) {
        printf("0");
    } else if (d1.yyyy > d2.yyyy) {
        printf("1");
    } else if (d2.yyyy > d1.yyyy) {
        printf("2");
    }
}  

int main(){
	struct date d1;
	struct date d2;

	printf("pls enter the two diffrent dates accordingly in dd mm yyyy formart \n");
	printf("pls enter the first date you want to enter \n");
	scanf("%d %d %d",&d1.dd,&d1.mm, &d1.yyyy);
	printf("pls enter the second date you want to enter \n");
	scanf("%d %d %d", &d2.dd, &d2.mm, &d2.yyyy);
	printf("so if the dates you have entered are same you will see 0 on the screen \n if the first date you have entered is older then second then you will see 1 on the screen\n if the second date you have entered is older then the first you will see 2 on the screen\n");
	compair(d1,d2);
	return 0;


}
