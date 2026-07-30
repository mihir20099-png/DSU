//Array operations 
#include<stdio.h> 
int main() {

int a[50] , n , i , ch , p , e ; 

printf("Enter number of elements") ; 
scanf("%d" , &n) ; 
 
printf("Enter array elements\n") ; 
for(i=0 ; i<n ; i++) 
{ 
scanf("%d" , &a[i]) ; 
}  

printf("\n1.Insert\n2.Delete\n3.Display\n") ; 
printf("Enter the choice") ; 
scanf("%d" , &ch) ;

switch(ch) 
{ 
case 1: 
printf("Enter position to insert the element in the array\n") ; 
scanf("%d" , &p) ; 

printf("Enter the element to insert") ; 
scanf("%d" , &e) ; 

for(i=n ; i>=p ; i--) 
{  
a[i] = a[i-1] ;
} 
a[p-1] = e ; 
n++ ; 
printf("Array after insertion\n") ; 
for(i=0 ; i<n ;i++) 
{ 
printf("%d" , a[i]) ;
} 
break ;
  

case 2:
printf("Enter position to delete the element in the array\n") ; 
scanf("%d" , &p) ; 

for(i=p-1 ; i<n-1 ; i++) 
{ 
a[i] = a[i+1] ;
} 
n-- ; 

printf("Array after deletion\n") ; 
for(i=0 ; i<n ;i++) 
{ 
printf("%d" , a[i]) ;
}
break ; 

case 3: 
printf("Array elements are\n") ; 
for(i=0 ; i<n ;i++) 
{ 
printf("%d" , a[i]) ;
} 
break ; 

default: 
printf("Invalid Choice") ; 
} 
return 0; 
}
  
