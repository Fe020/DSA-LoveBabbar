//initially in a class all the attribute(datatypes) and methods(functions) are private in any class
//to make them public, we use access modifier
//basically here we just write public before any attribute or method, to make them public

#include<string>
#include<iostream>
using namespace std;

class Human
{
    public:
    string name;
    int age;
    string country;
    int countryCode;
    bool happy;
 
    private: 
    bool gf;
 
    public:
    void sleep()
    {
        cout<<"sleeping"<<endl;
    }
    void eat()
    {
        cout<<"eating"<<endl;
    }

    private:
    void videoCallWithGf()
    {
        cout<<"video calling"<<endl;
    }
};

int main()
{
    Human h1;
    Human h2;
    h1.name="Ayush";
    h1.age=20;
    h1.country="India";
    h1.happy;
    h1.sleep();
    // cout<<h1<<endl;
    
    h2.name="Suhani";
    h2.age=20;
    h2.country="India";
    h2.happy;
    h2.eat();
    return 0;    
}