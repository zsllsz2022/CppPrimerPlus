#include <iostream>

void test(int arg){
	std::cout << arg << std::endl;
}

int main(int argc,char**){
	
	int i = 5;
	int j = 6;
	int k = 7;
	test(i); 
	test(j++); //先操作再自增 // 故先把6赋值
	test(++k); //先自增再操作 故+1后在赋值传参

	return 0;
}
