#include<stdio.h>
struct Student
{
char first_name[100];
char last_name[100];
int ID;
};
void main()
{
  struct Student s1[10];
  int i,n;
  printf("Enter number of students\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  printf("Enter first name\n");
  scanf("%s",&s1[i].first_name);
  printf("Enter last name\n");
  scanf("%s",&s1[i].last_name);
  printf("Enter ID\n");
  scanf("%d",&s1[i].ID);
  }
  for(i=0;i<n;i++)
  {
  printf("\nFirst name is %s\n",s1[i].first_name);
  printf("\nLast name is %s\n",s1[i].last_name);
  printf("\nID is %d\n",s1[i].ID);
  }
}
