#include <stdio.h>
int main()
{

    float number[26]={0};//����ĸ���ֵĴ���
    float pl[26];//����ĸƵ�� 
	char letter[26]; //����ĸ 
	int s=65;
    for(int j=0;j<26;j++)
    {
    	letter[j]=char(s);
    	s++;
	}
    FILE *fp;
    int total=0; //���ļ�����ĸ���� 

    int i;

    char c;

    fp=fopen("a.txt","r");//���ļ������ж����� 

    if(fp!=NULL)

        while(!feof(fp)){

            c=fgetc(fp);  //���ĵ��ж�ȡ��ĸ����c��

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

    fclose(fp);  //�ر��ĵ�
    for(int j=0;j<26;j++)
    {
    	pl[j]=number[j]/total; 
    //	printf("%c: %.2lf\n",letter[j],pl[j]);
	}
	
//���ֵ�Ƶ������
	for(int k=0;k<26;k++)
	{
		int key=k;
		for(int j=k+1;j<26;j++)
		{
			if(pl[j]>pl[key])
			key=j;
			//�ж���ĸ�Ĵ�С 
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
	printf("�����ĸ��Ƶ�ʣ�\n");
	  for(int j=0;j<26;j++)
    {

    	printf("%c: %.2lf\n",letter[j],pl[j]);
	}


    printf("��ĸ����Ϊ��%d",total);  //ͳ����ĸ����
return 0;
}

 
