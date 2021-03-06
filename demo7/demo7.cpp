#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

// class Student
// {
// public:
// 	void setAge(int _age)
// 	{
// 		// age = _age; //设置年龄
// 		if (_age > 0 && _age < 100)
// 		{
// 			age = _age;
// 		}
// 		else
// 		{
// 			//TODO
// 		}
// 	}
//
// 	int getAge()
// 	{
// 		return age; //获取年龄
// 	}
//
// private:
// 	string name;
// 	int age;
// };
//
// //封装的好处
// class Car //以汽车为例
// {
// public:
// 	int getWheelCount() { return m_iWheelcount; }//只读属性
// private:
// 	int m_iWheelcount; //数据成员，表达轮子的个数，不希望被外界改变，只希望读取
// };

// demo
// 要求：姓名，性别，学分（只读），学习（可改变学分）
class Student
{
public:

	//姓名可读写
	void setName(string _name) //参数是有命名的，暂定_name
	{
		m_strName = _name;
	}

	string getName() { return m_strName; }

	//性别可读写
	void setGender(string _gender)
	{
		m_strGender = _gender;
	}

	string getGender() { return m_strGender; }

	//学分只读
	int getScore() { return m_iScore; }
	//初始化学分为0；
	void initScore() { m_iScore = 0; }
	//通过学习，增加学分
	void study(int _score) { m_iScore += _score; }

private: //命名规则，方便看清类型
	string m_strName; //姓名
	string m_strGender; //性别
	int m_iScore; //学分；
};


int main()
{
	//数据的封装
	//面向对象的基本思想：以对象为中心，以谁做什么来表达程序的逻辑
	//体现到代码层面就是将所有的数据，转化为成员函数的调用，即对象的所有行为都通过调用自己的函数来完成


	Student stu;
	stu.initScore(); //初始化学分，若不初始化，那么增加学分就不可控，最后读出的值就会随机变化；
	stu.setName("张三");
	stu.setGender("男");
	stu.study(99);
	stu.study(1);

	cout << stu.getName() << "," << stu.getGender() << "," << stu.getScore() << endl;
	return 0;
}
