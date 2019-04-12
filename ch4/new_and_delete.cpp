//循环初始化内定义变量 C++11
// $ g++ new_and_delete.cpp -std=c++11


//delete后，只要那块内存未被别人接管，那么里面的数据并不会被刷掉，访问时也不一定会出现异常
//就像野指针的垃圾值，避免也指针的方法就是，在指针声明的时候立刻初始化
//当指针指向的内存释放了，这时该指针就是迷途的
//避免迷途的方法就是在释放后将指针重置为nullptr空指针

#include <iostream>

int main(int argc,char** argv){

	int* p_int_array = new int[20];

	for(int i = 0 ; i < 20 ; i++){
		p_int_array[i] = i;	
	}	
	for(auto i = 0 ; i < 20 ; i++){
		std::cout << p_int_array[i] << " "; 	
	}
	
	delete[] p_int_array;
	//p_int_array = nullptr;//如果把该语句注释则过编且也运行
	
	std::cout << std::endl << p_int_array[9] << std::endl;	
	p_int_array[9] = 100;
	std::cout << std::endl << p_int_array[9] << std::endl;	
	
	std::cout << 'z' << std::endl;

	return 0;
}
