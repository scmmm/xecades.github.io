#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int main()
{
	char *wday[]= {"������","����һ","���ڶ�","������","������","������","������"};
	while(1)
	{
		time_t timep;
		struct tm *p;
		time(&timep);
		p=gmtime(&timep);
		printf("����ʱ��:\n%d��%d��%d�� ",(1900+p->tm_year), (1+p->tm_mon),p->tm_mday);
		printf("%s %d:%d:%d\n", wday[p->tm_wday], p->tm_hour, p->tm_min, p->tm_sec);
		Sleep(1000);
		system("cls");
	}
}
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
char tmpbuf[20];//YYYY-MM-DD hh:mm:ss
int main()
{
	while(1)
	{
		time_t aclock;
		time(&aclock);
		strftime(tmpbuf,20,"%Y-%m-%d- %H:%M:%S",localtime(&aclock));
		printf("%s\n",tmpbuf);
		Sleep(1000);
		system("cls");
	}
	system("pause");
	return 0;
}
*/
