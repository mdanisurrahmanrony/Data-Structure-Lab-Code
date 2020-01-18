//Write a program using structure where “student” is a structure variable. And “s1” as “student” type variable. From the user you have to collect First name, Last name and ID for one student. Print the collected data.#include<stdio.h>

struct student
{
    char first[20];
    char last[20];
int id;
}s1;

main()
{
printf("Enter first name:\n");
scanf("%s", s1.first);
printf("Enter last name:\n");
scanf("%s", s1.last);
printf("Enter id:\n");
scanf("%d", &s1.id);
printf("Name: %s %s\nId: %d\n\n", s1.first, s1.last, s1.id);
}
