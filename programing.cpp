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
	printf("%d\t%d\n",1,-17);//注意常见转义字符的使用
	for(int i=1;i<=15;i++){
		Fahrenheit=20*i;
		Celsius=5*(Fahrenheit-32)/9; //也可以写为Celsius=(5/9.0)*(Fahrenheit-32);
		printf("%d\t%d\n",Fahrenheit,Celsius);}
	getchar();
	return 0;
}*/
/*
//1.3 修改温度转换程序，在转换表顶部打印一个标题
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
//1.4 ex 编程打印摄氏温度转换为相应华氏温度的转换表
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
//1.5 修改温度转换程序，要求逆序打印温度转换表
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
#define UPPER 300//注意指令行末尾没有逗号
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


//1.6 验证表达式getchar()!=EOF的值是0还是1
/*#include<stdio.h>
void main(){
	if(getchar()!=EOF){
		printf("表达式值为1");}
	else
		{printf("表达式值为0");
	}
	getchar();}*/

//1.7 编写一个打印EOF值的程序
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
//1.8 编写一个统计空格，制表符与换行符个数的程序   ???
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
//1.9 编写一个将输入复制到输出的程序 并将其中连续的多个空格用一个空格代替
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
//1-10 编写一个将输入复制到输出的程序，并将其中的制表符替换为\t，
   //把回退符替换为\b，把反斜杠替换为
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

//1-12 编写程序以每行一个单词的形式打印其输出
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
//1.15 用函数实现温度转换程序
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
//1.16 修改1.9c中程序，使得能打印任意长度的输入行，并尽可能多的打印文本
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
//1.6答案
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
//1.17 编写一个程序打印出长度大于80个字符的所有输入行
//注：将1.16中main函数改为while((len=getline(line,maxline))>80)即可

/*
//1.17 答案
#include<stdio.h>
#define max 1000
#define longest 80
int getline(char s[],int lim){
	int c,i,j;
	j=0;//注意j要赋初值
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
//1-18 编写一个程序，删除每个输入行末尾的空格符和制表符，并删除完全是空格的行
/*#include<stdio.h>
#define max 1000
int c,i;
c=getchar();
char line[max];
for(i=0;i<=max-1&&c!=EOF;i++){
	line[i]=c;
*/
 

/*
//答案1-18
#include<stdio.h>
#define MAXLINE 1000
int getline(char s[],int lim){
	int c,i,j;
	j=0;//注意j要赋初值
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
//1-19 编写一个输入行函数reverse(s),将字符串s中的字符顺序颠倒过来。使用该函数编写一个程序，每次颠倒
     // 一个输入行中的字符顺序
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



//1-20 编写程序detab，将输入中的制表符替换成适当数目的空格，使空格充满到下一个制表符终止位的地方。
    //假设制表符终止位的位置是固定的，比如每间隔n列就会出现一个制表符终止位。
	 //n应该作为变量还是符号常量呢？
#include<stdio.h>
   
int detab(char s[]){
	while(c!='\0'){
		s[

	while(c=='\t'){












