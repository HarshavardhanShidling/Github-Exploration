#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int m1,m2,m3;
    int total;
    float percentage;
    //char result[20];
    char address[100];
    char contact[30];
};
//void display(struct student s, int x)
//{
  //  int i;
    //for(i=0;i<x;i++)
//    printf("\nStudent %d detail:",i+1);
  //  printf("Roll Number:%d\n",s[i].roll);
   // printf("Student Name :%s\n",s[i].name);
   // printf("Marks of M1:%d\tM2:%d\tM3:%d\n",s[i].m1,s[i].m2,s[i].m3);
 //   printf("Address of student:%s\n",s[i].address);
  //  printf("Contact Number of Student:%s\n",s[i].contact);
   // printf("Total Marks:%d\n",s[i].total);
 //   printf("percentage of student:%f\n",s[i].percentage);

//}
//void search(struct student *c, int key)
//{
      int flag=0,i,n;
   for(i=0;i<n;i++)
       if(s.roll==key)
   {
       flag=1;
      printf("\n student found in %d position",i+1);
       return(key);
       break;
   }
   if(flag==0)
      printf("student not founded");
}
int main()
{
    int n,i,choice;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student s[n];
    for (i=0;i<n;i++)
    {
        printf("student %d ",i+1);
        printf("Enter Roll number:");
        scanf("%d",&s[i].roll);
        printf("Enter Name:");
        scanf("%s",s[i].name);
        fflush(stdin);
        printf("Enter Marks of M1,M2,M3");
        scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
        printf("Enter the Address of student");
        scanf("%s",s[i].address);
        fflush(stdin);
        printf("Enter Contact Number of student:");
        scanf("%s",s[i].contact);
        fflush(stdin);
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
        s[i].percentage=((float)s[i].total/300)*100;
    }
    do
    {
        printf("1.display\n");
        printf("2.search\n");
        printf("3.delete\n");
        printf("4.exit\n");
        printf("Enter the choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: for(i=0;i<n;i++)
    printf("\nStudent %d detail:",i+1);
    printf("Roll Number:%d\n",s[i].roll);
    printf("Student Name :%s\n",s[i].name);
    printf("Marks of M1:%d\tM2:%d\tM3:%d\n",s[i].m1,s[i].m2,s[i].m3);
    printf("Address of student:%s\n",s[i].address);
    printf("Contact Number of Student:%s\n",s[i].contact);
    printf("Total Marks:%d\n",s[i].total);
    printf("percentage of student:%f\n",s[i].percentage);
                   //display(s[i],n);
                   break;
            case 2:printf("Enter Number to search:\n");
                   scanf("%d",&key);
                   search(&s,&key);
                   key=display(&s[i]);
                  break;
            case 3:


            case 4:printf("Exiting:");
                   break;
            default:printf("INVALID CHOICE");
        }

    }while(choice!=4);
}
