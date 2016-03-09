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
{
	string temp,i;
	temp=usn+|name+|branch+|sem
			temp.resize(100,$);
	f1.open("data.txt",eos::out|eos::app);
	f1<<temp;
	f1.close();
}
void student::unpack()
{
	int i=o;
	while(buffer[i]!=|)
		usn+=buffer[i++];
	i++;
	while(buffer[i]!=|)
		name+=buffer[i++];
}
void student::search(string key)
{
	f1.open
}
 
