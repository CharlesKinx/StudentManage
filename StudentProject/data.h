#pragma once
#include"struct.h"
#include"manage.h"

void inti_data(student* stu) {
	stu->stu[0] = { 1,"张三",25,男,74,"1234567" };
	stu->stu[1] = { 2,"李四",28,男,68,"1234567" };
	stu->stu[2] = { 3,"王二",23,男,64,"1234567" };
	stu->stu[3] = { 4,"麻子",21,男,46, "1234567" };
	stu->stu[4] = { 5,"江疏影",21,女,48, "520520" };
	stu->stu[5] = { 6,"刘亦菲",21,女,85,"521520" };
	stu->stu[6] = { 7,"胡歌",24,男,89, "520521" };
	stu->stu[7] = { 8,"杨洋",23,男,78,"1234567" };
	stu->stu[8] = { 9,"猪大肠",20,其他,59, "38383838" };
	stu->stu[9] = { 10,"牛大侠",20,男,88, "2222222" };
	stu->stu[10] = { 11,"李威康",20,其他,59, "1234567" };
	stu->stu[11] = { 12,"帅董",20,男,100, "521521" };
	stu->stu[12] = { 13,"魏孟梁",20,男,100, "520520" };
	stu->stu[13] = { 14,"骚胖",20,女,59, "250250" };
	stu->stu[14] = { 15,"大A仔",20,男,100, "1234567" };
	stu->stu[15] = { 16,"邱开开",20,男,100, "7654321" };

	stu->size = 16;
	return;
}

void menu_function() {
	printf("—————————————————————————\n");
	printf("请选择你需要执行的操作：\n");
	printf("1、删除学生信息\n");
	printf("2、查找学生信息\n");
	printf("3、添加学生信息\n");
	printf("4、插入学生信息\n");
	printf("5、修改学生信息\n");
	printf("6、显示所有学生信息！\n");
	printf("0、退出程序！\n");
	printf("—————————————————————————\n");
}
void function(student *stu) {
	int n,m;
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		printf("请输入你要删除学生的学号：\n");
		scanf_s("%d", &m);
		delete_student(stu, m);
		menu_function();
		break;
	case 2:
		printf("请输入你要查找学生的学号：\n");
		scanf_s("%d", &m);
		find_student(*stu, m);
		menu_function();
		break;
	case 3:
		printf("请输入添加同学的信息：\n");
		add_student(stu,stu->size);
		printf("添加成功！\n");
		menu_function();
		break;
	case 4:
		printf("请输入插入学生信息的位置：\n");
		scanf_s("%d", &m);
		printf("请输入插入学生的信息：\n");
		insert_student(stu, m);
		printf("插入成功！\n");
		menu_function();
		break;
	case 5:
		printf("请输入修改学生信息的学号：\n");
		scanf_s("%d", &m);
		printf("请输入要修改学生的信息:\n");
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