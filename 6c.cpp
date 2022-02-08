#include<iostream>
using namespace std;
class Person
{
	public:
	char name[10];
	int age;
	virtual void getdata()=0;
	virtual void putdata()=0;
		
 } ;
 class professor:public Person
 {
 	int numberofpublications;
 	public:
 		void getdata()
		 {
		 	cout<"enter professor name:";
		 	cin>>name;
		 	cout<<"enter age :";
		 	cin>>age;
		 	cout<<"enter number of publications:";
		 	cin>>numberofpublications;
		 }
		 void putdata()
		 {
		 	cout<<"professor name is: "<<Person::name;
		 	cout<<"age is: "<<Person::age;
		 	cout<<"number of publications is: "<<person::numberofpublications;
		 }
 };
 class Student:public Person
 {
 	int mark;
 	public:
 		void getdata()
 		{
 			cout<<"student name :";
 			cin>>Person::name;
 			cout<<"enter age:" ;
 			cin>>Person::age;
 			cout<<"enter marks: ";
 			cin>>Person ::mark;
		 }
		 void putdata()
		 {
		 
		 cout<<"student name is:"<<Person::name;
		 cout<<"age is; "<<Person::age;
		 cout<<"marks is: "<<Person::mark;
	}
		 };
 int main()
 {
 	person *p1,*p2;
 	professor P;
 	student S;
 	P1=&P;
 	P2=&S;
 	P1->getdata();
 	P2->getdata();
 	P1->putdata();
 	P2->putdata();
 	return 0;
 }
