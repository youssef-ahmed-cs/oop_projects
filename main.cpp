#include<bits/stdc++.h>
using namespace std;
class Student
{
private:
    int id;
    string fristName;
    string secondName;
public:
    Student(int id, string fristName, string secondName)
    {
        this->id=id;
        this->fristName=fristName;
        this->secondName=secondName;
    }
    string Get_fullName()
    {
        return fristName.append(secondName);
    }
    int get_id()
    {
        return id;
    }
    void set_first_name(string fristName)
    {
        this->fristName=fristName;
    }
    void set_second_name(string secondName)
    {
        this->secondName=secondName;
    }
    void set_id(int id)
    {
        this->id=id;
    }

};
int main()
{
    Student obj(44611,"youssef ","ahmed");
    cout<<"your fullname: "<<obj.Get_fullName()<<"\n";
    cout<<"id: "<<obj.get_id()<<"\n";
    return 0;
}