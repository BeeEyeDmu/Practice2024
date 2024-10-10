#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	// 문자열을 하나로 연결한 후 출력
	char year[10];
	char id[10];
	char name[10];
	char s[30] = "";

	printf("학년 : ");
	scanf_s("%s", year, sizeof(year));
	printf("학번 : ");
	scanf_s("%s", id, sizeof(id));
	printf("이름 : ");
	scanf_s("%s", name, sizeof(name));

	strcat(s, year);
	strcat(s, "학년 ");
	strcat(s, id);
	strcat(s, " ");
	strcat(s, name);
	printf("%s\n", s);


	//int year;
//int id;
//char name[10];

//printf("학년 : ");
//scanf_s("%d", &year);
//printf("학번 : ");
//scanf_s("%d", &id);
//printf("이름 : ");
//scanf_s("%s", name, sizeof(name));

//printf("%d학년 %d %s", year, id, name);



}