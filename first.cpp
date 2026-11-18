// #include<iostream>
// using namespace std;

// class Student
// {
//     private:
//     string name;
//     int age;
//     string grade;

//     public:
//     void setname(string n){
//         name=n;
//     }

//     void getname(){
//         cout<<name<<endl;
//     }
// };

// int main() {
    
//     Student s1;

//     s1.setname("pranav");
//     s1.getname();

// }


#include<iostream>
using namespace std;

class Student
{
    public:
    int age;
    string name;
    string grade;
};

int main(){
    Student *s = new Student;

    (*s).name="pranav";
    s->age=22;

    cout<<(*s).name<<endl;
    cout<<s->age<<endl;
}