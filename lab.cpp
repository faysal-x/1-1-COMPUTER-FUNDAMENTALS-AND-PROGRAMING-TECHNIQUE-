#include<iostream>
using namespace std;
class customer 
{
    public:
    string name;
    int age;
    int id;

    void display()
    {
        cout<<"name:"<<name<<endl<<"age:"<<age<<endl<<"id:"<<id<<endl;
    }
    void setdata(string n,int a,int i)
    {
        name=n;
        age=a;
        id=i;
    }
};
int main()
{
    customer f1,f2,f3;
    f1.setdata("Sadman", 20 , 20);
    f1.display();
    f2.setdata("Shafi",21,19);
    f2.display();
    f3.setdata("Mead",20,06);
    f3.display();
    return 0;


}