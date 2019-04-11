
//编译
// $ g++ helloworld.cpp

//运行
// $ ./a.out


// $ g++ helloworld.cpp -o hello
// $ ./hello 

// -E   -> .i   预处理
// -S   -> .s   汇编
// -c   -> .o   编译成机器语言
// none -> .out 链接

//动态库与静态库的区别


#include <iostream>

int main(int argc,char** argv){

	std::cout << "hello world" << std::endl;
	return 0;
}
