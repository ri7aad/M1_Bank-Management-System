
 #include  "banking.h"
 #include  "header.h"

void new_customer()
{ 
      FILE*ff;  
      ff=fopen("customer.txt","a");  
      printf("\n               Welcome         \n Enter your name :");  
      scanf("%s",&b.name);  
      printf("\n Welcome %s, Enter Account number",b.name);  
      scanf("%d",&b.accno);  
      printf("\n Enter the amount to deposit Rs: ");  
      scanf("%f",&b.bal);  
      printf("\n Congratulations   An account has been created with entered details.\nTo deposit login as existing customer");  
      fwrite(&b,sizeof(b),1,ff);  
      fclose(ff);  
      getch();  
}


      