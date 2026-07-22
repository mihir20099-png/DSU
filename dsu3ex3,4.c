#include<stdio.h> 

void compare() 
{ 
int a[20] , n , i , largest , smallest ; 

printf("Enter the number of elements") ; 
scanf("%d" , &n) ; 

printf("Enter the elemnts\n") ; 
for(i=0 ; i<n ; i++) 
{ 
scanf("%d" , &a[i]) ; 
} 
largest = a[0] ; 

for(i=0 ; i<n ; i++) 
{ 
if(a[i] > largest) 
{ 
largest = a[i] ; 
} 

  
smallest = a[0] ;  
if(a[i] < smallest)  
{ 
smallest = a[i] ; 
} 
}

printf("Largest element = %d" , largest) ;  
printf("Smallest element = %d" ,smallest) ;  

}  
int main() 
{ 
compare() ;  
return 0 ; 
}
