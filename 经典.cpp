//1.铺地砖
/*
#include<stdio.h>
int main()
{
 long long  n,m,a,b1,b2;
 long long num;
 while(~scanf("%lld%lld%lld",&n,&m,&a))
 {
    b1=0;
    b2=0;
    if(n%a)
     b1=1;
    if(m%a)
     b2=1;
     num=(n/a+b1)*(m/a+b2);
     printf("%lld\n",(n/a+b1)*(m/a+b2));

 }
 return 0;
}
*/


//2.给定n个数，再给m个数，问这m个数分别出现多少次。
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int qq[1000001];
int main()
{int n,k,i,j;
 while(scanf("%d",&n)!=EOF)
        {for(i=0;i<1000001;i++)
          qq[i]=0;
                for(i=0;i<n;i++)
                {
                        scanf("%d",&k);
                        qq[k]+=1;
                }
                scanf("%d",&k);
                for(j=0;j<k;j++)
                {
                        scanf("%d",&i);
                        printf("%d\n",qq[i]);
                }
                puts("");
        }
        return 0;
}
*/



//3.有A, B, C三种数，每种数有多个不同的值，再给你一个X.。问，在A,B,C,的序列里能否分别找到一个数，使得A+B+C = X.
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int a[505],b[505],c[505];
int ab[2000010];
int num;
int cmp(const void *a,const void *b)
{
    return *(int *)a-*(int *)b;
}
int search(int te)
{
    int l=0,r=num,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ab[mid]==te)return 1;
        else if(ab[mid]>te) r=mid-1;
        else l=mid+1;
    }
    return 0;
}
int main()
{
    int l,m,n,i,j,k,t,index=1,flag,ta,te;
    while(~scanf("%d%d%d",&l,&m,&n))
    {
        for(i=0;i<l;i++)scanf("%d",&a[i]);
        for(i=0;i<m;i++)scanf("%d",&b[i]);
        for(i=0;i<n;i++)scanf("%d",&c[i]);
        for(k=i=0;i<l;i++)
        {
            for(j=0;j<m;j++)
            {
              ab[k++]=a[i]+b[j];
            }
        }
        num=k;
        qsort(ab,k,sizeof(ab[0]),cmp);
        qsort(c,n,sizeof(int),cmp);
        scanf("%d",&t);
        printf("Case %d:\n",index++);
        while(t--)
        {
            flag=0;
            scanf("%d",&ta);
            for(i=0;i<n;i++)
            {
                te=ta-c[i];

                if(search(te))
                {
                    flag=1;
                    puts("YES");
                    break;
                }
            }
            if(flag==0)puts("NO");
        }
    }

    return 0;
}
*/


//4.（快排）求数组中间大的数
/*
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{int a,b,c[100000],i,j;
  while(scanf("%d",&b)!=EOF)
  {
    for(j=0;j<b;j++)
    {
      scanf("%d",&a);
      for(i=0;i<a;i++)
       scanf("%d",&c[i]);
      sort(c,c+a);
      printf("%d\n",c[(a-1)/2]);
    }
  }
  return 0;
}
*/



//5.大于平均值的百分数
/*
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    int c,n,i,j,a[1001],sum,num;
    double l,ave;
    while(~scanf("%d",&c))
    {
      for(i=0;i<c;i++)
        {
             sum=0;num=0;
             scanf("%d",&n);
             for(j=0;j<n;j++)
             {
                 scanf("%d",&a[j]);
                 sum+=a[j];
             }
             ave=(double)sum/n;
            for(j=0;j<n;j++)
               if(a[j]>ave)
                 num++;
            l=(double)num/n*100;
            printf("%.3f%%\n",l);
        }
    }
    return 0;
}
*/


//6.猜数游戏
/*
#include<stdio.h>
#include<string.h>
struct  w
{char a[15];
 int z;
}w;
int main()
{
 int i,max=11,min=0;
 char d;
 while(1)
  {
      scanf("%d",&w.z);
      getchar();
       if(w.z==0)
         break;
       gets(w.a);
       if(strcmp("too high",w.a)==0)
        {
            max=max>w.z?w.z:max;
        }
       else
        if(strcmp("too low",w.a)==0)
         {
             min=min<w.z?w.z:min;
         }
        else
         if(strcmp("right on",w.a)==0&&w.z<max&& w.z>min)
           {
               printf("Stan may be honest\n") ;max=11;min=0;
           }
          else
           {
               printf("Stan is dishonest\n") ;max=11;min=0;
           }
  }
}
*/


//7.ABBCCC   A2B3C
/*
#include<stdio.h>
#include<string.h>
char str[1009];
int main()
{
 int n,i,len,k;
 char c;
 scanf("%d",&n);
 while(n--)
 {

  scanf("%s",str);
  i=0;
  len=strlen(str);
  while(i<len)
  {
   c=str[i];
   k=i;
   while(str[i]==c&&i<len)
    i++;
   if(i-k>1)
    printf("%d%c",i-k,c);
   else
    printf("%c",c);
  }
  printf("\n");
   }
}
*/


//8已知每个矩形的左下角顶点坐标和右上角顶点坐标，计算这 n 个矩形覆盖的平面面积。
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
# define M 101
int main()
{
    int n,x1,x2,y1,y2,i,j,sum;
    int desk[M][M];
    while(~scanf("%d",&n))
    {
        memset(desk,0,sizeof(desk));
        while(n--)
        {
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            for(i=x1;i<x2;i++)
             for(j=y1;j<y2;j++)
                 desk[i][j]=1;
        }
        sum=0;
        for(i=0;i<101;i++)
         for(j=0;j<101;j++)
            {
                if(desk[i][j]==1)
                sum++;
            }
        printf("%d\n",sum);

}
    return 0;
}
*/


//9.将这 n 个正整数连成一排，组成一个的新的多位数，求最大。
/*
#include <stdio.h>
#include <string.h>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
bool cmp(string x,string y);
string a[1030];
int main()
{   int i,j,n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<=0||n>1000) break;
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n,cmp);
         for(i=0; i<n; i++)
            cout<<a[i];
        printf("\n");
    }
    return 0;
}
bool cmp(string x,string y)
{
    return (x+y)>(y+x);
}
*/


//10.彩票
/*
#include<stdio.h>
int n[8]={0};
int main()
{
    int t,z[8],i,m[8],j,k,num;
    while(~scanf("%d",&t))
    {
        for(j=0;j<7;j++)
          scanf("%d",&z[j]);
        for(i=0;i<t;i++)
        {
            num=0;
            for(j=0;j<7;j++)
            {
                scanf("%d",&m[j]);
                for(k=0;k<7;k++)
                  if(m[j]==z[k])
                    ++num;
              }
              n[7-num]++;
        }
        for(i=0;i<7;i++)
          {
              printf("%d",n[i]);
              if(i!=6)
               printf(" ");
              if(i==6)
              printf("\n");
          }
        for(i=0;i<7;i++)
          n[i]=0;
     }
    return 0;
}
*/



//11.MU
/*
#include<cstdio>
#include<cstring>
using namespace std;
char word[10000005];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%s",word);
        int m=strlen(word),flag=0,sum=0;
        for(int i=0; i<m; i++)
            if(word[i]=='U')sum+=3;
            else if(word[i]=='M')flag++;
            else if(word[i]=='I')sum++;
        if(word[0]=='M'&&flag==1&&(sum%2==0&&sum%3!=0||sum==1))printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/



//12.flood
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int map[1001][1001];
int n,m;
int so(int x,int y)
{
    map[x][y]=1;
    if(x>1&&map[x-1][y]==0)so(x-1,y);
    if(x<n&&map[x+1][y]==0)so(x+1,y);
    if(y<m&&map[x][y+1]==0)so(x,y+1);
    if(y>1&&map[x][y-1]==0)so(x,y-1);
}

int main()
{
    int i,j,ans;
    char c;
    while(~scanf("%d%d",&n,&m))
    {
        getchar();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%c",&c);
                map[i][j]=c-48;
            }
            getchar();
        }
        for(i=1;i<=m;i++)
        {
            if(map[1][i]==0)so(1,i);
            if(map[n][i]==0)so(n,i);
        }
        for(i=1;i<=n;i++)
        {
            if(map[i][1]==0)so(i,1);
            if(map[i][n]==0)so(i,n);
        }
        for(i=1,ans=0;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                if(map[i][j]==0)ans+=1;
        }
        printf("%d\n",ans);
    }

    return 0;
}
*/



//13.acm
/*
#include <stdio.h>
#include <string.h>
char s[101];
int l,i,j,k,a;
int main()
{
  k = 1;
  while(~scanf("%s",s))
  {
     printf("Case %d:\n",k);
     k++;
     l=strlen(s);
     a=0;
     for(i=0;i<l;i++)
     {
        if(s[i]=='a'&&s[i+1]=='c'&&s[i+2]=='m'&&i!=0)
        {
          printf("\n");
          a=0;
        }
        if(a == 10)
        {
          printf("\n");
          a=0;
        }
        printf("%c",s[i]);
        a++;
        if(i==l-1)
        printf("\n");
     }
   }
}
*/




//14.找亲戚
/*
#include<stdio.h>
int father[100000];
int find(int x)
{
    if (father[x]!=x)
      father[x]=find(father[x]);
    return father[x];
}
int main()
{
    int n,m,i,c1,c2,k=0;
    char w;
    while(~scanf("%d%d",&n,&m))
    {
        k++;
        printf("Case %d:\n",k);
        for(i=0;i<100000;i++)
        father[i]=i;
        for(i=0;i<m;i++)
        {
            getchar();
            scanf("%c",&w);
            scanf("%d%d",&c1,&c2);
            if(w=='Q')
              if(find(c1)==find(c2))
                printf("yes\n");
               else printf("no\n");
            if(w=='C')
              {c1=find(c1);c2=find(c2);father[c1]=c2;}
        }

    }
    return 0;
}
*/



//15.求最大和序列
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 100010
int main()
{
    int i,j,t,n,l,a,min,best,left,right;
    int sum[M];
    int num[M];
           while(scanf("%d",&n),n != 0)
           {
           memset(sum,0,sizeof(sum));
           for(j=1;j<=n;j++)
                 {scanf("%d",&num[j]);sum[j]=sum[j-1]+num[j];}
           min=1000001;
           left=0;
           right=0;
           best=-1000001;
           for(j=1;j<=n;j++)
           {
               if(sum[j-1]<min){min=sum[j-1];l=j;}
               if(sum[j]-min>best)
               {
                     best=sum[j]-min;
                     left=l;
                     right=j;
               }
          }
        printf("%d %d %d\n",best,num[left],num[right]);
    }
    return 0;
}
*/



//16.斐波那契again
/*
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int map[1000010];
int n;
int main()
{
    map[0] = 7;
    map[1] = 11;
    for(int i = 3;i <= 1000000;i ++)
       map[i] = (map[i - 1] % 3 + map[i - 2] % 3) % 3;
    while(~scanf("%d",&n))
    {
        if(map[n] % 3 == 0)
            printf("yes\n");
        else
            printf("no\n");
            }
}
*/


//17.仓鼠
/*
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int D, V;
    scanf("%d %d", &D, &V);
    while(D + V != 0)
    {
        printf("%.3lf\n",pow(D*D*D - 6 * V/3.1415927, (double)1/3));
        scanf("%d %d", &D, &V);
    }
    return 0;
}
*/



//18.连续的自然数满足左边n+1个数的平方和等于右边n个数的平方和
/*
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n;
int main()
{
    while(~scanf("%d",&n))
    {
     int m= 2 * (n * n + n);
     for(int i = n;i > 0;i --)
           printf("%d ",m- i);
     printf("%d ",m);
     for(int j = 1;j < n;j ++)
           printf("%d ",m+ j);
     printf("%d",m + n);
     printf("\n");
     }
     return 0;
}
*/


//19求Cnm（有bug但过了）
/*
#include<stdio.h>
int main ()
{

    long long int a,b,i,r,n,sum;
    while (scanf("%lld%lld",&a,&b)&&( !(a==0&&b==0) ) )
    {
      sum=1;r=1;
      if(2*b>a)
      b=a-b;
      n=b;
      for(i=0;i<n;i++)
	  {
             if(sum%b==0)  sum=sum/b*a;
             else{r=r*b;sum*=a; }
             b--;a--;
       }
      sum/=r;
      printf("%lld\n",sum);
    }
    return 0;
}
*/


//20电梯问题  最后不回一楼 上6停5下4
/*
#include<stdio.h>
int main()
{
    int n,i,l,time;
    int a[100000];
    while(scanf("%d",&n)&&(!(n==0)))
    {
       time=0;
       for(i=0;i<n;i++)
       {
          scanf("%d",&a[i]);
          if(i==0) time+=a[i]*6+5;
          else if(a[i]>a[i-1]) {l=a[i]-a[i-1];time+=l*6+5;}
               else   {l=a[i-1]-a[i];time+=l*4+5;}
       }
       printf("%d\n",time);
     }
     return 0;
}
*/


/*21新的取石子游戏
A和B摆n（1<=n<=10）个盘子里面均有一些石，轮流取石。
每次，取石子的人须选个盘，然后从中拿走至少一颗，后将盘中剩的石以任意方式分配到其余盘中，也可不向外分。
再也不能取石子的那个人为负。
输入包括多组测试数据，每组测试数据第一行一个正整数n，
第二行包括n个数字，第i个数字代表第i个盘子里面石子的个数。每个数字都不会超过100。
结论是奇数堆必胜
偶数堆必胜条件为：最大和次大相等，去掉最大和次大，新的最大和次大相等*/
/*
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  int i,j,k;
  int a[1000];
  int flag;
  while(scanf("%d",&n)&&n!=0)
  {
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    sort(a,a+n);
    if(n%2==0)
     {
       flag=1;
       for(i=0;i<n&&flag;i+=2)
         {
            if(a[i]!=a[i+1])
                 flag=0;
         }
       printf("%d\n",flag?0:1);
     }
    else
    printf("1\n");
  }
return 0;
}
*/


/*22从一个正整数M中去掉其中的任意S位，得到一个新的整数（数字相对位置不变），
去掉不同位上的数字就会得到不同的整数，其中有一个最小整数N，
对此N，打乱个十百千万的顺序将数字重组成为新的整数，在这些新的整数中求大于N的最小整数;
  eg.   175838 去3位，所得的各个整数中，最小的为1____38-->138,对于138打乱顺序得到138 183 318 381 813 831，
  大于138的最小整数为183即为结果。
第一行包括一个整数d，即总共有d组测试数据（也即在测试文件中，d只出现一次），
接下来的d行每行包括一组测试数据——小于10^30的整数M和去掉的位数S，两数之间空格分隔;
对于每组测试数据输出结果在单独的一行中，若无结果，输出0;*/
/*
#include <stdio.h>
#include <string.h>
#define N 30
void deldit(char *s)
{
    int k;
    k = 1;
    while (s[k] != '\0')
      {
         if (s[k-1] > s[k])
         break;
         k ++;
      }
    if (s[k] == '\0')
     {
        s[k-1] = '\0';
        return;
     }
    k --;
 do {
       s[k] = s[k+1];
       k ++;
      } while (s[k] != '\0');
 return;
}
void sortpro(char *s)
{
  int i, j, k, len;
  char stmp;
  len = strlen(s);
  for (i = 0; i < len-1; i ++)
   {
     k = i;
     for (j = i+1; j < len; j ++)
       if (s[k] > s[j])
          k = j;
     if (k != i)
       {
         stmp = s[k];
         s[k] = s[i];
         s[i] = stmp;
       }
   }
}
int main()
{
  int d, s, len, i, k, m;
  char str[N+1], stmp;
  scanf("%d", &d);
  while (d--)
    {
        scanf("%s%d", str, &s);
        for (i = 0; i < s; i ++)
          deldit(str);
        len = strlen(str);
        k = len-1;
        while (k>0)
          {
             if (str[k] > str[k-1])
                break;
             k --;
          }
        if (k == 0)
          {
            printf("0\n");
            continue;
          }
        for (m = k, i = k+1; i < len; i ++)
           if (str[i] > str[k-1] && str[i] < str[m])
               m = i;
        stmp = str [k-1];
        str[k-1] = str[m];
        str[m] = stmp;
        sortpro(&str[k]);
        printf("%s\n", str);
    }
 return 0;
}
*/



//23快排源代码
/*
#include <stdio.h>
#define M 100001
int partions(int l[],int low,int high)
{
    int prvotkey=l[low];
    l[0]=l[low];
    while (low<high)
       {
               while (low<high&&l[high]>=prvotkey)
                      --high;
               l[low]=l[high];
               while (low<high&&l[low]<=prvotkey)
                     ++low;
                l[high]=l[low];
        }
    l[low]=l[0];
return low;
}
void qsort(int l[],int low,int high)
{
    int prvotloc;if(low<high)
      {
        prvotloc=partions(l,low,high);    //将第一次排序的结果作为枢轴
        qsort(l,low,prvotloc-1); //递归调用排序 由low 到prvotloc-1
        qsort(l,prvotloc+1,high); //递归调用排序 由 prvotloc+1到 high
      }
}
void quicksort(int l[],int n)
{
    qsort(l,1,n); //第一个作为枢轴 ，从第一个排到第n个
}
int main()
{
    int a[M];
    int num,i,j;
    while(scanf("%d",&num))
    {
        for (i=1;i<=num;i++)
            scanf("%d",&a[i]);
        printf("\n");
        quicksort(a,num);
        for(j=1;j<=num;j++)
          printf("%d ",a[j]);
        printf("\n");
    }
return 0;
}
*/



//24登山每次1或三（递推法）
/*
#include<stdio.h>
#define M 100010
int main ()
{
    int i,n,a[M];
    a[1]=a[2]=a[3]=1;//开头总有几项是特殊的
    for(i=4;i<M;i++)
      a[i]=(a[i-1]+a[i-3])%10007;//递推法置顶
    while(~scanf("%d",&n))
        printf("%d\n",a[n]);
 return 0;
}
*/



//25回家路径问题
/*
#include<stdio.h>
int  a[1010][1010];
int main()
{
        int i, j;
        for(i = 1; i < 1010; i ++)
                a[i][1]=a[1][i] = 1;//左上排方法唯一
        for(i = 2; i < 1010; i ++)
                for(j = 2; j < 1010; j ++)
                        a[i][j] = (a[i][j-1]+a[i-1][j]) % 10007;//递推技俩（递推至顶）
        while(~scanf("%d%d",&i,&j))
       printf("%d\n",a[i][j]);
return 0;
}
*/


//26献血问题
/*
#include<stdio.h>
#include<math.h>
int main(){
        int n,k;
        double p,a,b;
        while(~scanf("%d%d%lf",&n,&k,&p))
        {
                a=n;
                b=(1-pow(1-p,k))*n+n/k;//概率公式
                if(fabs(a-b)<1e-8)//精度控制
                        printf("BOTH\n");
                else
                        printf("%s\n",a<b?"A":"B");//唯一的亮点
        }
        return 0;
}
*/


//27猜数问题
/*
#include<stdio.h>
#include<string.h>
struct  wa
{
    char a[15];
     int z;
}w;
int main()
{
    int i,max=11,min=0;
    char d;
    while(1)
     {
         scanf("%d",&w.z);
         getchar();
         if(w.z==0) break;
         gets(w.a);
         if(strcmp("too high",w.a)==0)
             {max=max>w.z?w.z:max;}
        else
           if(strcmp("too low",w.a)==0)
                 { min=min<w.z?w.z:min; }
          else
             if(strcmp("right on",w.a)==0&&w.z<max&& w.z>min)
                {printf("Stan may be honest\n") ;max=11;min=0;}
             else
                {printf("Stan is dishonest\n") ;max=11;min=0;}
       }
       return 0;
}
*/



//28石头尖刀布
/*
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{  char sta[110];
    int n,len,s,j,b,sum,i;
    while(scanf("%d",&n)!=EOF,n)
     {
         sum=0;
         getchar();
         gets(sta);
         scanf("%d%d%d",&s,&j,&b);
         len=strlen(sta);
         for(i=0;i<len;i++)
            {
                if(sta[i]=='S')
                 {
                        if(b){b--;sum++;}
                       else
                          if(s){s--;}
                          else
                             { j--;sum--;}
                 }
               else
                 if(sta[i]=='J')
                     {
                         if(s){s--; sum++;}
                          else
                         if(j) {j--;}
                             else
                                {b--;sum--;}
                    }
                else
                 if(sta[i]=='B')
                    {
                       if(j){j--;sum++;}
                       else if(b) {b--;}
                                 else{s--;sum--;}  //巧妙的记数与胜负判断
                    }
         }
     printf("%d\n",sum);
    }
  return 0;
}
*/



//29三角数(待定)
/*
#include<stdio.h>
#include<math.h>
int  main()
{
    int n,s,flag=0,k;
    while(~scanf("%d",&n))
     {
         flag=0;
         s=pow(n,0.5);  //不超时优化
         for(int i=1;i<=s;i++)
           {
               k=pow(2*n-i*(i+1),0.5);  //不超时优化
               if(k&&k*(k+1)+i*(i+1)==2*n)
                    {
                        flag=1;
                        break;
                     }
            }
         if(flag)
            printf("YES\n");
          else
              printf("NO\n");
       }
       return 0;
}



//30倒序输出
/*
#include<stdio.h>
int  main()
{
    int n,reminder;
    printf("ENTER THE NUMBER\n");
    while(scanf("%d",&n),n)
    {
        printf("\n");
        printf("the number in reverse order is:\n");
        while(n!=0)
           {
               reminder=n%10;
               printf("%d",reminder);
               n/=10;
           }
        printf("\n\n");
        printf("ENTER THE NUMBER\n");
    }
return 0;
}
*/




//31求1！+2！+3！+ …… +n！的和．
/*
#include<stdio.h>
int fun(int n)
{
    if(n<=1) return 1;
     else
       return n*fun(n-1);
}
int main()
{
    int n,s=0,i;
    while(scanf("%d",&n),n)
    {
        for(i=1;i<=n;i++)
          s+=fun(i);
        printf("%d",s);
    }
    return 0;
}
*/


//32...

















































































































