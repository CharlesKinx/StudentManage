#pragma once
#include<stdio.h>
#define MAXLENGTH 20
const struct student_manage;

//��ʼ��
inline void init_student(student_manage* stu){
	stu->size = 0;
}
//ɾ��ѧ��ΪXXX����Ϣ
inline void delete_student(student_manage* stu, int stu_num) {

}
//���
inline void add_student(student_manage* stu, int stu_num, int age, float score, char name[MAXLENGTH], char number[MAXLENGTH], enum MyEnum)
{

}
//����ѧ�Ų���
inline void find_student(student_manage stu, int stu_num) {

}
//����ѧ���޸�ѧ����Ϣ
inline void change_student(student_manage* stu, int stu_num) {

}
//����
inline void insert_student(student_manage* stu, int where) {

}
//�ж��Ƿ���Ա
inline bool full_student(student_manage stu) {

}
