#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define BUF_SIZE	150*150
//					��С 
#define FILE_COUNT	1045
//					�ļ��� 
#define FILE_PATH	"C:/Users/Administrator/Desktop/zfw/ASCII-change %05d.txt"
//					ͼƬת�뵽�ĵ�ַ 
int main()
{
	int size=0;
	char fileName[32]={0};

	for(int i=1;i<=FILE_COUNT;i++)
	{
		//��ʽ�����
		sprintf(fileName,FILE_PATH,i);
		FILE* fp=fopen(fileName,"r");
		if(NULL==fp)
		{
			printf("�ļ���ʧ��\n");
			return -1;
		}

		//��ȡ��д�룩����
		char buf[BUF_SIZE]={0};
		size=fread(buf,1,BUF_SIZE,fp);
		if (size<=0)
		{
			printf("�ļ���ȡʧ��\n");
			return -1;
		}
		//�ر�
		fclose(fp);
		
		//���ݴ�ӡ��dos����
		printf("%s", buf);
		Sleep(1000.0/(FILE_COUNT/10.0));
		//��궨λ��0��0λ�� ���ÿ���̨���λ��
		COORD pos;
		pos.X=0;
		pos.Y=0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}
	return 0;
}
