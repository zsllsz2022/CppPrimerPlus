1. 自动变量与stack,当函数调用结束时，栈顶指针被重置为函数被调用前的值。
2. ```cpp
   int enough = 2 * sizeof(long) + 1
   ```

	动态初始化需要等到函数被链接且程序被执行时
3. 引用声明使用extern,且不进行初始化;否则，声明为定义，导致分配存储空间
4. 在某些情况下，使用大型内存筷将导致该代码块在程序结束时不会被自动释放
5. new要初始化常规结构或数组，需要使用大括号的列表初始化，这要求编译器支持C++11
```cpp
struct position{doubel x;double y;double z;};
struct position* p = new position{2.2,5,5,8.8};
int* ar = new int[4]{1,2,3,4};
6. new、delete 运算符重载
```cpp
int* pa = new int[40];
---> int* pa = new(sizeof(int) * 40);
```
7. new/delete 可以替换，但定位new/delete不可替换但可重载
8. 定位new运算符！！！
9. 默认情况下，名称空间中声明的名称的链接性为外部的，除非引用了变量
10. qualified name 限定名称
11. 有关using编译指令何using声明，它们增加了名称冲突的可能性
12. 名称空间可以是全局的，也可以位于另一个名称空间中，但不能位于代码块中
13. 使用using编译指令导入，局部隐藏
14. 使用using编译指令，就像大量使用作用域解析运算符。使用using声明时，就好像声明了相应的名称一样。一般来说，使用using声明比使用using编译指令更安全。
15. 不要在头文件中使用using编译指令
16. 对于using声明，首选将其作用域设置为局部而不是全局
17. 老式头文件没有使用名称空间
