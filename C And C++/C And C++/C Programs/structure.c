#include<stdio.h>
#include<string.h>
typedef struct students{
    int roll;
    char name[10];
    int marks;
    }stu;

int main(){
    stu s[10];
    printf("Enter details of 10 students");
    for(int a=0;a<3;a++)
    {
        printf("Enter Roll.no of %d th student\n",a+1);
        scanf("%d",&s[a].roll);
        printf("Enter name of the student \n");
        gets(s[a].name);
        printf("Enter Marks of the student \n");
        scanf("%d",&s[a].marks);

    }
     for(int a=0;a<3;a++)
    {
        printf("Entered Roll.no of %d th student is %d\n",a+1,s[a].roll );
        
        printf("Entered name of the student is \n");
        puts(s[a].name);
        printf("Entered Marks of the student is %d \n",s[a].marks);
        

    }



    
    return 0;
}