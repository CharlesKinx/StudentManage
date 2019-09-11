#include<stdio.h>
#include"manage.h"
#define MAXSIZE 50
#define MAXLENGTH 20

enum MyEnum_sex  //将性别放入枚举体中
{
	男, 女, 其他
};

typedef struct {
	int stu_num;  //学生学号
	int age;	  //学生年龄
	int size;
	float score;  //学生成绩
	char name[MAXLENGTH];	//学生姓名
	char number[MAXLENGTH];	//学生手机号
	MyEnum_sex sex;	//学生性别
}student_manage;

student_manage student[MAXSIZE];

void main() {
}