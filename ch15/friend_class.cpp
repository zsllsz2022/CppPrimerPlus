#include <iostream>

class Tv{

friend class Remote;

private:
	int test1_;
	int test2_;
public:
	Tv(int test1 = 5,int test2 = 10):
		test1_(test1),test2_(test2){
	
	}

	void show()const{
		std::cout << "test1=" << test1_ << ",test2=" << test2_ << std::endl;
	}
};


class Remote{
public:
	void change(Tv& t)const{
		t.test1_ = 666;
		t.test2_ = 888;
	}
};

int main(int argc,char** argv){
	
	Tv tv;
	Remote remote;
	tv.show();
	remote.change(tv);
	tv.show();

	return 0;
}
