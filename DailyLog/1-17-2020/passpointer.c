#include <stdio.h>
void raise(int *var, int b)
{
    *var = *var+b;
}
int main(){
    int salary=0, bonus=0;
    printf("Enter the employee current salary:");
    scanf("%d", &salary);
    printf("Enter bonus: ");
    scanf("%d", &bonus);
    raise(&salary,bonus);
    printf("Final Salary: %d",salary);
    return 0;
}