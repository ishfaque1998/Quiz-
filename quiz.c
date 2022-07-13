#include<stdio.h>

int main()
{
    printf("Welcome to  Quiz Compition");
    int a,b,c,d,e,f,total=0;
    printf("Press 1 to start");
    scanf("%d",&a);
    if(a==1){
        switch (a)
        {
        case 1:
           printf("Q1) 1. Who is the father of C language? ");
           printf("\n1) Steve Jobs\n2) James Gosling\n3) Dennis Ritchie\n4) Rasmus Lerdorf");
           scanf("%d",b);
           if(b==3){
               total=total+1;
           }
        case 2:
        printf("Q2) Which of the following is not a valid C variable name?");
  printf("\n1) int number;\n2) float rate;\n3) int variable_count;\n4) int $main;");
  scanf("%d",c);
  if(c==4){
      total=total+1;
  }
   case 3:
   printf(" Q3)All keywords in C are in ____________");
   printf("\n1) LowerCase letters\n2)UpperCase letters\n3)) CamelCase letters\n4)None of the mentioned")
scanf("%d",&d);
if(d==1){
    total+=1;
}
   case 4:
    printf("Q4)Which of the following is true for variable names in C?");
   printf("\n1)They can contain alphanumeric characters as well as special characters\n2)It is not an error to declare a variable to be one of the keywords(like goto, static)\n3) Variable names cannot start with a digit\n4)Variable can be of any length");
  
scanf("%d",&e);
   if(e==3){
       total+=1;
   }
   case 5:
   printf("Q5Which is valid C expression?")
   printf("\n1)int my_num = 100,000;\n2) int my_num = 100000;\n3)int my num = 1000;\n4) int $my_num = 10000;");
   scanf("%d",&f);
   if(f==2){
       total+=1;
   }
        }
       
       
      
    }

    printf("Your Marks = %d",total);
    return 0;

}