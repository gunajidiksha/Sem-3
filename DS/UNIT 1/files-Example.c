#include <stdio.h>
#include <stdlib.h>
// example -1
/*main()
{
    FILE *fp;
    char ch;
    fp = fopen("input.txt", "w");
    while((ch=getchar())!=EOF)
        putc(ch, fp);
    fclose(fp);
    fp = fopen("input.txt", "r");
    while(!feof(fp))
    {
        printf("%c", getc(fp));
    }
    fclose(fp);
}*/

//Example -2 reading student roll number, name and marks from the input file
// and writing the data onto the output file student1.text.

int main()
{
    FILE *fp,*fp1;
    int rollno, marks, i, n;
    char name[20];

    fp = fopen("student.txt", "r");
    fp1 = fopen("student1.txt", "w");
    printf("Enter number of students:");
    fscanf(fp,"%d",&n);
    fprintf(fp1,"Roll No   Name     Marks\n");
    for(i=1; i<=n; i++)
    {
        fscanf(fp, "%d %s %d",&rollno,name,&marks);
        fprintf(fp1,"%d\t%s\t%d\n",rollno,name,marks);
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}



