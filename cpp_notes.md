# 函数模板



**格式**

```c++
template<typename param0, typename param1...>    // 这里的typename换成class也行
ret_type func_template_name(param0, param1...)
{
	func_body;
}
```









# STL

[概述 - C++ STL Tutorial (gitbook.io)](https://cui-jiacai.gitbook.io/c++-stl-tutorial)



标准模板库，Standard Template Library，简称STL



## 容器

容器用来存储数据，例如向量、队列、栈、集合等

### vector

#### 1. 是什么？

vector是STL中常见的容器之一，常被称为向量容器，是普通数组的 ”升级版“

vector是一个动态数组，可以动态新增和删除元素，在此过程中，vector会自动调整内存空间，不需要程序员手动调整



#### 2. 怎么用？

https://cplusplus.com/reference/vector/vector/vector/



## 算法

对容器中的数据做一些常用的操作，如排序、统计等



## 迭代器





