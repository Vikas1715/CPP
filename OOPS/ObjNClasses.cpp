#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    void printDetails()
    {
        cout << "The name of the employee is: " << this->name << " and his salaray is: $" << this->salary << endl; //********
    }
    Employee(string name, int salary, int pass)
    {
        this->name = name;
        this->salary = salary;
        this->pass = pass;
    }
    void getSecret(){
        cout<<"Employee's password is: "<<this->pass<<endl;
    }

private:
    int pass; // Cannot be directly accessed

};


class Programmer : public Employee
{
public:
    int errors;
};


int main()
{
    // Employee emp1;
    // emp1.name = "Vivek";
    // emp1.salary = 789;
    // // cout<<"The name of the first employee is: "<<emp1.name<<" and his salaray is: $"<<emp1.salary<<endl;
    // emp1.printDetails();

    Employee emp2("Nitin", 987, 12345);
    emp2.printDetails();
    emp2.getSecret();
    return 0;
}