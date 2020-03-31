/*
题目描述：
找出全班34名同学名字中带有“li”或“LI”或“Li”或“iL”的所有人打印输出 
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
			//题目第四个好像打错了，应该是 "lI" 吧 
			if((name[i][j]=='l'||name[i][j]=='L')&&(name[i][j+1]=='i'||name[i][j+1]=='I'))puts(name[i]);
			//题目要是没打错的话就用这个 
			//if((name[i][j]=='L')&&(name[i][j+1]=='i'||name[i][j+1]=='I')||name[i][j]=='l'&&name[i][j+1]=='i'||name[i][j]=='i'&&name[i][j+1]=='L')puts(name[i]);
		}
	}
	return 0;
}
