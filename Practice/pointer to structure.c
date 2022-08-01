//pointer to structure
#include <stdio.h>
struct student
{
   char name[40];
   int roll_no;
};
int main()
{
    struct student *p, s;
    p = &s;
    printf("Enter name: ");
    scanf("%s", (*p).name);// p->name);
    printf("Enter rollno. : ");
    scanf("%d", &p->roll_no);
//________________________________________
    printf("Displaying:\n");
    printf("Name: %s\n", p->name);
    printf("rollno. : %d\n", p->roll_no);

    return 0;
}
