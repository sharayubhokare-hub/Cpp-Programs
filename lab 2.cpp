#include <iostream>
using namespace std;
class A{
    private:
    int roll;
    public: 
    string name;
    protected:
    int marks;
    public:
    void getDetails(){
        cout<<"Enter Your Roll Number: ";
        cin>>roll;
        cout<<"Enter Your Name: ";
        cin>>name;
        cout<<"Enter Your Total Marks: ";
        cin>>marks;
    }
    void showDetails(){
        cout<<"Roll no.(Private): "<<roll<<endl;
        cout<<"Name(Public): "<<name<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"Total Marks(Protected): "<<marks<<endl;
    }
};
int main(){
    B b;
    b.getDetails();
    b.showDetails();
    b.display();
    return 0;
}