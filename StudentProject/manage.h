#pragma once
#include<stdio.h>
#define MAXLENGTH 20
const struct student_manage;

//初始化
inline void init_student(student_manage* stu){
	stu->size = 0;
}
//删除学号为XXX的信息
inline void delete_student(student_manage* stu, int stu_num) {

}
//添加
inline void add_student(student_manage* stu, int stu_num, int age, float score, char name[MAXLENGTH], char number[MAXLENGTH], enum MyEnum)
{

}
//按照学号查找
inline void find_student(student_manage stu, int stu_num) {

}
//按照学号修改学生信息
inline void change_student(student_manage* stu, int stu_num) {

}
//插入
inline void insert_student(student_manage* stu, int where) {

}
//判断是否满员
inline bool full_student(student_manage stu) {

}
