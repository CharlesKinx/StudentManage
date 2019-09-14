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
//��ʼ��
inline void init_student(student *stu){
	stu->size = 0;
}
//�ж��Ƿ���Ա
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
		printf("��ѧ����Ϣ��\n");
		return;
	}
	printf("ѧ��	|����	|����	|�Ա�	|�ɼ�	|��ϵ��ʽ\n");
	for (int i = 0; i < stu.size; i++) {
		printf("%d", stu.stu[i].stu_num);
		printf("	 %s", stu.stu[i].name);
		printf("	  %d", stu.stu[i].age);
		switch (stu.stu[i].sex)
		{
		case 0: printf("	 ��"); break;
		case 1: printf("	 Ů"); break;
		case 2: printf("	 ����"); break;
		default:
			break;
		}
		printf("	 %0.1f", stu.stu[i].score);
		printf("	 %s\n", stu.stu[i].num);
	}

}
//ɾ��ѧ��ΪXXX����Ϣ
inline void delete_student(student* stu, int stu_num) {
	if (stu_num<0 || stu_num>stu->size) {
		printf("ɾ����Ч��");
		return;
	}
	for (int i = stu_num; i < stu->size; i++) {
		stu->stu[i] = stu->stu[i + 1];
	}
	stu->size = stu->size - 1;
	printf("ɾ���ɹ���\n");
	return;
}
//���
inline void add_student(student* stu,int where)
{		
	if (full_student(*stu)) {
		printf("��������ӳ�Ա����Ϣ��\n");
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
		printf("��Ա�����޷����룡");
		return;
	}
}
//����ѧ�Ų���
inline void find_student(student stu, int stu_num) {
	printf("\n");
	printf("ѧ��	|����	|����	|�Ա�	|�ɼ�	|��ϵ��ʽ\n");
	printf("%d", stu.stu[stu_num - 1].stu_num);
	printf("	 %s", stu.stu[stu_num - 1].name);
	printf("	  %d", stu.stu[stu_num - 1].age);
	switch (stu.stu[stu_num-1].sex)
	{
	case 0: printf("	 ��"); break;
	case 1: printf("	 Ů"); break;
	case 2: printf("	 ����"); break;
	default:
		break;
	}
	printf("	 %0.1f", stu.stu[stu_num - 1].score);
	printf("	 %s\n", stu.stu[stu_num - 1].num);
	return;
}
/*//����ѧ���޸�ѧ����Ϣ
inline void change_student(student* stu, int stu_num) {
	if (stu_num > stu->size || stu_num < 0) {
		printf("������Ч��ѧ�ţ�");
			return;
	}
	printf("�޸���Ϣ\n");
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
//����
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
		printf("����ʧ�ܣ�");
		return;
	}
}
