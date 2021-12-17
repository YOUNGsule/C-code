#include <stdlib.h>
#include <string.h>
void fun(char *p,int *qian,int *hou)
{
    int len,i;
    len=strlen(p);

    for(i=0;i<len;i++)
    {
        if(p[i]!='*')
        {
            break;

        }
        *qian=*qian+1;
    }
    for(i=len-1;i>0;i--)
    {
        if(p[i]!='*')
        {
            break;

        }
        *hou=*hou+1;
    }





}
int main()
{
    char a[30]="*********A*BC*DE*****";
    int qian=0,hou=0;
    printf("原始的字符串是：\n");
    puts(a);
    fun(a,&qian,&hou);
    printf("\n前面*号的个数是：%d\n",qian);
    printf("\n后面*号的个数是：%d\n",hou);
}




#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char num[10];
    char name[20];
    char sex;
    int age;
    float score[2];
}STU;
int main()
{
    STU a,* p;
    strcpy(a.num,"202112");
    strcpy(a.name,"limao");
    a.sex='M';
    a.age=19;
    a.score[0]=88.00;
    a.score[1]=90.00;
    p=&a;
    printf("学号：%s\n",p->num);
    printf("姓名：%s\n",p->name);
    printf("性别：%c\n",p->sex);
    printf("年龄：%d\n",p->age);
    printf("成绩：%.2f,%.2f\n",(*p).score[0],(*p).score[1]);
    return 0;






}
