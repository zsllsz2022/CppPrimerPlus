#pragma once

#include <iostream>

class String{
private:
	char* str;
	int len;
	static double private_rate;
public:
	String(const char*);
	String();
	String(const String&);
	~String();
	
	int length()const{return len;}
	
	String& operator=(const String& s);
	String& operator=(const char* s);
	
	friend std::ostream& operator<< (std::ostream&,const String&);
	friend bool operator<(const String&,const String&);
	friend bool operator>(const String&,const String&);
	friend bool operator==(const String&,const String&);
	
	const char& operator[](int)const;
	char& operator[](int);
	
	static double get_private_rate(){return private_rate;}
	static void set_private_rate(double value){private_rate=value;}
	static double public_rate;
};