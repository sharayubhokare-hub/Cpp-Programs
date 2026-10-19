  #include <iostream>
using namespace std;
class Student{
    string name;
    int rollno;
    int age;
    public:
    void getDetails(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your Roll No.: ";
        cin>>rollno;
        cout<<"Enter your Age: ";
        cin>>age;
    }
    void showDetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.:"<<rollno<<endl;
        cout<<"Age: "<<age<<endl; 
    }
};
int main(){
    Student s;
    s.getDetails();
    s.showDetails();
    return 0;
}









