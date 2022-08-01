/* Points which I have learnt when I am making the program: scanf("%d%d%d",  //not give spaces btw %d and %d and also not after %d or before in double quotes otherwise we will get unexpected results.
                                                                 Also if you give wrong info like printf("%d%s",variable_that_is_in_string);  program will run but not get expected output and get garbage values  */
/*In this program without making a variable of struct, the memory will no allocated for other than 1 variable
and does not store other than 1 information for one variable*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct students
{
   char full_name[20];
   char father_name[20];
   char mother_name[20];
   int age;
   char state[20];
   char city[20];
   int date_of_birth_day;
   int date_of_birth_month;
   int date_of_birth_year;
   char father_work[20];
   char mother_work[20];
   int income;
};
struct students personal_information;
int main()
{
    int i;
    int no_of_students;
    puts("How many students:");
    scanf("%d", &no_of_students);
    for(i=1;i<=no_of_students;i++)
    {
        printf(" Enter name of %d Roll Number: ",i );
        scanf(" %s",personal_information.full_name);
        printf("\n Enter father's name of student: ");
        scanf("%s",personal_information.father_name);
        printf("\n Enter mother's name of student: ");
        scanf("%s",personal_information.mother_name);
        printf("\n Enter age of student: ");
        scanf("%d",&personal_information.age );
        printf("\n Enter name of the state where student live: ");
        scanf("%s",personal_information.state);
        printf("\n Enter name of the city: ");
        scanf("%s",personal_information.city);
        printf("\n Enter date of birth of the student: ");
        scanf("%d%d%d", &personal_information.date_of_birth_day,&personal_information.date_of_birth_month,&personal_information.date_of_birth_year);
        printf("\n Enter student's father's profession : ");
        scanf("%s",personal_information.father_work);
        printf("\n Enter student's mother's profession :  ");
        scanf("%s",personal_information.mother_work);
        printf("\n Enter student's house income: ");
        scanf("%d",&personal_information.income);


            }

        puts("\n Full information about the students: ");
        for(i=1;i<=no_of_students;i++)
        {
            printf("Roll no.: %d\nName:%s\nFather's Name:%s\n Mother's name:%s\nAge:%d\nAddress:%s,%s\nDate of birth:%d/%d/%d\nFather's Profession:%s\nMother's profession:%s\nIncome:%d\n",i,personal_information.full_name,personal_information.father_name,personal_information.mother_name,personal_information.age,personal_information.city,personal_information.state,personal_information.date_of_birth_day,personal_information.date_of_birth_month,personal_information.date_of_birth_year,personal_information.father_work,personal_information.mother_work,personal_information.income);

        }
    return 0;
}
