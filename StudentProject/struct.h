#pragma once
#ifndef _STRUCT_H_
#define _STRUCT_H_
#define MAXSIZE 50
#define MAXLENGTH 20

enum MyEnum_sex  //将性别放入枚举体中
{
	男, 女, 其他
};

typedef struct {
	int stu_num;  //学生学号
	char *name;	//学生姓名
	int age;	  //学生年龄
	MyEnum_sex sex;	//学生性别
	float score;  //学生成绩
	char *num;	//学生手机号

}student_manage;

typedef struct {
	student_manage stu[MAXSIZE];
	int size;
}student;


#endif

