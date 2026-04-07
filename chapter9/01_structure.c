// so in this program we are going to use the structure and learn how they work so 
// basically first you make a bluprint for your structur(basically its a c way for 
// holding diffrent type data type in a same space ) for an example we are going for
// a employee (STRUCTUR) as it can hold int value for employee code and salary that can 
// be in float and name that is string
#include <stdio.h>
#include <string.h>
struct employee{
	//this is the blueprint for our structure 
	int code;
	float salary;
	char name[10];
};// semicolon here imp 



int main() {
	struct employee e1;// so basically here we are accessing the blue print and
			   // making our own box(box here is just a analogy) containing 
			   // whatever we have made in blueprint
	e1.code = 6969; // so here by using(.) we are telling our el box that we made
	strcpy(e1.name, "rihan");
                    	// using our employee bluprint that in the box there is a
			// compartment called code and storing the information that we 
			// want to store
	e1.salary = 54.44;

	printf("%d %f %s ", e1.code, e1.salary, e1.name);
	
	

    
    return 0;
}
