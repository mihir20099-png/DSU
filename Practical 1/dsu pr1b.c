#include<stdio.h> 
#include<string.h> 

int main() 
{ 
char str1[50] ,str2[50] ; 
char *s1 = str1 ; 
char *s2 = str2 ; 
char ch ; 
int choice ; 

printf("Enter the first string") ; 
gets(s1) ; 

printf("Enter the second string") ; 
gets(s2) ; 



printf("\n1.strlen\n2.strcmp\n3.strcpy\n4.strcat\n5.strrev\n6.strupr\n7.strlwr\n8.strchr\n") ; 
printf("Enter choice") ; 
scanf("%d", &choice) ; 

switch(choice) 
{ 
case 1: 
printf("Length of the string = %d" , strlen(s1)) ; 
break ; 

case 2: 
printf("Compare result = %d" , strcmp(s1,s2)) ; 
break ; 

case 3: 
strcpy(s2 , s1) ; 
printf("String after copy = %s" , s1 , s2) ;  
break ; 

case 4: 
strcat(s1,s2) ; 
printf("String after strcat = %s" , s1 , s2) ;  
break ; 

case 5: 
printf("Reverse = %s" , strrev(s1)) ; 
break ; 

case 6: 
printf("Uppercase = %s" , strupr(s1)) ; 
break ; 

case 7: 
printf("Lowercase = %s" , strlwr(s1)) ; 
break ; 

case 8: 
printf("\nEnter character to search") ; 
scanf("%c" , &ch) ; 

if(strchr(s1 ,ch)!=NULL) 
printf("Character found") ; 
else 
printf("Character not found") ; 

} 
return 0 ; 
}
