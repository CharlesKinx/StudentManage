#pragma once
#include"struct.h"
#include<stdio.h>
#define MAXLENGTH 20
#define MAXSIZE 50

inline void malloc_(student* stu) {
	
	stu->stu[stu->size].name = (char*)malloc(sizeof(char));
	stu->stu[stu->size].num = (char*)malloc(sizeof(char));
}
inline void free_(student* stu) {

	//free(stu->stu[stu->size].name);
	//free(stu->stu[stu->size].num);
	free(stu);
}
//初始化
inline void init_student(student *stu){
	stu->size = 0;
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
inline void show_all(student stu) {
	if (stu.size == 0) {
		printf("无学生信息！\n");
		return;
	}
	printf("学号	|姓名	|年龄	|性别	|成绩	|联系方式\n");
	for (int i = 0; i < stu.size; i++) {
		printf("%d", stu.stu[i].stu_num);
		printf("	 %s", stu.stu[i].name);
		printf("	  %d", stu.stu[i].age);
		switch (stu.stu[i].sex)
		{
		case 0: printf("	 男"); break;
		case 1: printf("	 女"); break;
		case 2: printf("	 其他"); break;
		default:
			break;
		}
		printf("	 %0.1f", stu.stu[i].score);
		printf("	 %s\n", stu.stu[i].num);
	}

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
	printf("删除成功！\n");
	return;
}
//添加
inline void add_student(student* stu,int where)
{		
	if (full_student(*stu)) {
		printf("请输入添加成员的信息：\n");
		malloc_(stu);
		scanf_s("%d", &stu->stu[stu->size].stu_num);
		scanf_s("%s", stu->stu[stu->size].name,20);
		scanf_s("%d", &stu->stu[stu->size].age);
		scanf_s("%d", &stu->stu[stu->size].sex);
		scanf_s("%f", &stu->stu[stu->size].score);
		scanf_s("%s", stu->stu[stu->size].num,20);
		stu->size++;
		return;
	}
	else {
		printf("人员已满无法插入！");
		return;
	}
}
//按照学号查找
inline void find_student(student stu, int stu_num) {
	printf("\n");
	printf("学号	|姓名	|年龄	|性别	|成绩	|联系方式\n");
	printf("%d", stu.stu[stu_num - 1].stu_num);
	printf("	 %s", stu.stu[stu_num - 1].name);
	printf("	  %d", stu.stu[stu_num - 1].age);
	switch (stu.stu[stu_num-1].sex)
	{
	case 0: printf("	 男"); break;
	case 1: printf("	 女"); break;
	case 2: printf("	 其他"); break;
	default:
		break;
	}
	printf("	 %0.1f", stu.stu[stu_num - 1].score);
	printf("	 %s\n", stu.stu[stu_num - 1].num);
	return;
}
/*//按照学号修改学生信息
inline void change_student(student* stu, int stu_num) {
	if (stu_num > stu->size || stu_num < 0) {
		printf("输入无效的学号！");
			return;
	}
	printf("修改信息\n");
	malloc_(stu);
	scanf_s("%d", &stu->stu[stu_num-1].stu_num);
	scanf_s("%s", stu->stu[stu_num-1].name, 20);
	scanf_s("%d", &stu->stu[stu_num-1].age);
	scanf_s("%d", &stu->stu[stu_num-1].sex);
	scanf_s("%f", &stu->stu[stu_num-1].score);
	scanf_s("%s", stu->stu[stu_num-1].num, 20);
	find_student(*stu, stu_num);
	return;
}*/
//插入
inline void insert_student(student* stu, int where) {
	if (full_student(* stu)) {
		if (where >= 0 && where < stu->size) {
			for (int i = stu->size - 1; i >= where; i--) {
				stu->stu[i + 1] = stu->stu[i];
			}
			add_student(stu,where);
			stu->size++;
		}
		return;
	}
	else {
		printf("插入失败！");
		return;
	}
}
