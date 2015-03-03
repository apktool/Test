#include"stdio.h"
typedef struct stu
{
	int num;
	char name[20];
	float score[3];
}St_list;
int main(int argc, char* argv[])
{
	St_list stud[3];
	errno_t err;
	FILE *fp;
	char fname[20];
	printf_s("The file name for open: ");
	gets_s(fname);
	err = fopen_s(&fp, fname, "rb");
	if (err)
	{
		printf_s("The file open fail.");
		return 0;
	}
	for (int i = 0; i < 3; i++)
	{
		fread(&stud[i], sizeof(St_list), 1, fp);
	}
	printf_s("Num    |Name   |score\n");
	for (int i = 0; i < 3; i++)
	{
		printf_s("%d\t", stud[i].num);
		printf_s("%s\t", stud[i].name);
		for (int j = 0; j < 3; j++)
		{
			printf_s("%.2f\t", stud[i].score[j]);
		}
		printf_s("\n");
	}
	return  0;
}