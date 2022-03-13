#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//结构体让C语言创建新的类型

//创建一个学生
struct Stu
{
	char name[20];
	int age;
	double score;

};

//创建一个书的类型
struct Book
{
	char name[20];//成员变量
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "张三",20,85.5 };
	//结构体的创建和初始化
	printf("%s %d %lf\n", s.name, s.age, s.score);
	//结构体变量.成员变量
	struct Stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);
	//*ps 解引用操作
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
	//->箭头操作符相当于取解引用后的s（格式：结构体指针->成员变量名)

	return 0;
}