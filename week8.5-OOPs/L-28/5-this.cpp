#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    string name;
    int id;
    int age;
    string gender;
    bool gf;
    Student(string name,int id,int age,string gender,bool gf)
    {
        this->name=name;
        this->id=id;
        this->age=age;
        this->gender=gender;
        this->gf=gf;
    }
};
int main()
{
    Student s1("ayush",22,20,"male",1);     //memory allocated in stack( km space hota h yahan)
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    //int *a= new int(5);   means int a=5 is allocated in heap memory of the
    //similarly for classes: 
    Student *s2= new Student("suhani",10,20,"female",0);//memory allocated at heap(bhot space hota h yahan p,can be deleted as well)
    cout<<s2->name<<endl;
    cout<<(*s2).age<<endl;
    delete s2;
    return 0;
}