#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int b1, b2;
	scanf("%d %d", &b1, &b2);
	printf("%s\n", b1 && b2 ? "��" : "����");
	printf("%s\n", b1 || b2 ? "��" : "����");
	printf("%s\n", !b1 ? "��" : "����");
	return 0;
}