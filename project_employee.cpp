// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
    // create project for mangmaent Employee
    
//create class Employee
class employee
{
    protected :
    string name;
    int id;
    float salary;
    public :
    employee(string n, int id, float s)
    {
        name =n;
        id = id;
        salary =s;
    }
    virtual float get_total_salary() = 0;
    virtual void print()
    {
        cout << "Name : " << name << "ID : " << id << "Salary : " <<salary;
    }
};

//**********************
// create class Sales 
//**********************

class sales : public employee
{
    private : 
        float gross_salary;
        float commission_rate;
    
    public :    
    
    sales (string n, int id, float s, float gs, float cr) :employee(n, id,s)
    {
        gross_salary = gs;
        commission_rate = cr;
    }
    
    float get_total_salary()
    {
        return salary + (gross_salary * commission_rate);
    }
    
    void print()
    {
        employee::print();
        cout << "gross salary : " << gross_salary <<"commission_rate :" <<commission_rate <<endl;
    }
};

class engineer : public employee
{
    private :
    string speciality;
    int experience;
    int overtime_hours;
    float overtime_hours_rate;
    
    public :
    engineer(string n, int id, float s, string sp, int ex,int oh, float ohr):employee(n, id, s)
    {
        speciality = sp;
        experience = ex;
        overtime_hours = oh;
        overtime_hours_rate = ohr;
    }
    
    float get_total_salary()
    {
        return salary + (overtime_hours * overtime_hours_rate);
    }
    
    void print()
    {
        employee::print();
        cout << "Speciality: " << speciality << " Experience: " << experience << " Overtime Hours Rate: " << overtime_hours_rate << endl;
    }
};

int main() {
    employee* ptr_emp;
    
    sales s1 ("Mohamed", 237942, 8500, 9300, 0.25);
    engineer en("Islam", 2398146, 14600, "Front End Developer", 3, 7, 21);
    
    ptr_emp = &s1;
    cout << "Total Salary: " << ptr_emp->get_total_salary() << endl;
    ptr_emp->print();
    
    ptr_emp = &en;
    cout << "Total Salary: " << ptr_emp->get_total_salary() << endl;
    ptr_emp->print();
    
    std::cout << "Try programiz.pro";

    return 0;
}


