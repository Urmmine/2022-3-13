#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//�ṹ����C���Դ����µ�����

//����һ��ѧ��
struct Stu
{
	char name[20];
	int age;
	double score;

};

//����һ���������
struct Book
{
	char name[20];//��Ա����
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����",20,85.5 };
	//�ṹ��Ĵ����ͳ�ʼ��
	printf("%s %d %lf\n", s.name, s.age, s.score);
	//�ṹ�����.��Ա����
	struct Stu* ps = &s;
	printf("2:%s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);
	//*ps �����ò���
	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
	//->��ͷ�������൱��ȡ�����ú��s����ʽ���ṹ��ָ��->��Ա������)

	return 0;
}