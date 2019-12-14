#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
char name[25];
int empno;
int salary;
} record;
FILE *fp;
void main()
{
record emp;
record readrec(record emp);
void writerec(record emp);
fp=fopen("record.dat","w");
/* entering data */
while(1)
  {
  printf("\nENTER END TO EXIT \n ENTER NAME ");
  scanf("%s",emp.name);
  /*fprintf(fp,"\n%s",emp.name);*/
  if(strcmp(emp.name,"END")==0)
    break;
  fprintf(fp,"\n%s",emp.name);
  emp=readrec(emp);
  writerec(emp);

  }
  fclose(fp);
}
record readrec(record emp)
{
printf("EMPLOYEE NO->");
scanf("%d",&emp.empno);
printf("SALARY->");
scanf("%d",&emp.salary);
return(emp);
}
void writerec(record emp)
{
fprintf(fp,"  %d  ",emp.empno);
fprintf(fp,"  %d  ",emp.salary);
return;
}




