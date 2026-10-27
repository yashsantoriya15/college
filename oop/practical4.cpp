#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int marks;
    public:
    void input(){
        cout<< "Enter name: ";
        cin>>name;

        cout << "Enter marks: ";
    }
    void display(){
        cout <<"Name: "<< name <<endl;
        cout <<"Marks: "<< marks <<endl;

    }
};

int main()
{
    int n;
    cin >> n;

    Student* student =  new Student[n];

    for (int i = 0; i < n; i++)
    {
        cout <<"\nStudent" << i+1<< endl;
      student[i].input();
    }

    cout << "\n student details\n";

     for (int i = 0; i < n; i++)
    {
      student[i].display();
    }
    


    return 0;
}