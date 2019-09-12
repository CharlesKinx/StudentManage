#include<stdio.h>
#include"manage.h"
#define MAXSIZE 50
#define MAXLENGTH 20

enum MyEnum_sex  //将性别放入枚举体中
{
	男, 女, 其他
};

typedef struct {
	student_manage stu[MAXSIZE];
	int size;
}student;

typedef struct {
	int stu_num;  //学生学号
	int age;	  //学生年龄
	float score;  //学生成绩
	char name[MAXLENGTH];	//学生姓名
	int num;	//学生手机号
	MyEnum_sex sex;	//学生性别
}student_manage;

void main() {
}