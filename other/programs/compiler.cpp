#include<iostream>
#include<cstdio>
#include<windows.h>
#include<string>
#include<fstream>
using namespace std;
string path,code;
void input();
void print(string);
void outputP1();
void outputP2();
bool inputRun();
int main()
{
	//freopen("out.txt","w+",stdout);
	//C:\Users\Administrator\Desktop\file ks
	input();
	outputP1();
	outputP2();
	cin.get();
	cin.get();
	return 0;
}
void input()
{
	char tmp[3000];
	cin.clear();
	cout<<"�� �����ļ�����·��(��������\".cpp\"):"<<endl;
	cout<<"�� ";
	cin.getline(tmp,3000);
	path=tmp;
	fstream file;
	file.open((path+".cpp").c_str());
	if(!file)
	{
		cout<<"������ERROR!������"<<endl;
		cout<<"��δ�ҵ�Ŀ���ļ���"<<endl;
		cout<<"������������������"<<endl;
		cin.get();
		cin.get();
		exit(-1);
	}
	cout<<endl;
}
void outputP1()
{
	code="g++ \""+path+".cpp\" -g -o \""+path+".exe\"";
	cout<<"���������������������������������������������� 1"<<endl;
	cout<<"�� �ļ���ַ:"<<endl;
	print(path+".cpp");
	cout<<"�� �����ļ�:"<<endl;
	print(path+".exe");
	cout<<"�� ����ָ��:"<<endl;
	print(code);
	cout<<"�� ִ�б���(����ɹ�������ʾ):"<<endl;
	system(code.c_str());
	cout<<endl;
}
void outputP2()
{
	cout<<"���������������������������������������������� 2"<<endl;
	cout<<"�� ������:"<<endl;
	print(path+".exe");
	cout<<"�� �Ƿ����г���?(Y/N)";
	if(inputRun())
	{
		code="start \"\" \""+path+".exe\"";
		cout<<"�� ����ָ��:"<<endl;
		print(code);
		cout<<"�� ִ�б���(����ɹ�������ʾ):"<<endl;
		system(code.c_str());
	}
	else
		cout<<"�� ��ȡ������"<<endl;
}
bool inputRun()
{
	cin.clear();
	char c;
	cin>>c;
	if(c=='y' || c=='Y')
		return true;
	return false;
}
void print(string str)
{
	cout<<"�� ";
	for(int i=0,j=0,len=str.length(); i<len; i++,j++)
	{
		if(j==60)
		{
			j=0;
			cout<<endl<<"�� ";
		}
		cout<<str[i];
	}
	cout<<endl;
}
