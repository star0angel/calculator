
#include "calc.h"


int ADD(int x, int y)
{
	return x+y;
}

int SUB(int x, int y)
{
	return x-y;
}

int MUL(int x, int y)
{
	return x*y;
}

int DIV(int x, int y)
{
	return x/y;
}

void cacl1(int(*caclf)(int x, int y))
{
	int x, y;
	printf("������������������>");
	scanf("%d%d", &x, &y);
	int ret = caclf(x, y);//ͨ������ָ���ҵ���Ӧ�ĺ�������
	printf("����ǣ�>%d\n", ret);
}
