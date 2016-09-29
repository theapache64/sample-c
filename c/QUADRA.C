#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float a,b,c,d,root1,root2;
	clrscr();
	printf("Enter a,b,c in order:\n");
	scanf("%f%f%f",&a,&b,&c);

	d = b * b - 4 * a * c;

	if(d==0){
		printf("Both roots are same\n");
		root1 = -b / (2*a);
		printf("The root is: %f\n",root1);
	}else if(d>0){
		printf("Two roots are available\n");
		root1 = (-b + sqrt(d)) / (2*a);
		root2 = (-b - sqrt(d)) / (2*a);
		printf("The roots are %f and %f\n",root1,root2);
	}else{
		printf("Imaginary roots\n");
		float realPart,imaginaryPart;
		realPart = -b / (2*a);
		imaginaryPart = sqrt(-d)/ (2*a);
		printf("The roots are %.2fl+%.2fli and %.2f-%.2fi",realPart,imaginaryPart,realPart,imaginaryPart);

	}
	getch();

}
