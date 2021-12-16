#include <stdlib.h>
void last_score(float *w,float *x,float *y,float *z)
{
    int i;
    for(i=0;i<10;i++)
    {

        *(z+i)=*(w+i)*0.7+*(x+i)*0.1+*(y+i)*0.2;

    }

}
int main()
{
    float a[10],b[10],c[10],d[10];
    int i;
    printf("期末卷面成绩：\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("平时成绩:\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&b[i]);
    }
    printf("实验成绩:\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&c[i]);
    }
    last_score(a,b,c,d);
    for(i=0;i<10;i++)
    {
        printf("第%d位同学的终评成绩位：%.2f\n",i+1,d[i]);
    }
    return 0;

}





#include <stdlib.h>
#include <string.h>

int main()
{
   char a[10],b[10],c[10],t[10];
   int x;
   printf("输入第一个字符串：\n");
   gets(a);
    printf("输入第二个字符串：\n");
   gets(b);
    printf("输入第三个字符串：\n");
   gets(c);
   x=strcmp(a,b);
   if(x>0)
   {
       strcpy(t,a);
       strcpy(a,b);
       strcpy(b,t);
   }
   x=strcmp(a,c);
   if(x>0)
   {
       strcpy(t,a);
       strcpy(a,c);
       strcpy(c,t);
   }
   x=strcmp(b,c);
   if(x>0)
   {
       strcpy(t,b);
       strcpy(b,c);
       strcpy(c,t);
   }
   printf("按ASCII码从小到大排序:%s\n%s\n%s\n",a,b,c);

   return 0;


}
