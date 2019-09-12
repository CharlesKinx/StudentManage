#pragma once

#include<stdio.h>
#define MAXLENGTH 20
#define MAXSIZE 50
const struct student;
const enum MyEnum;
//初始化
inline void init_student(student *stu){
	stu->size = 0;
}
//删除学号为XXX的信息
inline void delete_student(student* stu, int stu_num) {
	if (stu_num<0 || stu_num>stu->size) {
		printf("删除无效！");
		return;
	}
	for (int i = stu_num; i < stu->size; i++) {
		stu->stu[i] = stu->stu[i + 1];
	}
	stu->size = stu->size - 1;
}
//添加
inline void add_student(student* stu, int stu_num, int age, float score, char* name, int number, MyEnum sex)
{
	if (full_student(* stu)) {
		stu->stu[stu->size].stu_num = stu_num;
		stu->stu[stu->size].age = age;
		stu->stu[stu->size].score = score;
		stu->stu[stu->size].name = name;
		stu->stu[stu->size].number = number;
		stu->stu[stu->size].MyEnum = sex;
		stu->size++;
	}
	else {
		printf("人员已满无法插入！");
	}
}
//按照学号查找
inline void find_student(student stu, int stu_num) {
	printf("%d", stu.stu[stu_num - 1].stu_num);
	printf("	%d\n", stu.stu[stu_num - 1].age);
	printf("	%f\n", stu.stu[stu_num - 1].score);
	printf("	%d\n", stu.stu[stu_num - 1].number);
	printf("	%s\n", stu.stu[stu_num - 1].name);
	printf("	%s\n", stu.stu[stu_num - 1].sex);
}
//按照学号修改学生信息
inline void change_student(student* stu, int stu_num) {
	
}
//插入
inline void insert_student(student* stu, int where) {
	if (full_student(*stu)) {
		if (where >= 0 && where < stu->size) {
			for (int i = stu->size - 1; i >= where; i--) {
				stu->stu[i + 1] = stu->stu[i];
			}
			stu->size++;
		}
		return;
	}
	else {
		printf("插入失败！");
		return;
	}

}
//判断是否满员
inline bool full_student(student stu) {
	if (stu.size == MAXSIZE) {
		return false;
	}
	else {
		return true;
	}
}
