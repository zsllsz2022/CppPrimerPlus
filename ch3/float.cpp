
//float -> output: 0
//超出有效位/近似存储

//double -> output:1
//仍在有效位内

#include <iostream>

int main(int argc,char** argv){
	
	float float_value_1 = 666e+22f;
	float float_value_2 = float_value_1 + 1.0f;
	
	double float_value_3 = 666e+13f;
	double float_value_4 = float_value_3 + 1.0f;

	std::cout << float_value_1 - float_value_2 << std::endl;
	std::cout << float_value_4 - float_value_3 << std::endl;	

	return 0;
}
