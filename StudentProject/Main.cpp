#include<stdio.h>
#include"manage.h"
#define MAXSIZE 50
#define MAXLENGTH 20

enum MyEnum_sex  //���Ա����ö������
{
	��, Ů, ����
};

typedef struct {
	student_manage stu[MAXSIZE];
	int size;
}student;

typedef struct {
	int stu_num;  //ѧ��ѧ��
	int age;	  //ѧ������
	float score;  //ѧ���ɼ�
	char name[MAXLENGTH];	//ѧ������
	int num;	//ѧ���ֻ���
	MyEnum_sex sex;	//ѧ���Ա�
}student_manage;

void main() {
}