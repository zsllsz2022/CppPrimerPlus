//c++11
//g++ use_vector -std=c++11

//STL:容器 迭代器 函数对象 算法

#include <vector>
#include <iostream>
#include <algorithm>


template<typename T>
void show(const std::vector<T>& v){
	for (int i = 0;i < v.size();i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}



void show_each(double elem){
	static int count = 1;
	if(count++ == 1)
		std::cout << "show_each" << std::endl;
	std::cout << elem << " ";
}
int main(int argc,char** argv){
	using std::vector;
	double array[5] = {1.1,2.2,3.3,4.4,5.5};	
	vector<double> pv(array,array+5);

	show(pv);

	
	for(auto pd = pv.begin();pd != pv.end();pd++){
		std::cout << *pd << " ";
		if(pd == --pv.end()) //--在前 先自减再操作
			std::cout << std::endl;
	}
	
	pv.push_back(6.6);
	show(pv);
	
	pv.erase(pv.begin(),pv.begin()+2);
	show(pv);

	std::cout << "----------------------" << std::endl;
	for_each(pv.begin(),pv.end(),show_each);
	std::cout << std::endl;
	std::cout << "----------------------" << std::endl;
	random_shuffle(pv.begin(),pv.end());
	show(pv);
	random_shuffle(pv.begin(),pv.end());
	show(pv);
	random_shuffle(pv.begin(),pv.end());
	show(pv);
	std::cout << "----------------------" << std::endl;
	sort(pv.begin(),pv.end());
	show(pv);

	for(auto x:array)
		std::cout << "c++11 ";
	std::cout << std::endl;

	std::cout << "----------------------" << std::endl;
	//很奇怪，为什么vector没有列表初始化的构造函数，也可能是我编译器问题吧
	//但该句想过编的话，肯定要-std=c++11，因为这是C++11特性	
	//vector<double> test[3] = {1.1111,2.2222,3.3333};
	return 0;
}
