//constructor- a function, with no return datatype, used to assign values to the objects of class.
//constructor- an instance of class
//a class always have its constructor, if wse don't define them, they define them by themselves
//a class can have multiple constructors

#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int subject;
    bool gf;
    char lucky;
    int friends;

    //constructor defined by class
    // Student{};
    //constructor defined by us to check if it exists
    Student()
    {
        cout<<"im a constructor ";
    }
    Student(string n,int r, int s,bool gff,char luck,int fr)
    {
        name=n;
        roll=r;
        subject=s;
        gf=gff;
        lucky=luck;
        friends=fr;
    }
    Student(string n,int r, int s,char luck,int fr)
    {
        name=n;
        roll=r;
        subject=s;
        lucky=luck;
        friends=fr;
    }
};

int main()
{
    Student s1;
    s1.name="noName";
    cout<<s1.name<<endl;
    Student s2("Ayush",25,5,1,'N',3);
    cout<<s2.name<<endl;
    Student s3("Tan",26,4,'Y',50);
    cout<<s3.name<<endl;
}