#include <iostream>


template<typename T>
void swap(T& a,T& b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
void swap(T* a,T* b,int n){	
	for(int i = 0 ; i < n ; i++){
		T temp;
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}



void show(int* a,int n){
	for(int i = 0 ; i < n ; i++){
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}


int main(int argc,char** argv){
	
	double double_a = 5,double_b = 6;
	int int_a = 7 , int_b = 9;
	swap(double_a,double_b);
	swap(int_a,int_b);
	std::cout << double_a << " " << double_b << std::endl;
	std::cout << int_a    << " " << int_b    << std::endl;

	std::cout << std::endl;
	int a[5]{4,2,1,4,5};
	int b[5]{444,223,423,988,877};	
	show(a,5);
	show(b,5);
	swap(a,b,5);
	show(a,5);
	show(b,5);	
	
	return 0;
}
