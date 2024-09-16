#include <stdio.h>
#include <stdlib.h>
struct student{
    int cet;
    char name[10];
    char branch[4];
};
/*int main()
{
    struct student s[10];
    int n;
    printf(" enter number of studetns :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      printf("Enter %d name of the student :",i);
    scanf("%s",s[i].name);
     //  gets(s[i].name);
       printf("Enter %d branch the  student :",i);
    scanf("%s",s[i].branch);
    //  gets(s[i].branch);
      printf("Enter %d CET of a student :",i);
       scanf("%d",&s[i].cet);
    }
       printf("Students details : \n");
       printf("S.No \t \t NAME  \t\t BRANCH \t\t CET \n");
     for(int i=0;i<n;i++)
     {
       printf(" %d \t\t %s  \t\t\t %s \t\t\t %d \n",i,s[i].name,s[i].branch,s[i].cet);
     }
}*/
// Modular programming approach
void read_student(struct student s[], int n);
void print_student(struct student s[], int n);
void segregate_branch(struct student s[], int n, char target[]);
int main()
{
    struct student s[10];
    int n;
    printf("enter number of students :");
    scanf("%d",&n);
    read_student(s,n);
    print_student(s,n);
    segregate_branch(s,n,"cse");
    segregate_branch(s,n,"ece");
    segregate_branch(s,n,"ee");

  return 0;
}
void read_student(struct student s[], int n)
{
   for(int i=0;i<n;i++)
    {
       printf("Enter CET of a %d student :",i+1);
       scanf("%d",&s[i].cet);
       printf("Enter name of a %d th student :",i+1);
       scanf("%s",s[i].name);
       printf("Enter branch of %d th  student :",i+1);
       scanf("%s",s[i].branch);
    }
}
void print_student(struct student s[], int n)
{
   printf("-------------Student record------- \n");
   printf("S.No \t \t CET \t\t NAME \t\t BRANCH \t\n");
    for(int i=0;i<n;i++)
    {
      printf(" %d \t\t %d  \t\t %s \t\t %s \t\t  \n",i+1,s[i].cet,s[i].name,s[i].branch);

    }
}
void segregate_branch(struct student s[], int n, char target[])
{
   printf("---Student record opting for %s branch--- \n",target);
   printf("S.No \t \t CET \t\t NAME \n");
    for(int i=0;i<n;i++)
    {
        if(strcasecmp(s[i].branch, target)==0)
        {
          printf(" %d \t %d \t %s \n",i,s[i].cet,s[i].name);

        }
    }
}
