1. 迭代器->广泛用于STL中的广义化指针
2. 智能指针,类似指针的对象 重载*/->
3. 要创建智能指针对象，需包含头文件<memory>,位与名称空间std内
4. share_ptr与unique_ptr为C++11实现
5. 所有智能指针类都有一个explicit构造函数
6. 有些时候，将一个智能指针赋给另一个并不会留下危险的悬挂指针，因为智能指针其实是一个类，不使用&传递则创建临时对象
7. 接6,如果源unique_ptr是个临时右值，编译器允许这样做，但如果源unique_ptr将存在一段时间，编译器将禁止这样做
8. 运算符重载->，->会传递
