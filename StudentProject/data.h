#pragma once
#include"struct.h"
#include"manage.h"

void inti_data(student* stu) {
	stu->stu[0] = { 1,"����",25,��,74,"1234567" };
	stu->stu[1] = { 2,"����",28,��,68,"1234567" };
	stu->stu[2] = { 3,"����",23,��,64,"1234567" };
	stu->stu[3] = { 4,"����",21,��,46, "1234567" };
	stu->stu[4] = { 5,"����Ӱ",21,Ů,48, "520520" };
	stu->stu[5] = { 6,"�����",21,Ů,85,"521520" };
	stu->stu[6] = { 7,"����",24,��,89, "520521" };
	stu->stu[7] = { 8,"����",23,��,78,"1234567" };
	stu->stu[8] = { 9,"���",20,����,59, "38383838" };
	stu->stu[9] = { 10,"ţ����",20,��,88, "2222222" };
	stu->stu[10] = { 11,"������",20,����,59, "1234567" };
	stu->stu[11] = { 12,"˧��",20,��,100, "521521" };
	stu->stu[12] = { 13,"κ����",20,��,100, "520520" };
	stu->stu[13] = { 14,"ɧ��",20,Ů,59, "250250" };
	stu->stu[14] = { 15,"��A��",20,��,100, "1234567" };
	stu->stu[15] = { 16,"�񿪿�",20,��,100, "7654321" };

	stu->size = 16;
	return;
}

void menu_function() {
	printf("��������������������������������������������������\n");
	printf("��ѡ������Ҫִ�еĲ�����\n");
	printf("1��ɾ��ѧ����Ϣ\n");
	printf("2������ѧ����Ϣ\n");
	printf("3�����ѧ����Ϣ\n");
	printf("4������ѧ����Ϣ\n");
	printf("5���޸�ѧ����Ϣ\n");
	printf("6����ʾ����ѧ����Ϣ��\n");
	printf("0���˳�����\n");
	printf("��������������������������������������������������\n");
}
void function(student *stu) {
	int n,m;
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("��������Ҫɾ��ѧ����ѧ�ţ�\n");
		scanf_s("%d", &m);
		delete_student(stu, m);
		menu_function();
		break;
	case 2:
		printf("��������Ҫ����ѧ����ѧ�ţ�\n");
		scanf_s("%d", &m);
		find_student(*stu, m);
		menu_function();
		break;
	case 3:
		printf("���������ͬѧ����Ϣ��\n");
		add_student(stu,stu->size);
		printf("��ӳɹ���\n");
		menu_function();
		break;
	case 4:
		printf("���������ѧ����Ϣ��λ�ã�\n");
		scanf_s("%d", &m);
		printf("���������ѧ������Ϣ��\n");
		insert_student(stu, m);
		printf("����ɹ���\n");
		menu_function();
		break;
	case 5:
		printf("�������޸�ѧ����Ϣ��ѧ�ţ�\n");
		scanf_s("%d", &m);
		printf("������Ҫ�޸�ѧ������Ϣ:\n");
		change_student(stu, m);
		menu_function();
		break;
	case 6:
		show_all(*stu);
		menu_function();
		break;
	case 0:

		exit(1);
	default:
		break;
	}
}