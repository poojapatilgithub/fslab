//============================================================================
// Name        : lab2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Student
{
	   string name;
       string usn;
       string branch;
       string sem;
public:
       void pack();
       void unpack();
       void modify();
	   void search();
	   void del();
	   void read();
};
int main()
{
	int ch;
	fstream f,filename;
	Student s;
	cout<<"1.insert 2.search 3.delete.4.modify";
    cout<<"enter the choice";
	cin>>ch;
	while(1)
	{
		switch(ch)
		{
			case 1:
				s.read();
				s.pack();
				break;
			case 2:
				//s.search();
				break;
			case 3:
				//s.modify();
				break;
			case 4:
				//s.del();
				break;
		}
	}
}

void Student::read()
{
	cout<<"enter name"<<endl;
	cin>>name;
	cout<<"enter usn"<<endl;
	cin>>usn;
	cout<<"enter branch"<<endl;
	cin>>branch;
	cout<<"enter sem"<<endl;
	cin>>sem;
}
}
}
void student::pack()
