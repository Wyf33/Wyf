#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define MAX 2000
struct word
{
	int n;
	char c[40];
}w[1000];
int main()
{

	char a[MAX][MAX]; 
    FILE *fp;
    int total=0; //存文件中单词个数 
    char b[30],ch;
    int i=0,m=1,j=0,k=0,t=0,flag=0;

    char c;

    fp=fopen("a.txt","r");//打开文件并进行读操作 

  while((c=fgetc(fp))!=EOF)
  {
  	if('A'>=ch&&ch<='Z')
  	ch=ch+32;
  	if('a'>=ch&&ch<='z')
  	{
  		b[i]=ch;
  		i++;
  		flag=1;
	}
	else
	{
		if(ch=='\n')
		flag=0;
		if(flag==1)
		{
		b[i]='\0';
		i=0;
		flag=0;
		m=0;	
		for(int j=0;j<k;j++)
		if(strcmp(b,w[j].c==0))
		{
			m=1;
	
		}
		if(m)
		w[j].n++;//个数 
		else
		{
			w[k].n=1;
			 strcpy(w[k].c,b);
			k++;
		}
	 }
   }
  }
for(int l=0;l<k;l++)
{
	puts(w[l]);
	printf("单词个数：%d\n",w[l].n);
 } 
return 0;
}

