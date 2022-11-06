#include<stdio.h>
int main(int argc, char const *argv[])
{
    int id,pass;
    printf("Enter ID :");
    scanf("%d",&id);
    switch (id)
    {
    case 4580:
        printf("Please enter password :");
        scanf("%d",&pass);
            
            switch (pass)
        {
        case 100100:
            printf("Correct password.");
            break;
        
        default:printf("Incorrect password.");
            break;
        }
        break;
    
    default:printf("Wrong ID");
        break;
    }
    return 0;
}
