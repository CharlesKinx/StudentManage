#include<stdio.h>
#include<stdlib.h>
#include"manage.h"
#include"struct.h"
#include"data.h"
#define MAXSIZE 50
#define MAXLENGTH 20

student* stu = (student*)malloc(sizeof(student));

int main() {
	init_student(stu);
	inti_data(stu);
	show_all(*stu);
	menu_function();
	while (true) {
		function(stu);
	}
	free_(stu);
	free(stu);
	return 0;
}