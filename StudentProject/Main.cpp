#include<stdio.h>
#include"manage.h"
#define MAXSIZE 50
#define MAXLENGTH 20

enum MyEnum_sex  //���Ա����ö������
{
	��, Ů, ����
};

typedef struct {
	int stu_num;  //ѧ��ѧ��
	int age;	  //ѧ������
	int size;
	float score;  //ѧ���ɼ�
	char name[MAXLENGTH];	//ѧ������
	char number[MAXLENGTH];	//ѧ���ֻ���
	MyEnum_sex sex;	//ѧ���Ա�
}student_manage;

student_manage student[MAXSIZE];

void main() {
}