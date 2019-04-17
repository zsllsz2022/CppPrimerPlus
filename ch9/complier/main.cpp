#include <iostream>
#include "student.h"

int main(int argc,char** argv){
	
	struct student zsl;
	zsl.name = "zsl";
	zsl.age = 23;
	show(zsl);

	return 0;
}
