/*---------------------program 01-------------------------*/
// find address and value of a variable through pointer
#include <iostream>
using namespace std;
int main()
{
	int a=10;
	int *ptr= &a;
	cout<<"Address= "<<ptr<<endl;
	cout<<"value= "<<*ptr<<endl<<endl;
	// when 1 is added , the address jump 4 bits
	cout<<"New value= "<<*ptr +1<<endl;
	cout<<"new address= "<<ptr+1<<endl;
	
}

/*==================== program 02===========================*/
// pointer in array

#include <iostream>
using namespace std;
int main(){
	int arr[10]= {1,6,3,7,9,12,87,7,54,8}; // arr acts as a pointer
	for(int i=0; i<10; i++){
		cout<<*(arr+i)<< "\t"; // number
		cout<<(arr+i)<<endl; // address
	}	
	
	return 0;
}

/*----------------------- program 03------------------*/
// swap the numbers
#include<iostream>
using namespace std;
int swap(int *a, int *b){
	int num;
	num= *a;
	*a=*b;
	*b=num;
}
int main(){
	int num1, num2;
	cout<<"enter first number=";
	cin>> num1;
	cout<<endl;
	cout<<"enter second number=";
	cin>> num2;
	cout<<endl;
	
	swap(num1, num2);
	
	cout<<"new first number= "<< num1 <<endl;
	cout<<"New second number= "<< num2;
	
	return 0;
	
}

/*========================== program 04===================*/
// Reverse the sequence 
#include <iostream>
using namespace std;
int main() {
	 int a[5],i;
 	int *ptr=a;
	 cout<<"Enter five numbers :"<<endl;
 	cin>>*ptr>>*(ptr+1)>>*(ptr+2)>>*(ptr+3)>>*(ptr+4);
 	cout<<"Numer in reverse order are:\n";
 	for(i=4;i>=0;i--)
 		cout<<*(ptr+i)<<endl;
 	return 0;
}

/*--------------------------- program 05----------------------*/
// Addition and multiply
#include <iostream>
using namespace std;
int main(){
	float a, b;
	float *p= &a;
	float*q= &b;
	cout<<"Enter first number= ";
	cin >> *p;
	cout<<"Enter 2nd number= ";
	cin>> *q;
	
	cout<<"***********Add***********"<<endl;
	float add;
	add= *p+(*q);
	cout<<"Sum="<<add<<endl;
	cout<<endl;
	cout<<"************Multiply***********"<<endl;
	float mul;
	mul= (*p)*(*q);
	cout<<"Multiple= "<< mul;
	return 0;
}

/*========================== program 06=====================*/
// subtract and divide
#include <iostream>
using namespace std;
int main(){
	float a, b;
	float *p= &a;
	float*q= &b;
	cout<<"Enter first number= ";
	cin >> *p;
	cout<<"Enter 2nd number= ";
	cin>> *q;
	
	cout<<"***********subtract***********"<<endl;
	float sub;
	sub=(*p)-(*q);
	cout<<"Subtract= "<< sub<<endl;
	cout<<"*********divide*********"<<endl;
	float div;
	div= *p/(*q);
	if(*q>0 || *q<0){
		cout<<"Divide= "<<div<< endl;
	}
	else{
		cout<<"Division is not posible"<<endl;
	}
	return 0;
	
}

/*------------------------- program 07--------------------*/
// palindrome
#include <iostream>
using namespace std;
int main()
{
	int a,rem,res,q;
	int *p= &a;
	cout<<"Enter a 3 digit number= "<< endl;
	cin>> *p;
	q=*p;
	while(q!=0){
		rem=(q)%10;
		res += (rem)*(rem)*(rem);
		(q)=(q)/10;
	}
	if(res== *p){
		cout<<"Number is palindrome";
	}
	else{
		cout<<"Not palindrome";
	}
	return 0;
}


//========================== program 08=========================
#include <iostream>
using namespace std;
int main()
{
	float rad;
	float *p= &rad;
	cout<<"enter the radius of the circle= "<<endl;
	cin>> *p;
	float PI= 3.14;
	float area;
	area= (*p)* (*p)* PI;
	cout<<"Area of the circle is="<< area;
	return 0;
	
}

//----------------------- program 09--------------------------
//table of a number
#include <iostream>
using namespace std;
int main(){
	int num;
	int *ptr = &num;
	cout<<"Enter the number= ";
	cin>> *ptr;
	for(int i=1; i<11; i++){
		cout<<*ptr<<"X"<< i<<"="<<(*ptr)*i<< endl;
	}
}



//================================== program 10==============================
//percentage
#include <iostream>
using namespace std;
int main()
{
	int a=78, b=69, c=87;
	int *p= &a;
	int *q= &b;
	int *r= &c;
	int sum= (*p)+(*q)+(*r);
	float per= (sum *100)/300;
	cout<<"percentage of the 3 subjects marks= "<<per;
	return 0;
}

//-----------------------------program 11---------------------------------
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 int i,*ptr;
 ptr=&i;
 for(*ptr=0; *ptr<=500; *ptr=*ptr+5)
 {
 cout<<*ptr<<" ";
 }
 return 0;
}

//============================== program 12==============================
#include <iostream>
using namespace std;
int main() {
	int *ip;
	int arr[] = { 10, 34, 13, 76, 5, 46 };
	ip = arr;
	for (int x = 0; x < 6; x++) {
		cout << *ip << endl;
		ip++;
	}
	return 0;
}

//-------------------------------- program 13----------------------------------
#include <iostream>
using namespace std;
int main()
{
 int num1, num2;
 cout << "Enter the first number: ";
 cin >> num1;
 cout << "Enter the second number: ";
 cin >> num2;
 int* ptr1 = &num1;
 int* ptr2 = &num2;
 if (*ptr1 == *ptr2) {
 cout << "The numbers are equal." << endl;
 } 
else {
 cout << "The numbers are not equal." << endl;
 }
 return 0;
}

//======================================= program 14===============================
#include <iostream>
using namespace std;
int main(){
	int length=10, width =10;
	int *a= &length;
	int *b= &width;
	int area;
	area= (*a)*(*b);
	cout<<"The area of rectangle is ="<< area;
	return 0;
}

//------------------------------------ program 15---------------------------------
#include <iostream>
using namespace std;
int main() {
 int ar[5], i, sum = 0;
 int *ptr;
 cout << "Enter any 5 numbers :";
 for (i = 0; i < 5; i++) {
 cin >> ar[i];
 }
 ptr = ar;
 for (i = 0; i < 5; i++) {
 	sum = sum + *(ptr + i);
 }
 cout << "\nSum of the array elements :" << sum;
 return 0;
}
 
