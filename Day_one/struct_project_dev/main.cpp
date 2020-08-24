#include <iostream>
#include "Person.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// This is main function
int main(int argc, char** argv) {
	
	Person *p1[5];
	p1[0] = new Person("0 idex", 0);
    p1[1] = new Person("1 idex", 1);
	
	
	p1[0]->showData();
	
		
//	Person *p2 = new Person("XYZ", 15);
//	p2->showData();
	
	return 0;
}
