
#include  "banking.h"
#include  "header.h"
void existing_customer()
{       
  int num,count=0,n,ch,flag;  
  int a,c,t;  
  float amount,value,temp;  
  FILE *fp;  
  
   printf("\n       Welcome");  
   printf("\n\n Enter your Account Number\t");  
   scanf("%d",&num);  
   fp=fopen("customer.txt","r+");  
   rewind(fp);  
   while(!feof(fp)&&count==0)  
  { fread(&b,sizeof(b),1,fp);  
   if (b.accno==num)  
   {  count=1;  }   }  
   if(count==0)  
   {     printf("\n Wrong account number... \nNo such user...\n Please Re enter your account number");  
   getch();  
    }  
  else  
   { int m;  
   
   printf("\n Welcome %s,Please select your desired option",b.name);  
   printf("\n Press 1. To Deposit Amount ");  
   printf("\n Press 2. To Withdraw Amount ");  
   printf("\n Press 3. To View Details ");  
   printf("\n Press 4. For Foreign Exchange");  
   printf("\n Press 5. Exit program");  
   printf("\n Please Enter your choice : ");  
   scanf ("%d",&m);  
   switch(m)  
   {case 1:  
   {
    printf("\n\n\n Dear %s,Enter the amount to deposit : ",b.name);  
    scanf("%f",& amount);  
    b.bal=b.bal+amount;  
    printf("\n Your current available bank balance is %f", b.bal);  
    n=sizeof(b);  
    fseek(fp,-n,SEEK_CUR);  
    fwrite(&b,n,1,fp);  
    fclose(fp);  
    getch();  
    }break;  
    case 2:  
   { 
    printf("\n\n\n Dear %s,Enter the amount to withdraw : ",b.name);  
    scanf("%f",& amount);  
    if(b.bal-amount<=0)  
    {printf("\n Sorry, You dont have enough credit left in your account");  
    fclose(fp);  
    getch();  
     
    }  
    else  
    {b.bal=b.bal-amount;  
    printf("\n Your current available bank balance is %f", b.bal);  
    getch();  
    n=sizeof(b);  
    fseek(fp,-n,SEEK_CUR);  
    fwrite(&b,n,1,fp);  
    fclose(fp);  
      
    }  
    }break;  
    case 3:  
    {  
    printf("\n Your Account Details are....");  
    printf("\n\n Name : %s",b.name);  
    printf("\n\n Account Number : %d ",b.accno);  
    printf("\n\n Available Balance :%f ",b.bal);  
    fclose(fp);  
    printf("\n Press any key to continue...");  
    getch();   
     
    }break;  
    case 4:  
    {
    int x;  
    float y,z;  
    
    printf("\n          Welcome \n Select the currency you wish to convert.");  
    printf("\n 1. US Dollar");  
    printf("\n 2. Euro");   
    scanf("%d",&x);  
    switch(x)  
    {  
    case 1:  
    {   printf("\n Enter the Indian rupees to convert");  
    scanf("%f",&y);  
    z=y/77;  
    printf("\n The converted rate is $ %f",z);  
    getch();  
     
    }break;  
    case 2:  
    {   printf("\n Enter the Indian rupees to convert");  
    scanf("%f",&y);  
    z=y/84;  
    printf("\n The converted rate is euro %f",z);  
    getch();  
     
    }
    
    }}}}}