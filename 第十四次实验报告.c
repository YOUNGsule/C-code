#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 50
void rnd(int*a)
{
int  i;
srand(time(0));
for(i=0;i<N;i++)
{
a[i]=rand()%120;
}
}
void ageNum(int*a,int*b)
{
int i;
for(i=0;i<50;i++)
{
if(a[i]<10)
{
b[0]+=1;
}
else if(a[i]<20)
{
b[1]+=1;
}
else if(a[i]<30)
{
b[2]+=1;
}
else if(a[i]<40)
{
b[3]+=1;
}
else if(a[i]<50)
{
b[4]+=1;
}
else if(a[i]<60)
{
b[5]+=1;
}
else if(a[i]<70)
{
b[6]+=1;
}
else if(a[i]<80)
{
b[7]+=1;
}
else if(a[i]<90)
{
b[8]+=1;
}
else if(a[i]<100)
{
b[9]+=1;
}
else if(a[i]>100)
{
b[10]+=1;
}
}
}
int main()
{
int a[N],b[11]={0},i;
rnd(a);
printf("随机产生的%d个年龄为:\n",N);
for(i=0;i<N;i++)
{
printf("%d\t",a[i]);
}
ageNum(a,b);
printf("\n0--9岁的人数为：%d\n",b[0]);
printf("10--19岁的人数为：%d\n",b[1]);
printf("20--29岁的人数为：%d\n",b[2]);
printf("30--39岁的人数为：%d\n",b[3]);
printf("40--49岁的人数为：%d\n",b[4]);
printf("50--59岁的人数为：%d\n",b[5]);
printf("60--69岁的人数为：%d\n",b[6]);
printf("70--79岁的人数为：%d\n",b[7]);
printf("80--89岁的人数为：%d\n",b[8]);
printf("90--99岁的人数为：%d\n",b[9]);
printf("100岁以上的人数为：%d\n",b[10]);
return 0;
}
