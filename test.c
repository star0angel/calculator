#include "calc.h"

//ʹ�ûص������ͺ���ָ����ɼ򵥵ļ�����


void memu()
{
	printf("***********************************\n");
	printf("***   1.ADD             2.SUB   ***\n");
	printf("***   3.MUL             4.DIV   ***\n");
	printf("***   5.EXIT                    ***\n");
	printf("***********************************\n");
}
int main()
{

	//1.ʹ�ú���ָ����ɼ򵥵ļ�����
	int input,x,y;
	
	int(*calc[])(int ,int) = { 0,ADD,SUB,MUL,DIV };//����ָ��
	
	do 
	{
		memu();
		printf("���������ѡ��>");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			printf("������������������>");
			scanf("%d%d", &x,&y);
			int ret=calc[input](x, y);//ͨ������ָ���ҵ���Ӧ�ĺ�������
			printf("����ǣ�>%d\n",ret);
		}
		else if(input==0)
		{
			printf("�˳�");
		}
		else
		{
			printf("�������\n");
		}
	} while (input);
	
	//2ʹ�ûص�������ɼ򵥵ļ�����
	do 
	{
		memu();
		printf("���������ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			cacl1(ADD);
			break;
		case 2:
			cacl1(SUB);
			break;
		case 3:
			cacl1(MUL);
			break;
		case 4:
			cacl1(DIV);
			break;
		case 0:
			printf("�˳�");
			break;
		
		default:
			printf("�������\n");
			break;
		}
	} while (input);

	return 0;
}