#include <stdio.h>
int main()
{

    float number[26]={0};//存字母出现的次数
    float pl[26];//存字母频率 
	char letter[26]; //存字母 
	int s=65;
    for(int j=0;j<26;j++)
    {
    	letter[j]=char(s);
    	s++;
	}
    FILE *fp;
    int total=0; //存文件中字母个数 

    int i;

    char c;

    fp=fopen("a.txt","r");//打开文件并进行读操作 

    if(fp!=NULL)

        while(!feof(fp)){

            c=fgetc(fp);  //从文档中读取字母放置c中

            if(c>='A'&&c<='Z'){
			 
                number[c-'A']++;

                total++;
            }

            else if(c>='a'&&c<='z'){

                number[c-'a']++;

                total++;
            }
        }

    else

        printf("Fail to open file!\n");

    fclose(fp);  //关闭文档
    for(int j=0;j<26;j++)
    {
    	pl[j]=number[j]/total; 
    //	printf("%c: %.2lf\n",letter[j],pl[j]);
	}
	
//出现的频率排序
	for(int k=0;k<26;k++)
	{
		int key=k;
		for(int j=k+1;j<26;j++)
		{
			if(pl[j]>pl[key])
			key=j;
			//判断字母的大小 
			if(pl[j]==pl[key]&&letter[j]<letter[k]) 
			{
				char ff=letter[k];
				letter[k]=letter[j];
				letter[j]=ff;
			}
		}
		if(key!=k)
		{
			float temp=pl[k];
			char f=letter[k];
			pl[k]=pl[key];
			letter[k]=letter[key];
			pl[key]=temp;
			letter[key]=f;	
		}
	}
	printf("输出字母的频率：\n");
	  for(int j=0;j<26;j++)
    {

    	printf("%c: %.2lf\n",letter[j],pl[j]);
	}


    printf("字母总数为：%d",total);  //统计字母总数
return 0;
}

 
