#pragma once
#ifndef _STRUCT_H_
#define _STRUCT_H_
#define MAXSIZE 50
#define MAXLENGTH 20

enum MyEnum_sex  //���Ա����ö������
{
	��, Ů, ����
};

typedef struct {
	int stu_num;  //ѧ��ѧ��
	char *name;	//ѧ������
	int age;	  //ѧ������
	MyEnum_sex sex;	//ѧ���Ա�
	float score;  //ѧ���ɼ�
	char *num;	//ѧ���ֻ���

}student_manage;

typedef struct {
	student_manage stu[MAXSIZE];
	int size;
}student;


#endif

