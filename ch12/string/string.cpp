#include "my_string.h"
#include <cstring>



double String::private_rate = 666.66;
double String::public_rate = 888.88;

String::String(){
	str = new char[1];
	str = '\0';
	len = 0;
}

String::String(const char* s){
	len = strlen(s);
	str = new char[len+1];
	strcpy(str,s);
}

String::String(const String& s){
	str = new char[s.len+1];
	strcpy(str,s.str);
	len = s.len;
}

String::~String(){
	delete [] str;
}

std::ostream& operator<< (std::ostream& os,const String& s){
	os << s.str;
	return os;
}

bool operator<(const String& s1,const String& s2){
	return (strcmp(s1.str,s2.str) < 0);
}
bool operator>(const String& s1,const String& s2){
	return s2 < s1;
}
bool operator==(const String& s1,const String& s2){
	return (strcmp(s1.str,s2.str) == 0);
}


String& String::operator=(const String& s){
	if(this == &s )
		return *this;
	delete [] str;
	len = s.len;
	str = new char[len+1];
	strcpy(str,s.str);
	return *this;
}


const char& String::operator[](int n)const{
	std::cout << "exchange" << std::endl;
	return str[n];
}
char& String::operator[](int n){
	std::cout << "no-exchange" << std::endl;
	return str[n];
}

//
String& String::operator=(const char* s){
	std::cout << "operator by const char*" << std::endl;
	//赋值前删除原始
	delete []str;
	len = strlen(s);
	str = new char[len+1];
	strcpy(str,s);
	return *this;
}


