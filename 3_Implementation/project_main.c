
 #include "banking.h"
 #include "header.h"
#include "unity/unity.h"
#include "assert.h"
#include "dollarcurrency.h"
#include "eurocurrency.h"
 void menu(void)  
 {
  int ch;  
 
 printf("\n            Welcome                   \t");
 printf("\nPlease select your desired option");  
 printf("\n 1. For New Account opening \n 2. For Already Existing customer \n 3. Exit");  
 scanf("%d",&ch);  
 switch (ch)  
   {
    case 1: new_customer();
    break;
    case 2: existing_customer();
    break;   
    default:  
    exit(0);  
  }  
 }

 void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}
void setUp()
{

}
void tearDown()
{

}
void test_dollar(void)
{
    int n1 = 500, n2 = 75;
    TEST_ASSERT_EQUAL(6.8,dollar(n1,n2));
    TEST_ASSERT_EQUAL(0.15, dollar(n2,n1));
    
}
void test_euro(void)
{
    int n3 = 500, n4 = 87;
    TEST_ASSERT_EQUAL(5.7, euro(n3,n4));
    
    
}
 int main(void)
{   
    
    UNITY_BEGIN();
    
    RUN_TEST(test_dollar);
    RUN_TEST(test_euro);

    UNITY_END();



    int main_exit;
    char pass[10],password[10]="project";
    int i=0;
    printf("\n\n\t\tEnter your password:");
    scanf("%s",pass);
    

    if (strcmp(pass,password)==0)
        {printf("\n\nPassword Match");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
                system("cls");
            menu();
        }
    else
        {   printf("\n\nWrong password\a\a\a");
            login_try:
            printf("\nPress \n 1 to try again \n 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {

                        system("cls");
                        main();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    }
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;}

        }
       
        return 0;
}
