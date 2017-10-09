//第二章 
/*
//习题2-1 编写程序确定signed和unsigned限定的char,short,int,long类型变量的取值范围。采用打印标准头文件中的相应值以及直接计算两种方式实现。
#include<stdio.h>
#include<limits.h>

void main(){
	printf("signed char min =%d\n",SCHAR_MIN);
	printf("signed char max =%d\n",SCHAR_MAX);
	printf("signed short min =%d\n",SHRT_MIN);
	printf("signed short max =%d\n",SHRT_MAX);
	printf("signed int min =%d\n",INT_MIN);
	printf("signed int max =%d\n",INT_MAX);
	printf("unsigned char max =%u\n",UCHAR_MAX);
	printf("unsigned short max =%u\n",USHRT_MAX);
	printf("unsigned int max =%u\n",UINT_MAX);
	printf("unsigned long max =%lu\n",ULONG_MAX);\
	getchar();
}
*/

/*
#include<stdio.h>
int main(){

	printf("signed char min=%d\n",-(char)((unsigned char)~0>>1));
	printf("signed char max=%d\n",(char)((unsigned char)~0>>1));
	getchar();
return 0;
}
*/
/*
#include<stdio.h>
#include<iostream>
#define max 1000
using namespace std;
int strlen(char s[]){
	int i;

	i=0;
	while(s[i]!='\0'){
		++i;
	}
	return i;
}

int main(){
	char line[max];
	int i=0;
		while(line[i]=getchar()!=EOF){
			++i;
		}
			printf("the string length of s is: %d\n",strlen(line));
			getchar();
	return 0;
}*/


		
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              

/*
//习题2-3                                                                                                                                                                                                                                                  
#define YES 1
#define NO 0

int htoi(char s[])
{
	int hexdigit,i,inhex,n;

	i=0;
	if(s[i]=='0'){
		++i;
		if(s[i]=='x'||s[i]=='X')
			++i;
	}
	n=0;
	inhex=YES;
	for( ;inhex==YES;++i){
		if(s[i]>='0'&&s[i]<='9')
			hexdigit=s[i]-'0';
		else if(s[i]>='a'&&s[i]<='f'){
			hexdigit=s[i]-'a'+10;
		}
		else if(s[i]>='A'&&s[i]<='F'){
			hexdigit=s[i]-'A'+10;
		}
		else
			inhex=NO;
		if(inhex==YES)
			n=16*n+hexdigit;
	}
	return n;
}*/

/*
#include<stdio.h>
#include<iostream>
using namespace std;
#define max 1000

int atoi(char s[]){
	int i,n;
    n=0;
	for(i=0;s[i]>='0'&&s[i]<='9';++i){
		n=10*n+s[i]-'0';}
		return n;
}

int main(){
	char line[max];
	int i=0;
	while(line[i]=getchar()!=EOF){
		++i;
	}
	printf("%d",atoi(line));
	getchar();
	return 0;
}*/

/*
//习题2-4 
#include<stdio.h>

void squeeze(char s1[],char s2[]){
	int i,j,k;

		for(i=k=0;s1[i]!='\0';i++){
			for(j=0;s2[j]!='\0'&&s2[j]!=s1[i];j++){
			;
			if(s2[j]=='\0')
				s1[k++]=s1[i];
			}
			s1[k]='\0';
		}


//习题2-5
int any(char s1[],char s2[]){
int i,j;

for(i=0;s1[i]!='\0';i++)
	for(j=0;s2[j]!='\0';j++)
		if(s1[i]==s2[j])
			return i;
return -1;
}

//习题2-6
unsigned setbits(unsigned x,int p,int n,unsigned y){
	return x&~(~(~0<<n)<<(p+1-n))|
		(y&~(~0<<n))<<(p+1-n);
}

//习题2-7 
unsigned invert(unsigned n,int p,int n){
	return ~(x&~(~0<<n)<<(p+1-n))&
		(x&~(~(~0<<n)<<(p+1-n)));
}

unsigned invert(unsigned n,int p,int n){
	return x^(~(~0<<n)<<(p+1-n));
}

//习题2-8 
 unsigned rightrot(unsigned x.int n){
	 int wordlength(void);
	 int rbit;
	 while(n-->0){
		 rbit=(x&1)<<(wordlength-1);
		 x<<1;
		 x=x|rbit;
	 }
	 return x;
 }
		
 unsigned rightrot(unsigned x,int n){
	 unsigned rbit;
	 int wordlength(void);
	 if((n=n%wordlength())>0){
		 rbit=~(~0<<n)&x;
		 rbit=rbit<<(wordlength()-n);
		 x=x>>n;
		 x=x|rbits;
	 }
	 return x;
 }

//习题2-9
int bitcount(unsigned x){
	int b;
	for(b=0;x!=0;x&=(x-1)){
		++b;
	}
	return b;
}

//习题2-10
int lower(int c){
	return (c>='A'&&c<='Z')?(c=c+'a'-'A'):c;
}



//习题3-1
int binsearch(int x,int v[],int n){
	int low=0;
	int mid=(high+low)/2;
	int high=n-1;

	while(low<=high&&x!=v[mid]){
		if(x<v[mid]){
			high=mid-1;
		else
			low=mid+1;
		    mid=(high+low)/2;
	      }
		if(x==v[mid])
			return mid;
		else
			return -1;
	}
}



//习题3-2
int escape(char s[],char t[]){
	int i=0;
	int j=0;

	while(s[i]!='\0'){
		++i;
	}
	while(t[j]!='\0'){
		s[i++]=t[j++];
		switch(t[j]){
		case '\n':s[i++]='\n';
		break;
		case '\t':s[i++]='\t';
		break;
		default:
			s[i++]=t[j++];
	   }
	}
		s[i]='\0';
		return s[i];
	}
  
   
void escape(char s[],char t[]){
	int i,j;

	for(i=j=0;t[i]!='\0';i++){
		switch(t[i]){
		case '\n':
			s[j++]='\\';
			s[j++]='n';
			break;
		case '\t':
			s[j++]='\\';
			s[j++]='t';
			break;
		default:
			s[j++]=t[i];
		}
		s[j]='\0';
	}
}


void unescape(char s[],char t[]){
	int i,j;

	for(i=j=0;t[i]!='\0';i++){
		if(t[i]!='\\'){
			s[j++]=t[i];
		}
		else
			switch(t[++i]){
			case 'n':
				s[j++]='\n';
				break;
			case 't':
				s[j++]='\t';
				break;
			default:
				s[j++]='\\';
				s[j++]=t[i];
				break;
		}
		s[j]='\0';
	}
}

void unescape(char s[],char t[]){
	int i,j;
	for(i=j=0;t[i]!='\0';i++){
		switch(t[i]){
		case  '\\':
			switch(t[++i]){
			case 'n':
				s[j++]='\n';
				break;
			case 't':
				s[j++]='\t';
				break;
			default:
				s[j++]='\\';
				s[j++]=t[i];
				break;
			}
		   break;
		default:
			s[j++]=t[i];
			break;
		}
		s[j]='\0';
	}
}



//习题3-3
void expand(char s1[],char s2[]){
	char c;
	int i,j;

	i=j=0;
	while((c=s1[i++])!='\0'){
		if(s1[i]=='-'&&s1[i+1]>=c){
			i++;
			while(c<s1[i]){
				s2[j++]=c++;
			}
		else
			s2[j++]=c;
		}
		s2[j]='\0';
	}
}
*/	

/*itoa 函数：将数字n转换为字符串并保存在s中*/
/*void itoa(int n,char s[]){
	int i,sign;

	if((sign=n)<0){
		n=-n;
	i=0;
	do{
		s[i++]=n%10+'\0';
	}
	while((n/=10)>0);
	if(sign<0)
		s[i++]='-';
	s[i]='\0';
	reverse(s);
	}


//习题3-4
#define abs(x) ((x<0)?(-x):(x))
	void itoa(int n,char s[]){
		int i,sign;
		void reverse(char s[]);

		sign=n;
		i=0;
		do{
			s[i++]=abs(n%10)+'0';
		}while((n/=10)！=0);
		if(sign<0)
			s[i++]='-';
		s[i]='\0';
		reverse(s);
	}

//练习3-5
	int itob(int n,char s[],int b){
		int i,j,sign;

		void reverse(char s[]);
		if((sign=n)<0)
			n=-n;
			i=0;
			do{
				j=n%b;
				s[i++]=(j<=9)?j+'0':j+'a'-10;
			}
			while((n/=b)>0);
			if(sign<0)
				s[i++]='-';
			s[i]='\0';
			reverse(s);
	}


//练习3-6
#define abs(x)  ((x<0)?(-x):(x))
	void itoa(int n,char s[],int wid){
		int i,sign;

		void reverse(char s[]);
		sign=n;
		i=0;

		do{
			s[i++]=abs(n%10)+'0';
		}while((n/=10)>0);
		if(sign<0){
			s[i++]='-';
		}
		if(i<wid){               //while(i<wid)  s[i++]='';
			for(int j=0;j<=wid-i;j++)
				s[i++]=' ';}
		else
			s[i]='\0';
		reverse(s);
	}
	*/


/*
//第四章
#include<stdio.h>
#define max 1000
char pattern[]="could";

int getline(char s[],int lim){
	int i;
	int c;
	
	i=0;
	while(--lim>0&&(c=getchar())!=EOF&&c!='\n'){
		s[i++]=c;
	}
	if(c=='\n')
		s[i++]=c;
		s[i]='\0';
		return i;
}

int strindex(char s[],char t[]){
	int i,j,k;

	for(i=0;s[i]!='\0';i++){
		for(j=i,k=0;t[k]!='\0'&&s[j]==t[k];j++,k++)
			;
		if(k>0&&t[k]=='\0')
			return i;
	}
	return -1;
}

int main(){
	char line[max];
	int found=0;

	while(getline(line,max)>0)
		if(strindex(line,pattern)>=0){
			printf("%s",line);
			found++;
		}
		return found;
}*/

/*
//练习4-1
#include<string.h>
int strrindex(char s[],char t[]){
	int i,j,k;
    
	for(i=strlen(s)-strlen(t);i>=0;i--){
		for(j=i,k=0;t[k]!='\0'&&s[j]==t[k];j++,k++){
;
		}
		if(k>0&&t[k]=='\0')
			return i;
	}
	return -1;
}


int strrindex(char s[],char t[]){
	int i,j,k,pos;
	pos=-1;

	for(i=0;s[i]!='\0';i++){
		for(j=i,k=0;t[k]!='\0'&&t[k]==s[j];j++,k++){
			;
		}
		if(k>0&&t[k]=='\0')
		 pos=i;
	}
	return pos;
}*/

/*
//返回非整型值的函数
#include<stdio.h>
#define MAXLINE 100

#include<ctype.h>

double atof(char s[]){

	double val,power;
	int i,sign;

	for(i=0;isspace(s[i]);i++){
		;
	}
	sign=(s[i]=='-')?-1:1;
	if(s[i]=='+'||s[i]=='-'){
		i++;
	}
	for(val=0.0;isdigit(s[i]);i++){
		val=10.0*val+s[i]-'0';
	}
	if(s[i]='.')
		i++;
	for(power=1.0;isdigit(s[i]);i++){
		val=10.0*val+s[i]-'0';
		power*=10;
	}
	return sign*val/power;
}

int getline(char s[],int lim){
	int c,i;
	i=0;
	while(--lim>0&&(c=getchar())!=EOF&&c!='\n')
		s[i++]=c;
	if(c=='\n')
		s[i++]=c;
	s[i]='\0';
	return i;
}
	

int main(){
	double sum,atof(char []);
	char line[MAXLINE];
	int getline(char line[],int max);

	sum=0;
	while(getline(line,MAXLINE)>0)
		printf("\t%g\n",sum+=atof(line));
	return 0;
}
*/


//练习4-2
/*
#include<ctype.h>
#include<string.h>
 
double atoy(char s[]){
	double power,val,timesquare;
	int i,sign;

	for(int j=0;j<=s[strlen(s)]-'0';j++){
	       timesquare=1.0;
		  timesquare*=10; 
	}
	for(i=0;isspace(s[i]);i++)
		;
	sign=(s[i]=='-')?-1:1;
	if(s[i++]=='+'||s[i++]=='-')
		i++;
	for(val=0.0;isdigit(s[i]);i++){
		val=10*val+s[i]-'0';
	}
	if(s[i++]='.'){
		i++;
	} 
	
	for(power=1.0;isdigit(s[i]);i++){
		if(s[i]!='e'&&s[i]!='E'){
		val=val*10+s[i]-'0';
		power*=10;
	val=sign*val/power;}
       else 
		   if(s[i++]=='-'){
		   return val/timesquare;
	   }
	   else 
		   if(s[i++]=='+'){
		   return val*timesquare;
	   }
   }
}
*/

//答案
/*
#include<ctype.h>

double atof(char s[]){
	int i,sign,exp;
	double val,power;

	for(i=0;isspace(s[i]);i++)
	   ;
	sign=(s[i]=='-'?-1:1);
    if(s[i]=='-'||s[i]=='+'){
		i++;
	}
	for(val=0.0;isdigit(s[i]);i++){
	   val=val*10+s[i]-'0';
	}
	if(s[i]=='.'){
		i++;
	}
	for(power=1.0;isdigit(s[i]);i++){
		val=val*10.0+s[i]-'0';
		power*=10.0;
	}
	val=sign*val/power;

	if(s[i]=='e'||s[i]=='E'){
		sign=(s[++i]=='-'?-1:1);
	}
	if(s[i]=='+'||s[i]=='-'){
		i++;
	}
	for(exp=0;isdigit(s[i]);i++){
		exp=10*exp+s[i]-'0';
	}
	if(sign==-1){
		while(exp--){
			val=val/10;
		}
	}
	else{
		while(exp--){
			val=val*10;
		}
	}
	return val;
}*/

/*
//练习4-3
#include<stdio.h>
#include<math.h>

#define MAXOP 100
#define NUMBER 0

int getop(char []);
void push(double);
double pop(void);

int main(){
	int type;
	double op2;
	char s[MAXOP];

	while((type=getop(s)!=EOF){
		switch(type){
		    case NUMBER:
			 	push(atof(s));
				break;
			case '+':
				push(pop()+pop());
				break;
			case '-':
				op2=pop();
				push(pop()-op2);
				break;
			case '*':
				push(pop()*pop());
				break;
			case '/':
				op2=pop();
				if(op2!=0.0)
					push(pop()/op2);
				else
					printf("error:zero divisor\n");
				break;
			case '%':
				op2=pop();
				if(op2!=0.0)
					push(fmod(pop(),op2));
				else
					printf("error: zero divisor\n");
				break;
			case '\n':
				printf("\t%.8g\n",pop());
				break;
			default:
				printf("error:unknown command %s\n",s);
				break;
		}
	}

	return 0;
}*/


/*
//习题4-12
#include<stdio.h>
#include<math.h>
void itoa(int n,char s[]){
	static int i;
	if(n/10)
	   itoa(n/10,s);
	else{
		i=0;
		if(n<0)
			s[i++]='-';
	}
	s[i++]=abs(n)%10+'0';
	s[i]='\0';
}
*/



//第五章
/*
#include<stdio.h>

void swap(int x,int y){
	int temp;

	temp=x;
	x=y;
	y=temp;
}

int main(){
	int a=5,b=10;

	swap(&a,&b);
	printf("%d  %d",a,b);
	getchar();
	return 0;
}
*/

/*
//练习5-3
int strcat(int *s,int *t){
	int i=0,j=0;
	while(s[i]!='0'){
		i++;
	}
	while(t[j]!='0')
	s[i++]=t[j++];
	return s[i];
}

void strcat(char *s,char *t){
	while(*s){
		s++;
	}
	while(*s++=*t++){
		;
	}
}*/




//第6章   结构
/*
struct point{
	int x;
	int y;
};

struct point pt;

struct rect{
	struct point pt1;
	struct point pt2;
};

struct rect screen;
screen.pt1.x;

struct point makepoint(int x,int y){
	struct point temp;

	temp.x=x;
	temp.y=y;
	return temp;
}
 
struct rect  screen;
struct point middle;
struct point makepoint(int,int);

screen.pt1=makepoint(0,0);
screen.pt2=makepoint(XMAX,YMAX);
middle=makepoint((screen.pt1.x+screen.pt2.x)/2,(screen.pt1.y+screen.pt2.y));

struct  point addpoint(struct point p1,struct point p2){
	p1.x+=p2.x;
	p1.y+=p2.y;
	return p1;
}

int ptinrect(struct point p,struct rect r){
	return p.x>=r.pt1.x&&p.x<r.pt2.x&&p.y>=r.pt1.y&&p.y<r.pt2.y;
}


#define min(a,b)  ((a)<(b)?(a):(b))
#define max(a,b)  ((a)>(b)?(a):(b))

struct rect canonrect(struct rect r){
	struct rect temp;

	temp.pt1.x=min(r.pt1.x,r.pt2.x);
	temp.pt1.y=min(r.pt1.y,r.pt2.y);
	temp.pt2.x=max(r.pt2.x,r.pt2.x);
	temp.pt2.y=max(r.pt1.y,r.pt2.y);
}

struct point origin,*pp;

pp=&origin;
printf("origin is (%d,%d)\n",(*pp.x),(*pp.y));

printf("origin is (%d%d)\n",pp->x,pp->y);


struct key{
	char *word;
	int count;
}keytab[NKEYS];
*/

/*
#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAXWORD 100

int getword(char *,int);
int binsearch(char *,struct key *,int);

int main(){
	int n;
	char word[MAXWORD];

	while(getword(word,MAXWORD)!=EOF)
		if(isalpha(word[0]))
			if((n=binsearch(word,keytab,NKEYS))>=0)
				keytab[n].count++;
	for(n=0;n<NKEYS;n++)
		if(kaytab[n].count>0)
			printf("%4d %s\n",keytab[n].


//第八章
/*
#include<stdio.h>
#include<fcntl.h>
#include "syscalls.h"
void error(char *fmt,...);

int main(int argc,int *argv[]){
	int fd;
	void filecopy(int ifd,int ofd);

	if(argc==1)
		filecopy(0,1);
	else 
		while(--argc>0)
			if((fd=open(*++argv,O_RDONLY))==-1)
				error("cat:can't open %s",*argv);
			else{
				filecopy(fd,1);
				close(fd);
			}
	return 0;
}

void filecopy(int ifd,int ofd){
	int n;
	char buf[BUFSIZE];
	while((n=read(ifd,buf,BUFSIZE))>0)
		if(write(ofd,buf,n)!=n)
			error("cat:write error");
}
*/









