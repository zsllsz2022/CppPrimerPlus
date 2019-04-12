1. 变量命名 intMyWeight bMyWeight chMyWeight pMyWeight stdMyWeight 驼峰命名 在名字前加上类型 一目了然
```cpp
	int intMyWeight;
```

2. C++类内 m_前缀
```cpp
int m_intMyWeight
```

3. C++11新增的long long
4. 在不同的系统中，有不同的C++实现，导致整数的宽度不尽相同，C++标准只确保最小长度
	+ short至少16位长
	+ int至少和short一样长
	+ long 至少32位，且至少和int一样长
	+ long long 至少64位，且至少与long一样长
    - PS：有些实现上，例如51单片机，int只有两个字节，与short一样长！！

5. C++与计算机对Byte的定义不同，C++的字节由至少能够容纳基本字符集的相邻位组成
6. / #define SIZE 10 不推荐使用这种方式定义常量，在预处理阶段，将常量替换变量，不易debug
7. 传统C与C++的初始化语法
	```cpp
    	int value_1 = 10; //传统C
        int value_2(20); //C++语法
        int value_3{30}; //
    ```
    花括号初始化注意三点:
       1. 可以使用=,也可以不使用 int value = {} or int value{}
       2. {}若为空，默认初始化为0
       3. 防范类型转换错误
       4. C++11可以使用花括号初始化任何类型，通常给复杂类型初始化:不允许窄缩

8. 如果表达的值比16位大，则使用long，因为int在某些实现上为16位，所以使用int的话可能在移植上有问题，同理，如果超过20+亿，则使用long long，因为C++标准规定long long 至少64位，而long可能只有32位
9. 如果short比int小，在某些场合下可以使用short节省内存，例如大型数组
10. 实际上，很多系统实现的基本字符都不超过128个，因此使用一个字节就可以表示所有字符
11. char在默认情况下是否有符号由实现决定，因此最好使用signed char;或者unsigned char声明char
12. 浮点数可以用来表示小数，很小的值，还有很大的值
13. float 6位有效位 double 15位有效位
14. 浮点数默认为double类型，除非3.66f or 6.66L
15. %运算符的正负取决于第一个数字的正负
16. [C++运算符优先级结合性](https://baike.baidu.com/item/%E8%BF%90%E7%AE%97%E7%AC%A6%E4%BC%98%E5%85%88%E7%BA%A7/4752611?fr=aladdin)
17. 优先级相同时，看结合性
18. 列表初始化不允许窄缩，对类型转换严格 
19. 整形(short char)在传递参数的时候被提升为int
