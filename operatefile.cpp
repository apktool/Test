/*
#include"stdio.h"
typedef struct stu
{
	int num;
	char name[20];
	float score[3];
}Stu_list;
int main(int argc, char argv[])
{
	Stu_list stu[3];
	errno_t err;
	FILE *fp;
	char fname[20];
	for (int i = 0; i < 3; i++)
	{
		printf_s("\nNum: ");
		scanf_s("%d", &stu[i].num);
		getchar();
		printf_s("Name: ");
		scanf_s("%s", stu[i].name, 20);
		printf_s("Score: ");
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%f", &stu[i].score[j]);
		}
	}
	getchar();
	printf_s("Please input file name for save: ");
	gets_s(fname);
	err = fopen_s(&fp, fname, "wb");
	if (err)
	{
		printf_s("%s open fail", fname);
		return 0;
	}
	for (int i = 0; i < 3; i++)
	{
		fwrite(&stu[i], sizeof(Stu_list), 1, fp);
	}
	fclose(fp);
	printf_s("\n-----------------------------------------------------\n"); 

	err = fopen_s(&fp, fname, "rb");
	if (err)
	{
		printf_s("Open %s fail.", fname);
		return 0;
	}
	for (int i = 0; i < 3; i++)
	{
		fread(&stu[i], sizeof(Stu_list), 1, fp);
	}
	printf_s("|Num:   |Name:  |Score\n");
	for (int i = 0; i < 3; i++)
	{
		printf_s("%d\t", stu[i].num);
		printf_s("%s\t", stu[i].name);
		for (int j = 0; j < 3; j++)
		{
			printf_s("%.2f\t", stu[i].score[j]);
		}
		printf_s("\n");
	}
	fclose(fp);
	return 0;
}*/