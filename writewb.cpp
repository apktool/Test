//#include"stdio.h"
//#define N 3
//typedef struct stu
//{
//	int num;
//	char name[10];
//	float score[3];
//}Stu_list;
//int main(int argc, char* argv[])
//{
//	Stu_list stu[N];
//	errno_t err;
//	FILE *fp;
//	char fn[10];
//	for (int i = 0; i < N; i++)
//	{
//		printf_s("Please input num: ");
//		scanf_s("%d", &stu[i].num, 1);
//		getchar();
//		printf_s("Please input name: ");
//		gets_s(stu[i].name);
//		printf_s("Please input score: ");
//		for (int j = 0; j < 3; j++)
//		{
//			scanf_s("%f", &stu[i].score[j]);
//		}
//	}
//	getchar();
//	printf_s("Please input the file name for save: ");
//	gets_s(fn);
//	err = fopen_s(&fp, fn, "wb");
//	if (err)
//	{
//		printf_s("\nThe file open fail.will close!");
//		return 0;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		fwrite(&stu[i], sizeof(Stu_list), 1, fp);
//	}
//	fclose(fp);
//	return 0;
//}