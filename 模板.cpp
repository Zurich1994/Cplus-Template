//1.�����
/*#include<stdio.h>
int main()
{
    int n,i,sum,h;
    while(scanf("%d",&n),n)
    {
        sum=0;
        while(n--)
        {
            scanf("%d",&h);
            sum+=h;
        }
        printf("%d\n",sum);
    }
    return 0;
}*/
//2.������
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,m,n,t,a[1002],len;
   char s1[1001],s2[1001];
   while(scanf("%s%s",s1,s2)!=EOF)
   {
     len=(strlen(s1)>=strlen(s2)?strlen(s1):strlen(s2));
     for(i=0;i<len+1;i++)
       a[i]=0;
    m=0;
    for(i=strlen(s1)-1,j=strlen(s2)-1;i>=0&&j>=0;i--,j--)
    {
      k=s1[i]+s2[j]-2*'0';
      if(k>=10)
       {a[m++]+=k%10;a[m]++;}
     else
     {
       a[m++]+=k;
       if(a[m-1]>=10)
        {a[m]++; a[m-1]%=10; }
     }
    }
   if(i>=0)
   {
     for(j=i;j>=0;j--)
     {
       k=s1[j]-'0';
       if(k>=10)
        {a[m++]+=k%10; a[m]++;}
      else
       {
         a[m++]+=k;
         if(a[m-1]>=10)
          {a[m]++;a[m-1]%=10;}
       }
     }
   }
   else if(j>=0)
    {
       for(i=j;i>=0;i--)
       {
         k=s2[i]-'0';
         if(k>=10)
          {a[m++]+=k%10;a[m]++;}
        else
          {
            a[m++]+=k;
            if(a[m-1]>=10)
             {a[m]++;a[m-1]%=10;}
          }
        }
     }
   if(a[m]>0)
    m++;
   for(i=m-1;i>=0;i--)
   printf("%d",a[i]);
    printf("\n");
   }
   return 0;
}
*/
//3.ŷ��������������С��n�������ж��ٸ�
/*
#include<stdio.h>
int su(int n)
{ int rea=n;
  for(int i=2;i<=n;i++)
    if(n%i==0)
     {rea-=rea/i;
       do{n/=i;}while(n%i==0);
      }
return rea;
}
int main()
{int a;
 while((scanf("%d",&a))&&(a!=0))
 printf("%d\n",su(a));
}
*/
//4.��������������
/*
#include<stdio.h>
#define X 1000010
bool s[X];
int su[X];
void fun()
{
    int i,j,n=0;
    for(i=4;i<X;i+=2)
    s[i]=1;
    for(i=3;i*i<X;i+=2)
       if(!s[i])
            for(j=2*i;j<X;j+=i)
              s[j]=1;
    for(i=2;i<X;i++)
     {
         if(!s[i])n++;
          su[i]=n;
     }

}
int main()
{
    int  a,b,num;
    fun();
    while(~scanf("%d%d",&a,&b))
    {
        num=su[b]-su[a];
        if(!s[a])
         num++;
        printf("%d\n",num);
    }
    return 0;
}
*/
//6.�����������������Ȼ������������飬��������Ҫ��ѯ���ĸ���������������ѯ���飬����������ĸ���
/*
#include<stdio.h>
int count[1000001];//���ݴ�С���ó���10e6
int main()
{
    int num[100009],check[100009];
    int i;
    int n1,n2;
    while(scanf("%d",&n1),n1)//�������Ϊ��ʱ����
    {
       for(i=0;i<n1;i++)
       {scanf("%d",&num[i]);count[num[i]]++;}
        scanf("%d",&n2);
        for(i=0;i<n2;i++)
         scanf("%d",&check[i]);
        for(i=0;i<n2;i++)
         printf("%d\n",count[check[i]]);
        printf("\n");
        for(i=0;i<1000001;i++)
          count[i]=0;
     }
     return 0;
}
*/
//7.�ж�����
/*/
#include<stdio.h>
int main()
{
    int a;
    printf("���������:\n");
   while(scanf("%d",&a),a)
    {
        if(a>1000&&a<10000)
        {
           if((a%4==0)&&(a%100!=0)||(a%400==0))
             printf("YES");
          else
            printf("NO");
        }
     }
return 0;
}
*/
//8.�Ż��ж�����
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    int num;
    double m;
    while(~scanf("%d",&num))
    {
        m=sqrt(num);
        for(i=2;i<m&&num%i!=0;)
          i++;
           if(i>m)
            printf("Yes\n");
           else
           printf("No\n");
    }
    return 0;
}
*/
//9.������תʮ����
/*
#include<stdio.h>//����
#include<math.h>
#include<string.h>
int main ()
{
    char a[31];int i,n,b;
    while( scanf("%s",a)!=EOF )
    {
       n=strlen(a);
       b=0;
       for(i=0;i<n;i++)
          b+=(a[i]-'0')*pow(2,n-i-1);//���涨����
       printf("%d\n",b);
    }
    return 0;
}
*/
/*
#include<stdio.h>//���۳���
#include<string.h>
int main()
{
  int i,m=0;
  char b[32];
  while(~scanf("%s",b))
   {
      for(i=0;i<strlen(b);i++)
      m=m*2+(b[i]-'0');
      printf("%d",m);
   }
  return 0;
}
*/
//10.ʮ����ת������
/*
#include <stdio.h>
#include<string.h>
int main()
{
   const int iTimes=sizeof(int) * 16;
   int iMask=1;
   long long int x ; //�������Ҫת������
   int x2[iTimes];
   int i;
   while(scanf("%d",&x),x)
   {
       for( i=0 ; i<iTimes ; i++ )
    {
      x2[i]=x & iMask;
      iMask = iMask << 1;
      // printf("%d",iMask);
    }
     printf("\n(%d)ת��Ϊ�������ǣ� ",x);
    for( i=iTimes -1 ; i >=0 ; i-- )
    {
        if((i+1)%4==0)
        printf(" ");
        if((i+1)%32==0&&(i+1))
        printf("\n");
        printf("%d",x2[i] ? 1 : 0 );
    }
     printf("\n\n");
     iMask=1;
     memset(x2,0,sizeof(int)*iTimes);
   }

   return 0;
}
*/
//11.���Լ��
/*
#include<stdio.h>//��˹��ȥ��
int main()
{
    int a,b,t,min,max;
    while(~scanf("%d%d",&b,&a))
    {
        if(b==0&&a==0)break;
    while(a!=b)
        (a>b?a:b)=(a>b?(a-b):(b-a));
	 printf("%d\n",b);
    }
    return 0;
}
*/
/*
#include<stdio.h>//շת���
int main()
{
    int a,b,t;
    while(scanf("%d%d",&b,&a)!=EOF)
    {
       if(b==0&&a==0)break;
       while(a%b)
       {
         t=a%b;
         a=b;
         b=t;
       }
       printf("%d\n",b);
    }
}
*/
//12.��������
/*
#include<iostream>
#include<algorithm>
#include<string.h>
#include<cstdio>
using namespace std;
int cmp1(int x,int y)
{
    return y>x;
}
int cmp2(int x,int y)
{
    return x>y;
}
int main()
{
  int a,b,c[100000],i,j,flag;
  printf("����������:  ");
  while(scanf("%d",&b),b)
  {

      printf("\n��һ�֣�����\n\n");
      for(j=0;j<b;j++)
      {
          printf("��%d�飺\n",j+1);
         printf("\n1.����\n2.����\n��ѡ��");
         scanf("%d",&flag);
         printf("������Ҫ����Ԫ�ظ����� ");
         scanf("%d",&a);
         printf("���������һ���������� ");
         for(i=0;i<a;i++)
          scanf("%d",&c[i]);
          if(flag==1)sort(c,c+a,cmp1),printf("   �������еĽ���ǣ�  ");
          if(flag==2)sort(c,c+a,cmp2),printf("   ������������ǣ�  ");
        for(i=0;i<a;i++)
        printf("%d ",c[i]);
        printf("\n");
        memset(c,0,sizeof(int)*a);
        printf("\n\n");
    }
    system("pause");
    system("cls");
    printf("������������ ");
  }
   return 0;
 }
 */

 //qsortԴ����
 /*#include<iostream>
using namespace std;
int Q1(int *a,int low,int high)

{
	int m=a[low];
     while (low<high)
	 {
		 while (low<high&&a[high]>=m)
			     --high;
          a[low] =a[high];
		  while (low<high&&a[low]<=m)
			     ++low;
          a[high] =a[low];
	 }
	 a[low]=m;
	 return low;
}
void Q2(int *a,int low,int high)
{
	int p;
	if(low<high)
	{
		p=Q1(a,low,high);    //����һ������Ľ����Ϊ����
        Q2(a,low,p-1); //�ݹ�������� ��low ��prvotloc-1
        Q2(a,p+1,high); //�ݹ�������� �� prvotloc+1�� high
	}
}
void quicksort(int *a,int size)
{
	Q2(a,0,size); //��һ����Ϊ���� ���ӵ�һ���ŵ���n��
}
int main()
{
    int a[]={3,1,5,6,4,2,8,9,11,89,78,23,54,21};
    int k=sizeof(a)/sizeof(a[0])-1;
    quicksort(a,k);
    for(int i=0;i<=k;i++)
     cout<<a[i]<<" ";
    cout<<endl;
}

*/


 //13.�������⣺��֪��һ������{Ai}�����ж�������������һ��Ϊ���������������������һ���Ӵ���ʹ������Ӵ�������ֵ��ӵĺ�����Ӵ�������Ϊ�ա�
/*
#include<cstdio>
int main()
{
        int n,a,sum,i,max;
        printf("�����������鳤�ȣ� ");
        while(scanf("%d",&n),0)
         {
                printf("\n");
                scanf("%d",&a);
                printf("�����������飺");
                max=a;//����һ����������ŵЧӦ
                a<0?sum=0:sum=a;
                for(i=1;i<n;i++)
                {
                        scanf("%d",&a);
                        sum+=a;
                        if(sum>max)
                                max=sum;//����SUM
                        if(sum<0)
                                sum=0;//�Ż������ж�
                }
                printf("%d\n",max);
        }
        return 0;
}
*/
//14.������תʮ��
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
char a[1000];
int b[300];
int main()
{
  int n;
  int k,i,j,lenth,start;
  scanf("%d",&n);
  while(n--)
  {
    scanf("%s",a);
    start=strlen(a);
    for(j=lenth-1,start=0,i=0;j>=0;j--,start++)
     {
         b[i]+=(a[j]-'0')*(int)(pow(2.0,start));
         if(start==3&&j!=0)
         {
           start=-1;i++;
         }
     }//��λһ��ʾ
    for(j=i;j>=0;j--)
         if(b[j]>=0&&b[j]<=9)
          printf("%d",b[j]);
         else
          printf("%c",b[j]+55);
        printf("\n");
        for(k=0;k<300;k++)b[k]=0;
  }
return 0;
}
*/
//15.�������ӣ��߼����ٷ���
/*
#include<stdio.h>
int q[100001];
void su()
{
    int i,j;
    for(i=2;i<100000;i++)
      if(!q[i])
       for(j=i;j<100000;j+=i)
         q[j]++;
}
int main()
{
    int n;
    su();
    while(~scanf("%d",&n))
    printf("%d\n",q[n]);
    return 0;
}
*/
//16.����������ݹ飩
/*
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void rever(int n,string s)
{
    cout<<s[n];
    if(n==0)
    {
        cout<<endl;
        return ;
    }
    rever(n-1,s);
}
int main()
{
    string s;
    int m;
    getline(cin,s);
    m=s.size();
    rever(m-1,s);
}

//17.ɾ��һ��������������
/*
#include <stdio.h>
#include<string.h>
#define N 100000
void delmum(char s[],int n)
{
int i,j;
for(i=0,j=0;i<n;i++)
 if(s[i]<'0'||s[i]>'9')
 { s[j]=s[i];j++;}
s[j]='\0';
}
int main()
{
  int i,lenth;
  char s[N];
  while(~scanf("%s",s))
  {
    lenth=strlen(s);
    delmum(s,lenth);
    puts(s);
  }
  return 0;
}
*/
//18.�ж�һ�������ǵڼ���
/*
#include<stdio.h>
int main()
{
  int y,m,d,sum,flag;
  int a[13]={0,31,59,90,120,151,181,212,243,273,304,334};
  while(~scanf("%d %d %d",&y,&m,&d))
  {
       sum=a[m]+d;
       if((y%4==0&&y%100!=0)||y%400==0)
          flag=1;//�ж�����
         else flag=0;
       if(flag=1&&m>2)
           sum++;
       printf("����%d��ĵ�%d��\n",y,sum);
  }
return 0;
}
*/

//19.�ж��ǲ����ִ��������Ǽ�ϵ��ִ���
/*
#include<stdio.h>
#include<string.h>
int fun1(char *str1,char *str2,int n);
int fun2(char *str1,char *str2,int n);
int main()
{
    int p,n;
    char a[100],b[100];
    while(~scanf("%s%s",a,b))
     {
         n=strlen(a);
         p=fun1(a,b,n);
        // p=fun2(a,b,n);
         if(p==1)
           printf("yes\n");
         else
           printf("no\n");
     }
}
int fun1(char *str1,char *str2,int n)
{
    int flag=1,i,k;
    while(*str2!='\0')
     {
	   for(i=0;i<n;i++)
	    {
	        if(str1[i]==*str2)
            {
                k=i;
	            for(i=k;i<n;i++)
                 str1[i]=str1[i+1];
	            n=n-1;
	           continue;
            }
	        k=n+1;//���
        }
       if(k==(n+1))
	    flag=0;
       str2++;
    }
 return flag;
}
int fun2(char *str1,char *str2,int n)//Ҳ��������
    {
      int flag=1,i;
      while(*str2!='\0')
      {
	      for(i=0;i<n;i++)
	      {
	         if(str1[i]==*str2)
             str1[i]=7;//��Ϊ������ʾ���ַ�
             str2++;
          }
         return flag;
     }
   }
*/

//20.   ָ�����������ϵĽ���
/*
#include<stdio.h>
int main()
{
    int a[10],b[10],c[20];
    int *p,*q,i,j,k;
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    for(i=0;i<10;i++)
       scanf("%d",&b[i]);
    p=a;q=b;k=0;
    for(i=0;i<10;i++)
     for(j=0;j<10;j++)
	  if(p[i]==q[j])
		 c[k++]=p[i];
   for(i=0;i<k;i++)
   printf("%d ",c[i]);
}
*/
//21.������������֮�������
/*
#include<stdio.h>
struct  date
{
    unsigned int y;
    unsigned int m;
    unsigned int d;
}before,after;
int fun(unsigned int,unsigned int,unsigned int);
int main()
{
  int p,q,t,c=0,d=0,s,i;
  scanf("%d%d%d",&before.y,&before.m,&before.d);
  printf("\n");
  scanf("%d%d%d",&after.y,&after.m,&after.d);
  p=fun(before.y,before.m,before.d);
  q=fun(after.y,after.m,after.d);
  if(before.y<after.y)
  {
      if((before.y%4==0&&before.y%100!=0)||before.y%400==0)
          t=366-p;
       else
            t=365-p;
     for(i=before.y+1;i<after.y;i++)
     if((i%4==0&&i%100!=0)||i%400==0)
          c++;
       else
            d++;
         s=t+q+366*c+365*d;
   }
  else
   {
       if((after.y%4==0&&after.y%100!=0)||after.y%400==0)
           t=366-p;
        else
             t=365-p;
      for(i=after.y+1;i<before.y;i++)
           if((i%4==0&&i%100!=0)||i%400==0)
              c++;
            else
                 d++;
      s=t+q+366*c+365*d;
    }
   printf("%d\n",s);
   return 0;
}
int fun(unsigned int y, unsigned int m, unsigned int d)
{
    int s,flag;
    int data[13]={0,31,59,90,120,151,181,212,243,273,304,334};
    s=data[m]+d;
    if((y%4==0&&y%100!=0)||y%400==0)
      flag=1;
     else
        flag=0;
    if(flag=1&&m>2)
        s++;
   return s;
}
*/
//22....













































