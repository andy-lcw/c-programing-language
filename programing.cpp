/*#include<stdio.h>
int main(){
	printf("hello world");
	     getchar();
		return 0;
}*/
/*
//1.2 c
#include<stdio.h>
int main(){
	int Fahrenheit,Celsius;
	printf("%d\t%d\n",1,-17);//ע�ⳣ��ת���ַ���ʹ��
	for(int i=1;i<=15;i++){
		Fahrenheit=20*i;
		Celsius=5*(Fahrenheit-32)/9; //Ҳ����дΪCelsius=(5/9.0)*(Fahrenheit-32);
		printf("%d\t%d\n",Fahrenheit,Celsius);}
	getchar();
	return 0;
}*/
/*
//1.3 �޸��¶�ת��������ת��������ӡһ������
#include<stdio.h>
int main(){
	printf("%s %s\n","Fahrenheit","Celsius");
	float Fahrenheit,Celsius;
    for(int i=0;i<=15;i++){
		Fahrenheit=float(20.0*i);
		Celsius=(5.0/9.0)*(Fahrenheit-32); 
		printf("%3.0f\t%6.1f\n",Fahrenheit,Celsius);}
	getchar();
	return 0;
}*/

/*
//1.4 ex ��̴�ӡ�����¶�ת��Ϊ��Ӧ�����¶ȵ�ת����
#include<stdio.h>
int main(){
	printf("%s\n","Fahrenheit-->Celsius");
	float Fahrenheit,Celsius;
	for(int i=0;i<=200;i++){
    	scanf_s("%3.0f",Fahrenheit);
		(float)Celsius=(5.0/9.0)*(Fahrenheit-32);
		printf("%6.1f\n",Celsius);}
	getchar();
	return 0;}
	*/
/*
//1.3 c
#include<stdio.h>
int main(){
	int fahr;
	for(fahr=0;fahr<=300;fahr+=20){
		printf("%3d%6.1f\n",fahr,(5.0/9.0)*(fahr-32));}
	getchar();
	return 0;
}*/

/*
//1.5 �޸��¶�ת������Ҫ�������ӡ�¶�ת����
#include<stdio.h>
int main(){
	int fahr;
	for(fahr=300;fahr>=0;fahr-=20){
		printf("%3d\t%6.1f\n",fahr,(5.0/9.0)*(fahr-32));}
	getchar();
	return 0;
}*/
/*
//1.4 c
#include<stdio.h>
#define LOWER 0
#define UPPER 300//ע��ָ����ĩβû�ж���
#define STEP 20
int main(){
	int fahr;
	for(fahr=LOWER;fahr<=UPPER;fahr+=STEP){
		printf("%3d\t%6.1f\n",fahr,(5.0/9.0)*(fahr-32));}
	getchar();
	return 0;
}*/

/*
//1.5 c
#include<stdio.h>
int main(){
	char c;
	c=getchar();
	while(c!=EOF){
		putchar(c);
		c=getchar();}
}*/


//1.6 ��֤���ʽgetchar()!=EOF��ֵ��0����1
/*#include<stdio.h>
void main(){
	if(getchar()!=EOF){
		printf("���ʽֵΪ1");}
	else
		{printf("���ʽֵΪ0");
	}
	getchar();}*/

//1.7 ��дһ����ӡEOFֵ�ĳ���
/*#include<stdio.h>
void main(){
	printf("%f",EOF);
	getchar();}*/

/*
//1.5.3 c
#include<stdio.h>
void main(){
	int n=0,c;
	//c=getchar();
	while((c=getchar())!=EOF){
		if(c=='\n')
			++n;}
	printf("%d",n);
	getchar();
}*/
/*
//1.8 ��дһ��ͳ�ƿո��Ʊ���뻻�з������ĳ���   ???
#include<stdio.h>
#include<stdlib.h>
int main(){
	int c,n1=0,n2=0,n3=0;
	c=getchar();
	while(c=!EOF){
		if(c==' ')
			++n1;
		else if(c=='\t')
			++n2;
		else if(c=='\n')
			++n3;getchar();}
	printf("%d%d%d",n1,n2,n3);
	system("pause");
	return 0;
}*/
/*
//1.9 ��дһ�������븴�Ƶ�����ĳ��� �������������Ķ���ո���һ���ո����
#include<stdio.h>
int main()
{int c;
int last='a';
while((c = getchar()) != EOF)
{if(c != ' ')
putchar(c);
else if(c==' ')
  if (last != ' ')
  putchar(c);
last = c;}
}*/
/*
//1-10 ��дһ�������븴�Ƶ�����ĳ��򣬲������е��Ʊ���滻Ϊ\t��
   //�ѻ��˷��滻Ϊ\b���ѷ�б���滻Ϊ
#include<stdio.h>
void main(){
	int c;
	while((c=getchar())!=EOF){
		if(c=='\t')
			printf("\\t");
		if(c=='\b')
			printf("\\b");
		if(c=='\\')
			printf("\\\\");
		if(c!='b'||c!='t'||c!='\\')
			putchar(c);}
}*/
/*
//1.5.4 c
#include<stdio.h>
#define IN 1
#define OUT 0
int main(){
	int c,nc,nt,nw;
	int start=OUT;
	nc=nt=nw=0;
	c=getchar();
	while(c!='Q'){
		++nc;
		if(c!='\n')
			++nt;
	   if(c==' '||c=='\t'||c=='\n')
			start=OUT;
		else if(start==OUT)
			start=IN;
		    ++nw;
	}
	printf("%d%d%d",nc,nt,nw);
	return 0;
}*/

//1-12 ��д������ÿ��һ�����ʵ���ʽ��ӡ�����
/*#include<stdio.h>
int main(){
	int c;
	while((c=getchar())!=EOF)
		//putchar(c);
	    printf("%c\n",c);
		return 0;
	}

#include<stdio.h>
#define IN 1
#define OUT 0
void main(){
	int c;
	int state=OUT;
	while((c=getchar())!=EOF){
		if(c==' '||c=='\n'||c=='\t'){
			if(state==IN)
				putchar('\n');
			state=OUT;}
     			else if(state==OUT){
				  state=IN;
				  putchar(c);}
		else putchar(c);
	}}*/

/*
//1.15 �ú���ʵ���¶�ת������
#include<stdio.h>

float temperature(float f){
	float c=(5.0/9.0)*(f-32.0);
	return c;}

int main(){
	for(float fahr=0;fahr<=300;fahr+=20){
		printf("%3.0f\t%6.1f\n",fahr,temperature(fahr));}
	getchar();
	return 0;
}*/
/*
//1.9 c
#include<stdio.h>
#define maxline 1000
int getline(char s[],int lim){
	int c,i;
	for(i=0;i<lim-1&&((c=getchar())!=EOF)&&c!='\n';i++){
		s[i]=c;}
	if(c=='\n'){
		s[i]=c;
		++i;}
	s[i]='\0';
	return i;}

void copy(char to[],char from[]){
	int i;
	i=0;
	while((to[i]=from[i])!='\0')
		++i;
}

int main(){
	int len;
	int max;
	char line[maxline];
	char longest[maxline];
	max=0;
	while((len=getline(line,maxline))>0){
		if(len>max){
			max=len;
			copy(longest,line);
		}
		if(max>0){
			printf("%s",longest);}}
	return 0;}
*/

/*
//1.16 �޸�1.9c�г���ʹ���ܴ�ӡ���ⳤ�ȵ������У��������ܶ�Ĵ�ӡ�ı�
#include<stdio.h>
#define maxline 1000
int getline(char s[],int lim){
	int c,i;
	for(i=0;i<lim-1&&((c=getchar())!=EOF)&&c!='\n';i++){
		s[i]=c;}
	if(c=='\n'){
		s[i]=c;
		++i;}
	s[i]='\0';
	return i;}

void copy(char to[],char from[]){
	int i;
	i=0;
	while((to[i]=from[i])!='\0')
		++i;
}

int main(){
	int len;
	char line[maxline];
	char pline[maxline];
	while((len=getline(line,maxline))>0){
			copy(pline,line);
			printf("%s",pline);}
return 0;}*/

/*
//1.6��
#include<stdio.h>
#define max 1000
int getline(char s[],int lim){
    int c,i,j;
	j=0;
	for(i=0;(c=getchar())!=EOF&&c!='\n';++i)
		if(i<lim-2){
			s[j]=c;
			++j;}
		if(c=='\n'){
			s[j]=c;
			++j;
		    ++i;}
		if(c=='\0')
			s[j]='\0';
		return i;}
void copy(char to[],char from[]){
	int i=0;
	while((from[i]=to[i])!='\0')
		++i;}

int main(){
	int len;
	int maxline;
	char line[max];
	char longest[max];
	maxline=0;
	while((len=getline(line,max))>0){
		printf("%d, %s",len,line);
		if(len>maxline){
			maxline=len;
			printf("%d\n",maxline);
			copy(line,longest);}}
		if(maxline>0)
			printf("%s",longest);
	return 0;}
*/
//1.17 ��дһ�������ӡ�����ȴ���80���ַ�������������
//ע����1.16��main������Ϊwhile((len=getline(line,maxline))>80)����

/*
//1.17 ��
#include<stdio.h>
#define max 1000
#define longest 80
int getline(char s[],int lim){
	int c,i,j;
	j=0;//ע��jҪ����ֵ
	for(i=0;(c=getchar())!=EOF&&c!='\n';i++){
		if(i<lim-2){
		s[j]=c;
		j++;}
    if(c=='\n'){
		s[j]=c;
		j++;
		i++;}
	if(c=='\0'){
		i++;}}
	return 0;}
	
int main(){
	int len;
	char line[max];
	while((len=getline(line,max))>0)
		if(len>longest){
			printf("%s",line);}
		return 0;
}*/
//1-18 ��дһ������ɾ��ÿ��������ĩβ�Ŀո�����Ʊ������ɾ����ȫ�ǿո����
/*#include<stdio.h>
#define max 1000
int c,i;
c=getchar();
char line[max];
for(i=0;i<=max-1&&c!=EOF;i++){
	line[i]=c;
*/
 

/*
//��1-18
#include<stdio.h>
#define MAXLINE 1000
int getline(char s[],int lim){
	int c,i,j;
	j=0;//ע��jҪ����ֵ
	for(i=0;(c=getchar())!=EOF&&c!='\n';i++){
		if(i<lim-2){
		s[j]=c;
		j++;}
    if(c=='\n'){
		s[j]=c;
		j++;
		i++;
}
	if(c=='\0'){
		i++;
		}
	}
	return 0;
}
int remove(char s[]){
	int i=0;
	while(s[i]!='\n')
		++i;
	--i;
	while(i>=0&&(s[i]==' '||s[i]=='\t'))
		--i;
	if(i>=0){
		++i;
		s[i]='\n';
		++i;
		s[i]='\0';
	}
	return i;
}

int main(){
	char line[MAXLINE];
	while(getline(line,MAXLINE)>0)
		if(remove(line)>0)
			printf("%s",line);
	getchar();
	return 0;
}*/


/*
//1-19 ��дһ�������к���reverse(s),���ַ���s�е��ַ�˳��ߵ�������ʹ�øú�����дһ������ÿ�εߵ�
     // һ���������е��ַ�˳��
#include<stdio.h>
#define MAXLINE 1000
int getline(char line[],int maxline){
	int c,i,j;
	j=0;
	for(i=0;((c=getchar())!=EOF)&&c!='\0';i++){
		if(i<maxline-2){
			line[i]=c;
			j++;
		}
	}
	if(c=='\n'){
		line[i]=c;
		j++;
		i++;}
	line[i]='\0';
	i++;
	printf("%d",i);
	return i;
}

void reverse(char s[]){
	char temp;
	int i,j;
	i=0;
	while(s[i]!='\0')
		++i;
	--i;
	if(s[i]=='\n'){
		--i;
		}
	j=0;
	while(j<i){
		temp=s[j];
		s[j]=s[i];
		s[i]=temp;
		--i;
		++j;
		}
}

int main(){
	char line[MAXLINE];
	while(getline(line,MAXLINE)>0){
		reverse(line);
		printf("%s",line);
		}
	return 0;
}*/



//1-20 ��д����detab���������е��Ʊ���滻���ʵ���Ŀ�Ŀո�ʹ�ո��������һ���Ʊ����ֹλ�ĵط���
    //�����Ʊ����ֹλ��λ���ǹ̶��ģ�����ÿ���n�оͻ����һ���Ʊ����ֹλ��
	 //nӦ����Ϊ�������Ƿ��ų����أ�
#include<stdio.h>
   
int detab(char s[]){
	while(c!='\0'){
		s[

	while(c=='\t'){












