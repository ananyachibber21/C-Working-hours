#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct work{
	char name[30];
	int hours,salary;
}emp[100];

int main(){
	int i,n;
	printf("Enter the no of workers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Name: ");
		scanf("\n%s",&emp[i].name);
		printf("Hours: ");
		scanf("\n%d",&emp[i].hours);
		printf("Salary: ");
		scanf("\n%d",&emp[i].salary);
		
	}
	
	for(i=0;i<n;i++){
		
		if(emp[i].hours==8){
			emp[i].salary=emp[i].salary+50;
		}
		else if(emp[i].hours==10){
			emp[i].salary=emp[i].salary + 100;
		}
		
		else if(emp[i].hours>=12){
			emp[i].salary=emp[i].salary+150;
		}
		
		else{
			printf("Increase your working time");
		}
		
	}
	
	printf("\n---All Workers Details---\n");
	
	for(i=0;i<n;i++){
		printf("Name: ");
		printf("%s\n",emp[i].name);
		printf("Hours: ");
		printf("%d\n",emp[i].hours);
		printf("Salary after increment: ");
		printf("%d\n",emp[i].salary);
		
    }
}
