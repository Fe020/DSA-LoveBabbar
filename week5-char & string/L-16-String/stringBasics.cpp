#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    // string string_name
    string name;
    cout<<"entrer the string: ";
    
    // cin>>name;
    getline(cin,name);
    
    //name.length() or name.size()
    cout<<"size of the string is: "<<name.length()<<endl;

    //name.at(5) or name[5]
    cout<<"index 5 of the string is: "<<name.at(5)<<endl;
    cout<<"string is: "<<name<<endl;

    //if string is empty
    cout<<"1 if string is empty,0 if not (by name.empty()) :"<<name.empty()<<endl;

    //name.front() and name.back() to print 1st ans last element
    cout<<"front element and last element are respectively: "<<name.front()<<" and "<<name.back()<<endl;






    //append- to join 2 strings


    string usn=" 1NT21C049";
    cout<<name.append(usn)<<endl;

    cout<<endl;



    //erase

    //erase using 3 types: 
    // 1.by marking the index- add.erase(0)
    // 2.by marking 1st index and next n index we want to remove- add.erase(add.begin(),3)
    // 3.by marking from index to index- add.erase(add.begin()+2,add.end()-2)
    
    string add="bangalore";
    cout<<"new string is: "<<add<<endl;
    add.erase(add.begin()+2);           
    //add.erase(add.begin()+n);     removing 0+Nth index
    cout<<"updated string is: "<<add<<endl;    
    add.erase(1,3);                     
    //add.erase(m,n);      remove n elements starting from m(as index 1)   
    cout<<"updated string is: "<<add<<endl;
    add.erase(add.begin()+1,add.end()-1);
    //add.erase(add.begin()+m,add.end()-n);     remove from m to n elements
    cout<<"updated string is: "<<add<<endl;





    //find-findsa string 2 in string 1- npos means no position is found
    //str1.find(str2)


    string str1="india is a country,bihar is a state";
    string str2="country";
    if(str1.find(str2)== string::npos)
    {
        cout<<"str2 is not found in str1"<<endl;
    }
    else if(str1.find(str2) != string:: npos)
    {
        cout<<"str2 is found in str1"<<endl;
    }




    // compare- checks if both the strings are equal
    //if 0 -equal
    //if <0 -str2 is less in size or 1st non-matching character is lower in the compared string 
    //if >0-str2 is more in size or 1st non-matching character is greater in the compared string 
    
    if(str1.compare(str2)== 0)
    {
        cout<<"both strings are equal"<<endl;
    }
    else
    {
        cout<<"str2 is not equal to the str1"<<endl;
    }


    string example="today is world cup final";
    cout<<example.substr(9,5)<<endl;
    return 0;

}