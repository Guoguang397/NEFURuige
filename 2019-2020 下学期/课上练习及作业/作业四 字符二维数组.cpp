/*
��Ŀ������
�ҳ�ȫ��34��ͬѧ�����д��С�li����LI����Li����iL���������˴�ӡ��� 
*/
#include <stdio.h>
#include <string.h>

int main()
{
	char name[34][20];
	for(int i=0;i<34;i++)scanf("%s",name[i]);
	for(int i=0;i<34;i++)
	{
		for(int j=0;j<strlen(name[i])-1;j++)
		{
			//��Ŀ���ĸ��������ˣ�Ӧ���� "lI" �� 
			if((name[i][j]=='l'||name[i][j]=='L')&&(name[i][j+1]=='i'||name[i][j+1]=='I'))puts(name[i]);
			//��ĿҪ��û���Ļ�������� 
			//if((name[i][j]=='L')&&(name[i][j+1]=='i'||name[i][j+1]=='I')||name[i][j]=='l'&&name[i][j+1]=='i'||name[i][j]=='i'&&name[i][j+1]=='L')puts(name[i]);
		}
	}
	return 0;
}
