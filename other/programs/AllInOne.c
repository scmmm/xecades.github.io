#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<math.h>
int dl(int zzh,int zmm)
{
	int zh,mm;
	printf("�������˺�(��ʼΪ1)��");
	scanf("%d",&zh);
	printf("\n����������(��ʼҲΪ1)��");
	scanf("%d",&mm);
	system("cls");
	if(zzh==zh && zmm==mm)
	{
		printf("��½�ɹ���\n");
		Sleep(2000);
		system("cls");
		return 1;
	}
	else
	{
		printf("��½ʧ�ܣ�\n");
		Sleep(2000);
		system("cls");
		return 2;
	}
}
int main()
{
	system("color f0");
	int szh,smm,s;
	szh=1;
	smm=1;
	s=dl(szh,smm);
	if(s==1)
	{
		while(1)
		{
			char s;
			float xa1,xb1,xc1,xd1;
			int a,a1,b1,c1,d1,a2,b2,c2;
			printf("��ã��û�%d��\n",szh);
			printf("���ܴ�ȫ:\n0:�˳�,\n1:�����ӷ������,\n2:С���ӷ������,\n3:ʹ�÷���,\n4:���죨��ʱ����ʹ�ã�,\n5:�Թ�,\n6:����,\n7:ս����˫�ˣ�,\n8:������,\n9:�����أ�ǧ��Ҫ�����ַ�����,\n10:����ʱ,\n11:2D��MC��Ϸ,\n12:��ɫ��,\n13:���׼Ӽ��˳�������,\n14:���\n");
			scanf ("%d",&a);
			if(a==0)
			{
				system("cls");
				printf("�ݰݣ�����Ŷ���ҵ����ˣ�%d\n",szh);
				Sleep(2000);
				break;
			}
			else if(a==1)
			{
				system("cls");
				printf("�����ӷ������\n��ӭʹ��\n");
				printf("__________________________________________\n");
				printf("�������һ�������ٰ��س�\n");
				scanf("%d",&a1);
				printf("������ڶ��������ٰ��س�\n");
				scanf("%d",&b1);
				printf("����������������ٰ��س�\n");
				scanf("%d",&c1);
				d1=a1+b1+c1;
				printf("%d+%d+%d=%d\n",a1,b1,c1,d1);
			}
			else if(a==2)
			{
				system("cls");
				printf("С���ӷ������\n��ӭʹ��\n");
				printf("__________________________________________\n");
				printf("�������һ�������ٰ��س�\n");
				scanf("%f",&xa1);
				printf("������ڶ��������ٰ��س�\n");
				scanf("%f",&xb1);
				printf("����������������ٰ��س�\n");
				scanf("%f",&xc1);
				xd1=xa1+xb1+xc1;
				printf("%f+%f+%f=%f\n",xa1,xb1,xc1,xd1);
			}
			else if(a==3)
			{
				system("cls");
				printf("ʹ�÷���:\n");
				Sleep(2000);
				printf("������򣬰���ָʾ��������ʹ��Ӧ�õĴ��룬Ȼ��ʹ�ã�ע�⣺���������룡����\n");
				Sleep(2000);
				printf("ʹ��һ�κ������ʹ��\n");
			}
			else if(a==4)
			{
				system("cls");
				printf("�������ϵͳ���Ǻ����ƣ�������޸ĵ�~");
				Sleep(2000);
				system("cls");
			}
			else if(a==5)
			{
				system("cls");
				printf("����һ���Թ�������WSAD���������ߡ�QΪ�յ㡣��ӭʹ�ã�");
				Sleep(2000);
				system("cls");
				char a[50][50]= {"################################",
				                 "#O   #     #  #  #   #  #  #  ##",
				                 "##     #   #       ###     #   #",
				                 "#    # #####  ## #   #  # #### #",
				                 "##   #       #   ### #  # ##   #",
				                 "##   ##### #  #  #      #  # ###",
				                 "#      #   #  ####   #  ## #   #",
				                 "##   ##### #     ########      #",
				                 "#    # #      #      #     ### #",
				                 "##   # #   #  ####   #  #  #   Q",
				                 "################################",
				                };
				int i,x,y,p,q;
				char ch;

				x=1;
				y=1;
				p=9;
				q=31;
				for(i=0; i<=12; i++)
					puts(a[i]);
				while(x!=p||y!=q)
				{
					ch=getch();
					if(ch=='s')
					{
						if(a[x+1][y]!='#')
						{
							a[x][y]=' ';
							x++;
							a[x][y]='O';
						}
					}
					if(ch=='w')
					{
						if(a[x-1][y]!='#')
						{
							a[x][y]=' ';
							x--;
							a[x][y]='O';
						}
					}
					if(ch=='a')
					{
						if(a[x][y-1]!='#')
						{
							a[x][y]=' ';
							y--;
							a[x][y]='O';
						}
					}
					if(ch=='d')
					{
						if(a[x][y+1]!='#')
						{
							a[x][y]=' ';
							y++;
							a[x][y]='O';
						}
					}
					system("cls");
					for(i=0; i<=12; i++)
						puts(a[i]);
				}
				system("cls");
				printf("��Ӯ�ˣ�����\n");
			}
			else if(a==6)
			{
				system("cls");
				printf("����һ��������Ϸ���������ѡһ�����������£�������ʾ�ҳ������");
				Sleep(3500);
				system("cls");
				int a7,b7,sum7;
				sum7=10;
				srand((unsigned)time(NULL));
				a7=rand()%100;
				while(1)
				{
					sum7--;
					scanf("%d",&b7);
					if(b7>a7)
						printf("���ˣ�����%d�λ��ᣬ�����\n",sum7);
					if(b7<a7)
						printf("С�ˣ�����%d�λ��ᣬ�����\n",sum7);
					if(b7==a7)
					{
						printf("��ϲ�㣡����!���������%d\n",a7);
						break;
					}
					if(sum7==0)
					{
						printf("û�л����ˣ��������%d\n",a7);
						break;
					}
				}
			}
			else if(a==7)
			{
				char a[100][100]= {"####################",
				                   "#                  #",
				                   "#                  #",
				                   "#                  #",
				                   "#                  #",
				                   "#                  #",
				                   "#                  #",
				                   "####################",
				                  };
				int xue,x,y,cxue,cx,cy,i;
				char dong,cdong;
				xue=100;
				cxue=100;
				x=6;
				y=1;
				cx=6;
				cy=18;
				a[x][y]=1;
				a[cx][cy]=2;
				system("cls");
				printf("����%c������WSAD���������ߣ�1�����ߣ���20Ѫ����2���ִ򣨿�10Ѫ��\n����%c������IKJL�����ƣ�3�����ߣ���20Ѫ����4���ִ򣨿�10Ѫ��\n",1,2);
				Sleep(3000);
				system("cls");
				printf("3\n");
				Sleep(1000);
				system("cls");
				printf("2\n");
				Sleep(1000);
				system("cls");
				printf("1\n");
				Sleep(1000);
				system("cls");
				for(i=0; i<=7; i++)
					puts(a[i]);
				printf("%c��%dѪ��%c��%d��Ѫ\n",2,cxue,1,xue);
				while(xue>0&&cxue>0)
				{
					dong=getch();
					if(dong=='s')
					{
						if(a[x+1][y]==' ')
						{
							a[x][y]=' ';
							x++;
							a[x][y]=1;
						}
					}
					if(dong=='w')
					{
						if(a[x-1][y]==' ')
						{
							a[x][y]=' ';
							x--;
							a[x][y]=1;
						}
					}
					if(dong=='a')
					{
						if(a[x][y-1]==' ')
						{
							a[x][y]=' ';
							y--;
							a[x][y]=1;
						}
					}
					if(dong=='d')
					{
						if(a[x][y+1]==' ')
						{
							a[x][y]=' ';
							y++;
							a[x][y]=1;
						}
					}
					if(dong=='1')
					{
						if(a[cx+1][cy]==1||a[cx-1][cy]==1||a[cx][cy+1]==1||a[cx][cy-1]==1)
						{
							cxue=cxue-20;
						}
					}
					if(dong=='2')
					{
						if(a[cx+1][cy]==1||a[cx-1][cy]==1||a[cx][cy+1]==1||a[cx][cy-1]==1)
						{
							cxue=cxue-10;
						}
					}
					/*��һ���˲���*/
					cdong=getch();
					if(cdong=='k')   //��
					{
						if(a[cx+1][cy]==' ')
						{
							a[cx][cy]=' ';
							cx++;
							a[cx][cy]=2;
						}
					}
					if(cdong=='i')   //��
					{
						if(a[cx-1][cy]==' ')
						{
							a[cx][cy]=' ';
							cx--;
							a[cx][cy]=2;
						}
					}
					if(cdong=='j')   //��
					{
						if(a[cx][cy-1]==' ')
						{
							a[cx][cy]=' ';
							cy--;
							a[cx][cy]=2;
						}
					}
					if(cdong=='l')   //��
					{
						if(a[cx][cy+1]==' ')
						{
							a[cx][cy]=' ';
							cy++;
							a[cx][cy]=2;
						}
					}
					if(cdong=='3')   //��
					{
						if(a[x+1][y]==2||a[x-1][y]==2||a[x][y+1]==2||a[x][y-1]==2)
						{
							xue=xue-20;
						}
					}
					if(cdong=='4')   //��
					{
						if(a[x+1][y]==2||a[x-1][y]==2||a[x][y+1]==2||a[x][y-1]==2)
						{
							xue=xue-10;
						}
					}
					system("cls");
					for(i=0; i<=7; i++)
						puts(a[i]);
					printf("%c��%dѪ��%c��%d��Ѫ\n",2,cxue,1,xue);
				}
				system("cls");
				if(xue<=0)
					printf("%cӮ�ˣ�\n",2);
				if(cxue<=0)
					printf("%cӮ�ˣ�\n",1);
			}
			else if(a==8)
			{
				int m8;
				int i8;
				int k8;
				system("cls");
				printf("������һ������������1��0���������ǲ�����������");
				scanf("%d",&m8);
				k8=(int)sqrt((double)m8 );
				for(i8=2; i8<=k8; i8++)
					if(m8%i8==0)
						break;
				if(i8>k8)
					printf("%d������\n",m8);
				else
					printf("%d��������\n",m8);
			}
			else if(a==9)
			{
				int n9;
				int i9;
				system("cls");
				printf("������һ������:");
				scanf("%d",&n9);
				printf("%d=",n9);
				for(i9=2; i9<=n9; i9++)
				{
					while(n9!=i9)
					{
						if(n9%i9==0)
						{
							printf("%d*",i9);
							n9=n9/i9;
						}
						else
							break;
					}
				}
				printf("%d\n",n9);
			}
			else if(a==10)
			{
				int H10,M10,S10;
				system("cls");
				printf("���������³�ʼ������\n");
				printf("��ʼ��Сʱ��");
				scanf("%d",&H10);
				system("cls");
				printf("��ʼ�ķ��ӣ�");
				scanf("%d",&M10);
				system("cls");
				printf("��ʼ���룺");
				scanf("%d",&S10);
				system("cls");
				while(H10>=0)
				{
					printf("%d:%02d:%02d",H10,M10,S10);
					S10--;
					if(S10<0)
					{
						M10--;
						S10=59;
					}
					if(M10<0)
					{
						H10--;
						M10=59;
					}
					Sleep(1000);
					system("cls");
				}
				printf("�����ˣ���ӭ��ʹ�ã��ݰݣ�\n");
			}
			else if(a==11)
			{
				int i11,wp=49,x11=1,y11=1,xue11=100,xueb=49,xues=48,xueg=48,xy=9,yy=11,xn=6,yn=38,xz=17,yz=6,yjs,njs,zjs,xuey=100,xueyb=49,xueys=48,xueyg=48,xuen=100,xuenb=49,xuens=48,xueng=48,xuez=100,xuezb=49,xuezs=48,xuezg=48;
				//����Ѫ��+48=�ַ�Ѫ��
				char qp[100][100]= {"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$",
				                    "$             #              #              $  $���Ѫ����100 $������Ʒ��    $",
				                    "$             #              #              $  $���Ѫ����100 $1:��ͨ����@   $",
				                    "$             #              #              $  $ţ��Ѫ����100 $2:��|��_      $",
				                    "$             #              #              $  $���Ѫ����100 $3:            $",
				                    "$             #              #              $  $��h��ð���   $4:ըҩ        $",
				                    "$             #              #        N     $  $$$$$$$$$$$$$$$$5:����x��X    $",
				                    "$             #              #              $  $��ѡ����Ʒ��  $6:�����O��o  $",
				                    "$             #              #              $  $              $              $",
				                    "$          Y  #              #              $  $�T�T�T�j�T�T�T$              $",
				                    "$             #              #              $  $      �U*     $              $",
				                    "$###########################################$  $      �U*     $              $",
				                    "$             #              #              $  $      �U*     $              $",
				                    "$             #              #              $  $      �U*     $              $",
				                    "$             #              #              $  $���ڵġ�1     $              $",
				                    "$             #              #              $  $      �U2     $              $",
				                    "$             #              #              $  $      �U3     $              $",
				                    "$     Z       #              #              $  $      �U4     $              $",
				                    "$             #              #              $  $      �U5     $              $",
				                    "$             #              #              $  $�T�T�T�m�T�T�T$              $",
				                    "$             #              #              $  $(ʹ��'-'��'+' $              $",
				                    "$             #              #              $  $������Ʒ��)   $              $",
				                    "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$",
				                   },z,close;
				printf("��WSAD�����������ƶ�\nʹ��'-'��'+'������Ʒ��\n��1��������ָ������÷��飬��2��������ָ�����ƻ�����\n���Y����N��ţ��Z����\n��h��ʾ����");
				Sleep(2000);
				system("cls");
				qp[1][1]=24;
				qp[5][69]=19;
				for(i11=0; i11<=22; i11++)
					puts(qp[i11]);
				while(xue11>0)
				{
					z=getch();
					if(z=='+')
					{
						wp++;
					}
					if(z=='-')
					{
						wp--;
					}
					if(z=='h')
					{
						system("cls");
						printf("��WSAD�����������ƶ�\nʹ��'-'��'+'������Ʒ��\n��1��������ָ������÷��飬��2��������ָ�����ƻ�����\n���Y����N��ţ��Z����\n���Ѫ����%d\n���Ѫ����%d�����Ѫ����%d��ţ��Ѫ����%d\n��������ر���ʾ����\n",xue11,xuey,xuez,xuen);
						close=getch();
						system("cls");
					}
					if(z=='w')
					{
						qp[x11][y11]=' ';
						if(qp[x11-1][y11]==' ')
						{
							x11--;
						}
						else if(qp[x11-1][y11]=='|'&&qp[x11-2][y11]!='$')
						{
							x11=x11-2;
							qp[x11+1][y11]='|';
						}
						qp[x11][y11]=24;
					}


					if(z=='a')
					{
						qp[x11][y11]=' ';
						if(qp[x11][y11-1]==' ')
						{
							y11--;
						}
						else if(qp[x11][y11-1]=='|'&&qp[x11][y11-2]!='$')
						{
							y11=y11-2;
							qp[x11][y11+1]='|';
						}
						qp[x11][y11]=27;
					}


					if(z=='d')
					{
						qp[x11][y11]=' ';
						if(qp[x11][y11+1]==' ')
						{
							y11++;
						}
						else if(qp[x11][y11+1]=='|'&&qp[x11][y11+2]!='$')
						{
							y11=y11+2;
							qp[x11][y11-1]='|';
						}
						qp[x11][y11]=26;
					}


					if(z=='s')
					{
						qp[x11][y11]=' ';
						if(qp[x11+1][y11]==' ')
						{
							x11++;
						}
						else if(qp[x11+1][y11]=='|'&&qp[x11+2][y11]!='$')
						{
							x11=x11+2;
							qp[x11-1][y11]='|';
						}
						qp[x11][y11]=25;
					}


					if(wp=='1'&&z=='1')
					{
						if(qp[x11][y11]==24&&qp[x11-1][y11]==' ')
						{
							qp[x11-1][y11]='@';
						}
						if(qp[x11][y11]==25&&qp[x11+1][y11]==' ')
						{
							qp[x11+1][y11]='@';
						}
						if(qp[x11][y11]==27&&qp[x11][y11-1]==' ')
						{
							qp[x11][y11-1]='@';
						}
						if(qp[x11][y11]==26&&qp[x11][y11+1]==' ')
						{
							qp[x11][y11+1]='@';
						}
					}


					if(z=='2')
					{
						if(qp[x11][y11]==24&&qp[x11-1][y11]!='#'&&qp[x11-1][y11]!='Y'&&qp[x11-1][y11]!='N'&&qp[x11-1][y11]!='Z')
						{
							qp[x11-1][y11]=' ';
						}
						if(qp[x11][y11]==25&&qp[x11+1][y11]!='#'&&qp[x11+1][y11]!='Y'&&qp[x11+1][y11]!='N'&&qp[x11+1][y11]!='Z')
						{
							qp[x11+1][y11]=' ';
						}
						if(qp[x11][y11]==27&&qp[x11][y11-1]!='#'&&qp[x11][y11-1]!='Y'&&qp[x11][y11-1]!='N'&&qp[x11][y11-1]!='Z')
						{
							qp[x11][y11-1]=' ';
						}
						if(qp[x11][y11]==26&&qp[x11][y11+1]!='#'&&qp[x11][y11+1]!='Y'&&qp[x11][y11+1]!='N'&&qp[x11][y11+1]!='Z')
						{
							qp[x11][y11+1]=' ';
						}
					}

					srand((unsigned)time(NULL));
					yjs=rand()%4+1;
					if(yjs==1&&qp[xy-1][yy]==' ')   //W
					{
						qp[xy][yy]=' ';
						xy--;
						qp[xy][yy]='Y';
					}
					if(yjs==2&&qp[xy+1][yy]==' ')   //S
					{
						qp[xy][yy]=' ';
						xy++;
						qp[xy][yy]='Y';
					}
					if(yjs==3&&qp[xy][yy-1]==' ')   //A
					{
						qp[xy][yy]=' ';
						yy--;
						qp[xy][yy]='Y';
					}
					if(yjs==4&&qp[xy][yy+1]==' ')   //D
					{
						qp[xy][yy]=' ';
						yy++;
						qp[xy][yy]='Y';
					}

					srand((unsigned)time(NULL));
					njs=rand()%4;
					if(njs==1&&qp[xn-1][yn]==' ')   //W
					{
						qp[xn][yn]=' ';
						xn--;
						qp[xn][yn]='N';
					}
					if(njs==2&&qp[xn+1][yn]==' ')   //S
					{
						qp[xn][yn]=' ';
						xn++;
						qp[xn][yn]='N';
					}
					if(njs==3&&qp[xn][yn-1]==' ')   //A
					{
						qp[xn][yn]=' ';
						yn--;
						qp[xn][yn]='N';
					}
					if(njs==0&&qp[xn][yn+1]==' ')   //D
					{
						qp[xn][yn]=' ';
						yn++;
						qp[xn][yn]='N';
					}

					srand((unsigned)time(NULL));
					zjs=rand()%4-1;
					if(zjs==1&&qp[xz-1][yz]==' ')   //W
					{
						qp[xz][yz]=' ';
						xz--;
						qp[xz][yz]='Z';
					}
					if(zjs==2&&qp[xz+1][yz]==' ')   //S
					{
						qp[xz][yz]=' ';
						xz++;
						qp[xz][yz]='Z';
					}
					if(zjs==0&&qp[xz][yz-1]==' ')   //A
					{
						qp[xz][yz]=' ';
						yz--;
						qp[xz][yz]='Z';
					}
					if(zjs==-1&&qp[xz][yz+1]==' ')   //D
					{
						qp[xz][yz]=' ';
						yz++;
						qp[xz][yz]='Z';
					}

					if(qp[xy+1][yy]==24||qp[xy+1][yy]==25||qp[xy+1][yy]==27||qp[xy+1][yy]==26||qp[xy-1][yy]==24||qp[xy-1][yy]==25||qp[xy-1][yy]==27||qp[xy-1][yy]==26||qp[xy][yy-1]==24||qp[xy][yy-1]==25||qp[xy][yy-1]==27||qp[xy][yy-1]==26||qp[xy][yy+1]==24||qp[xy][yy+1]==25||qp[xy][yy+1]==27||qp[xy][yy+1]==26)
					{
						xue11=xue11-15;
					}


					if(qp[xn+1][yn]==24||qp[xn+1][yn]==25||qp[xn+1][yn]==27||qp[xn+1][yn]==26||qp[xn-1][yn]==24||qp[xn-1][yn]==25||qp[xn-1][yn]==27||qp[xn-1][yn]==26||qp[xn][yn-1]==24||qp[xn][yn-1]==25||qp[xn][yn-1]==27||qp[xn][yn-1]==26||qp[xn][yn+1]==24||qp[xn][yn+1]==25||qp[xn][yn+1]==27||qp[xn][yn+1]==26)
					{
						xue11=xue11-25;
					}


					if(qp[xz+1][yz]==24||qp[xz+1][yz]==25||qp[xz+1][yz]==27||qp[xz+1][yz]==26||qp[xz-1][yz]==24||qp[xz-1][yz]==25||qp[xz-1][yz]==27||qp[xz-1][yz]==26||qp[xz][yz-1]==24||qp[xz][yz-1]==25||qp[xz][yz-1]==27||qp[xz][yz-1]==26||qp[xz][yz+1]==24||qp[xz][yz+1]==25||qp[xz][yz+1]==27||qp[xz][yz+1]==26)
					{
						xue11=xue11-20;
					}
					/*ʡ��1���� */
					if(wp=='2'&&z=='1')
					{
						if(qp[x11][y11]==24)
						{
							if(qp[x11-1][y11]==' ')
							{
								qp[x11-1][y11]='_';
							}
							else if(qp[x11-1][y11]=='_')
							{
								qp[x11-1][y11]='|';
							}
							else if(qp[x11-1][y11]=='|')
							{
								qp[x11-1][y11]='_';
							}
						}
						else if(qp[x11][y11]==25)
						{
							if(qp[x11+1][y11]==' ')
							{
								qp[x11+1][y11]='_';
							}
							else if(qp[x11+1][y11]=='_')
							{
								qp[x11+1][y11]='|';
							}
							else if(qp[x11+1][y11]=='|')
							{
								qp[x11+1][y11]='_';
							}
						}
						else if(qp[x11][y11]==27)
						{
							if(qp[x11][y11-1]==' ')
							{
								qp[x11][y11-1]='_';
							}
							else if(qp[x11][y11-1]=='_')
							{
								qp[x11][y11-1]='|';
							}
							else if(qp[x11][y11-1]=='|')
							{
								qp[x11][y11-1]='_';
							}
						}
						else if(qp[x11][y11]==26)
						{
							if(qp[x11][y11+1]==' ')
							{
								qp[x11][y11+1]='_';
							}
							else if(qp[x11][y11+1]=='_')
							{
								qp[x11][y11+1]='|';
							}
							else if(qp[x11][y11+1]=='|')
							{
								qp[x11][y11+1]='_';
							}
						}
					}
					/*ʡ��2������*/
					/*ʡ��3��ըҩ*/
					if(wp=='4'&&z=='1')
					{
						if(qp[x11][y11]==24)
						{
							if(qp[x11-1][y11]==' ')
							{
								qp[x11-1][y11]=19;
							}
							else if(qp[x11-1][y11]==19)
							{
								qp[x11-1][y11]=' ';
								if(qp[x11-2][y11]!='#'&&qp[x11-2][y11]!='$'&&qp[x11-2][y11]!='Y'&&qp[x11-2][y11]!='N'&&qp[x11-2][y11]!='Z')
									qp[x11-2][y11]=' ';
								if(qp[x11-1][y11-1]!='#'&&qp[x11-1][y11-1]!='$'&&qp[x11-1][y11-1]!='Y'&&qp[x11-1][y11-1]!='N'&&qp[x11-1][y11-1]!='Z')
									qp[x11-1][y11-1]=' ';
								if(qp[x11-1][y11+1]!='#'&&qp[x11-1][y11+1]!='$'&&qp[x11-1][y11+1]!='Y'&&qp[x11-1][y11+1]!='N'&&qp[x11-1][y11+1]!='Z')
									qp[x11-1][y11+1]=' ';
							}
						}
						else if(qp[x11][y11]==25)
						{
							if(qp[x11+1][y11]==' ')
							{
								qp[x11+1][y11]=19;
							}
							else if(qp[x11+1][y11]==19)
							{
								qp[x11+1][y11]=' ';
								if(qp[x11+2][y11]!='#'&&qp[x11+2][y11]!='$'&&qp[x11+2][y11]!='Y'&&qp[x11+2][y11]!='N'&&qp[x11+2][y11]!='Z')
									qp[x11+2][y11]=' ';
								if(qp[x11+1][y11-1]!='#'&&qp[x11+1][y11-1]!='$'&&qp[x11+1][y11-1]!='Y'&&qp[x11+1][y11-1]!='N'&&qp[x11+1][y11-1]!='Z')
									qp[x11+1][y11-1]=' ';
								if(qp[x11+1][y11+1]!='#'&&qp[x11+1][y11+1]!='$'&&qp[x11+1][y11+1]!='Y'&&qp[x11+1][y11+1]!='N'&&qp[x11+1][y11+1]!='Z')
									qp[x11+1][y11+1]=' ';
							}
						}
						else if(qp[x11][y11]==26)
						{
							if(qp[x11][y11+1]==' ')
							{
								qp[x11][y11+1]=19;
							}
							else if(qp[x11][y11+1]==19)
							{
								qp[x11][y11+1]=' ';
								if(qp[x11-1][y11+1]!='#'&&qp[x11-1][y11+1]!='$'&&qp[x11-1][y11+1]!='Y'&&qp[x11-1][y11+1]!='N'&&qp[x11-1][y11+1]!='Z')
									qp[x11-1][y11+1]=' ';
								if(qp[x11+1][y11+1]!='#'&&qp[x11+1][y11+1]!='$'&&qp[x11+1][y11+1]!='Y'&&qp[x11+1][y11+1]!='N'&&qp[x11+1][y11+1]!='Z')
									qp[x11+1][y11+1]=' ';
								if(qp[x11][y11+2]!='#'&&qp[x11][y11+2]!='$'&&qp[x11][y11+2]!='Y'&&qp[x11][y11+2]!='N'&&qp[x11][y11+2]!='Z')
									qp[x11][y11+2]=' ';
							}
						}
						else if(qp[x11][y11]==27)
						{
							if(qp[x11][y11-1]==' ')
							{
								qp[x11][y11-1]=19;
							}
							else if(qp[x11][y11-1]==19)
							{
								qp[x11][y11-1]=' ';
								if(qp[x11-1][y11-1]!='#'&&qp[x11-1][y11-1]!='$'&&qp[x11-1][y11-1]!='Y'&&qp[x11-1][y11-1]!='N'&&qp[x11-1][y11-1]!='Z')
									qp[x11-1][y11-1]=' ';
								if(qp[x11+1][y11-1]!='#'&&qp[x11+1][y11-1]!='$'&&qp[x11+1][y11-1]!='Y'&&qp[x11+1][y11-1]!='N'&&qp[x11+1][y11-1]!='Z')
									qp[x11+1][y11-1]=' ';
								if(qp[x11][y11-2]!='#'&&qp[x11][y11-2]!='$'&&qp[x11][y11-2]!='Y'&&qp[x11][y11-2]!='N'&&qp[x11][y11-2]!='Z')
									qp[x11][y11-2]=' ';
							}
						}
					}
					if(wp=='5'&&z=='1')
					{
						if(qp[x11][y11]==24&&qp[x11-1][y11]==' ')
						{
							qp[x11-1][y11]='x';
							if(qp[x11-2][y11]=='X'||qp[x11-2][y11]=='O'||qp[x11-1][y11-1]=='X'||qp[x11-1][y11-1]=='O'||qp[x11-1][y11+1]=='X'||qp[x11-1][y11+1]=='O')
							{
								qp[x11-1][y11]='X';
							}
						}
						if(qp[x11][y11]==25&&qp[x11+1][y11]==' ')
						{
							qp[x11+1][y11]='x';
							if(qp[x11+2][y11]=='X'||qp[x11+2][y11]=='O'||qp[x11+1][y11-1]=='X'||qp[x11+1][y11-1]=='O'||qp[x11+1][y11+1]=='X'||qp[x11+1][y11+1]=='O')
							{
								qp[x11+1][y11]='X';
							}
						}
						if(qp[x11][y11]==27&&qp[x11][y11-1]==' ')
						{
							qp[x11][y11-1]='x';
							if(qp[x11-1][y11-1]=='X'||qp[x11-1][y11-1]=='O'||qp[x11+1][y11-1]=='X'||qp[x11+1][y11-1]=='O'||qp[x11][y11-2]=='X'||qp[x11][y11-2]=='O')
							{
								qp[x11][y11-1]='X';
							}
						}
						if(qp[x11][y11]==26&&qp[x11][y11+1]==' ')
						{
							qp[x11][y11+1]='x';
							if(qp[x11-1][y11+1]=='X'||qp[x11-1][y11+1]=='O'||qp[x11+1][y11+1]=='X'||qp[x11+1][y11+1]=='O'||qp[x11][y11+2]=='X'||qp[x11][y11+2]=='O')
							{
								qp[x11][y11+1]='X';
							}
						}

					}
					if(wp=='6'&&z=='1')
					{
						if(qp[x11][y11]==24&&qp[x11-1][y11]==' '||qp[x11-1][y11]=='o')
						{
							qp[x11-1][y11]='O';
						}
						else if(qp[x11][y11]==25&&qp[x11+1][y11]==' '||qp[x11+1][y11]=='o')
						{
							qp[x11+1][y11]='O';
						}
						else if(qp[x11][y11]==27&&qp[x11][y11-1]==' '||qp[x11][y11-1]=='o')
						{
							qp[x11][y11-1]='O';
						}
						else if(qp[x11][y11]==26&&qp[x11][y11+1]==' '||qp[x11][y11+1]=='o')
						{
							qp[x11][y11+1]='O';
						}
						else if(qp[x11][y11]==24&&qp[x11-1][y11]=='O')
						{
							qp[x11-1][y11]='o';
						}
						else if(qp[x11][y11]==25&&qp[x11+1][y11]=='O')
						{
							qp[x11+1][y11]='o';
						}
						else if(qp[x11][y11]==27&&qp[x11][y11-1]=='O')
						{
							qp[x11][y11-1]='o';
						}
						else if(qp[x11][y11]==26&&qp[x11][y11+1]=='O')
						{
							qp[x11][y11+1]='o';
						}
					}
					system("cls");
					if(wp==48)
						wp=57;
					if(wp==58)
						wp=49;
					qp[10][56]='*';
					qp[11][56]='*';
					qp[12][56]='*';
					qp[13][56]='*';
					qp[15][56]='*';
					qp[16][56]='*';
					qp[17][56]='*';
					qp[18][56]='*';
					if(wp-4>48)
						qp[10][56]=wp-4;
					if(wp-3>48)
						qp[11][56]=wp-3;
					if(wp-2>48)
						qp[12][56]=wp-2;
					if(wp-1>48)
						qp[13][56]=wp-1;
					qp[14][56]=wp;
					if(wp+1<58)
						qp[15][56]=wp+1;
					if(wp+2<58)
						qp[16][56]=wp+2;
					if(wp+3<58)
						qp[17][56]=wp+3;
					if(wp+4<58)
						qp[18][56]=wp+4;

					xueb=xue11/100+48;
					xues=xue11%100/10+48;
					xueg=xue11%100%10+48;
					qp[1][58]=xueb;
					qp[1][59]=xues;
					qp[1][60]=xueg;
					xueyb=xuey/100+48;
					xueys=xuey%100/10+48;
					xueyg=xuey%100%10+48;
					qp[2][58]=xueyb;
					qp[2][59]=xueys;
					qp[2][60]=xueyg;
					xuenb=xuen/100+48;
					xuens=xuen%100/10+48;
					xueng=xuen%100%10+48;
					qp[3][58]=xuenb;
					qp[3][59]=xuens;
					qp[3][60]=xueng;
					xuezb=xuez/100+48;
					xuezs=xuez%100/10+48;
					xuezg=xuez%100%10+48;
					qp[2][58]=xuezb;
					qp[2][59]=xuezs;
					qp[2][60]=xuezg;
					for(i11=0; i11<=22; i11++)
						puts(qp[i11]);
				}
				system("cls");
				printf("��Ϸ������\nллʹ�ã�");
			}
			else if(a==12)
			{
				system("cls");
				printf("3");
				Sleep(1000);
				system("cls");
				printf("2");
				Sleep(1000);
				system("cls");
				printf("1");
				Sleep(1000);
				system("cls");
				system("color 00");
				Sleep(200);
				system("color 10");
				Sleep(200);
				system("color 20");
				Sleep(200);
				system("color 30");
				Sleep(200);
				system("color 40");
				Sleep(200);
				system("color 50");
				Sleep(200);
				system("color 60");
				Sleep(200);
				system("color 70");
				Sleep(200);
				system("color 80");
				Sleep(200);
				system("color 90");
				Sleep(200);
				system("color a0");
				Sleep(200);
				system("color b0");
				Sleep(200);
				system("color c0");
				Sleep(200);
				system("color d0");
				Sleep(200);
				system("color e0");
				Sleep(200);
				system("color f0");
				Sleep(200);
				system("color e0");
				Sleep(200);
				system("color d0");
				Sleep(200);
				system("color c0");
				Sleep(200);
				system("color b0");
				Sleep(200);
				system("color a0");
				Sleep(200);
				system("color 90");
				Sleep(200);
				system("color 80");
				Sleep(200);
				system("color 70");
				Sleep(200);
				system("color 60");
				Sleep(200);
				system("color 50");
				Sleep(200);
				system("color 40");
				Sleep(200);
				system("color 30");
				Sleep(200);
				system("color 20");
				Sleep(200);
				system("color 10");
				Sleep(200);
				system("color 00");
				Sleep(200);
				system("color 10");
				Sleep(200);
				system("color 20");
				Sleep(200);
				system("color 30");
				Sleep(200);
				system("color 40");
				Sleep(200);
				system("color 50");
				Sleep(200);
				system("color 60");
				Sleep(200);
				system("color 70");
				Sleep(200);
				system("color 80");
				Sleep(200);
				system("color 90");
				Sleep(200);
				system("color a0");
				Sleep(200);
				system("color b0");
				Sleep(200);
				system("color c0");
				Sleep(200);
				system("color d0");
				Sleep(200);
				system("color e0");
				Sleep(200);
				system("color f0");
				Sleep(200);
				system("color e0");
				Sleep(200);
				system("color d0");
				Sleep(200);
				system("color c0");
				Sleep(200);
				system("color b0");
				Sleep(200);
				system("color a0");
				Sleep(200);
				system("color 90");
				Sleep(200);
				system("color 80");
				Sleep(200);
				system("color 70");
				Sleep(200);
				system("color 60");
				Sleep(200);
				system("color 50");
				Sleep(200);
				system("color 40");
				Sleep(200);
				system("color 30");
				Sleep(200);
				system("color 20");
				Sleep(200);
				system("color 10");
				Sleep(200);
				system("color 00");
				Sleep(200);
				system("color 10");
				Sleep(200);
				system("color 20");
				Sleep(200);
				system("color 30");
				Sleep(200);
				system("color 40");
				Sleep(200);
				system("color 50");
				Sleep(200);
				system("color 60");
				Sleep(200);
				system("color 70");
				Sleep(200);
				system("color 80");
				Sleep(200);
				system("color 90");
				Sleep(200);
				system("color a0");
				Sleep(200);
				system("color b0");
				Sleep(200);
				system("color c0");
				Sleep(200);
				system("color d0");
				Sleep(200);
				system("color e0");
				Sleep(200);
				system("color f0");
				Sleep(200);
				system("color e0");
				Sleep(200);
				system("color d0");
				Sleep(200);
				system("color c0");
				Sleep(200);
				system("color b0");
				Sleep(200);
				system("color a0");
				Sleep(200);
				system("color 90");
				Sleep(200);
				system("color 80");
				Sleep(200);
				system("color 70");
				Sleep(200);
				system("color 60");
				Sleep(200);
				system("color 50");
				Sleep(200);
				system("color 40");
				Sleep(200);
				system("color 30");
				Sleep(200);
				system("color 20");
				Sleep(200);
				system("color 10");
				Sleep(200);
				system("color 00");
			}
			else if(a==13)
			{
				float a,c,sc;
				char b;
				system("cls");
				printf("��ʽ������1 ����(+-*/) ����2\n");
				Sleep(2000);
				scanf("%f %c %f",&a,&b,&c);
				if(b=='+')
				{
					sc=a+c;
				}
				if(b=='-')
				{
					sc=a-c;
				}
				if(b=='*')
				{
					sc=a*c;
				}
				if(b=='/'&&c!=0)
				{
					sc=a/c;
				}
				if(b=='/'&&c==0)
				{
					printf("��������Ϊ0������");
				}
				if(b=='/'&&c!=0||b!='/')
				{
					printf("���Ϊ%.4f",sc);
				}
			}
			else if(a==14)
			{
				float s14;
				long long b14,x14,n14,c14,i14,j14,d14,l14,a14[50000];
				system("cls");
				printf("��������е�λ��:");
				scanf("%d",&x14);
				for(s14=0,n14=1; n14<=50000; n14++) //�ۼ�ȷ������.
				{
					s14=s14+log10((2*n14+1)/n14);
					if(s14>x14+1)
						break;
				}
				for(i14=0; i14<=x14+5; i14++)
					a14[i14]=0;
				for(c14=1,j14=n14; j14>=1; j14--) //����ʽ�ֲ����㡣
				{
					d14=2*j14+1;
					for(i14=0; i14<=x14+4; i14++) //��λʵʩ��2j+1.
					{
						a14[i14]=c14/d14;
						c14=(c14%d14)*10+a14[i14+1];
					}
					a14[x14+5]=c14/d14;
					for(b14=0,i14=x14+5; i14>=0; i14--) //��λʵʩ��j
					{
						a14[i14]=a14[i14]*j14+b14;
						b14=a14[i14]/10;
						a14[i14]=a14[i14]%10;
					}
					a14[0]=a14[0]+1;
					c14=a14[0];//������1.
				}
				for(b14=0,i14=x14+5; i14>=0; i14--) //����ʽ��λ��2
				{
					a14[i14]=a14[i14]*2+b14;
					b14=a14[i14]/10;
					a14[i14]=a14[i14]%10;
				}
				printf("��=     %d.",a14[0]);//��λ�����������
				for(l14=10,i14=1; i14<=x14; i14++)
				{
					printf("%d",a14[i14]);
					l14++;
					if(l14%70==0)
						printf("\n");
				}
			}
			else
			{
				system("cls");
				printf("û��������֣��벻Ҫ�����룡");
			}
			system("color f0");
			Sleep(2000);
			system("cls");
		}
	}
	else
	{
		printf("������һ�Σ�\n");
	}
	system("pause");
	return 0;
}
