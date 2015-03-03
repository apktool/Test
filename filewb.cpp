//#include"stdio.h"
//typedef struct stu
//{
//	int num;
//	char name[20];
//	float score[3];
//}St_list;
//int main(int argc, char*[])
//{
//	St_list stud[3];
//	errno_t err;
//	FILE *fp;
//	char fname[20];
//	for (int i = 0; i < 3; i++)
//	{
//		printf_s("\nNum: ");
//		scanf_s("%d", &stud[i].num);
//		getchar();
//		printf_s("Name: ");
//		gets_s(stud[i].name);
//		printf_s("Score: ");
//		for (int j = 0; j < 3; j++)
//		{
//			scanf_s("%f", &stud[i].score[j]);
//		}
//	}
//	getchar();
//	printf_s("Pleaes input name for save: ");
//	gets_s(fname);
//	err = fopen_s(&fp, fname, "wb");
//	if (err)
//	{
//		printf_s("%s file open fail.", fname);
//		return 0;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		fwrite(&stud[i], sizeof(St_list), 1, fp);
//	}
//	fclose(fp);
//	return 0;
//}