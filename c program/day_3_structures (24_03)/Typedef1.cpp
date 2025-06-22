#include<stdio.h>
#include<string.h>


int main(){
	
	typedef struct book{
		
    
  	char  name[50] ;
  	int noOfPages;
  	float price;
  	
	}book ;
	
	book a;
	book b;
	book c;
	 
	printf("Enter no of peges of book 'a :") ;
	

	scanf("%d",&a.noOfPages);
	
	
	
	
		printf("Enter price of book 'a :") ;
		
	
		scanf("%f",&a.price);
		
		getchar();
		
		
			printf("Enter name of book 'a' :") ;
			char x[50];
			
			fgets( x,sizeof(x) , stdin );
			strcpy(a.name,x);
			
			
			printf("%s",a.name);
			
			
			
	
	
}
