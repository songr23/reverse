#include<stdio.h>
#include<stdlib.h>
struct Phones {
	char name[10];
	char num[10];
};
int main()
{
	struct Phones* list;
	int i;
	int input;
	printf("�ּ��ǰ���: ");
	scanf_s("%d", &input);
	list = (struct Phones*)malloc(sizeof(struct Phones) * input);
	for (i = 0;i < input;i++)
	{
		printf("�̸����Է��Ͻÿ�: ");
		scanf_s("%*c%c", list[i].name);
		printf("�޴�����ȣ���Է��Ͻÿ�: ");
		scanf_s("%c", list[i].num);
	}
	printf("\n====================================\n");
	printf("�̸� �޴�����ȣ");
	printf("\n====================================\n");
	for (i = 0;i < input;i++) {
		printf("%c %c", list[i].name, list[i].num);
	}
	printf("\n====================================\n");
	free(list);
	return 0;
}