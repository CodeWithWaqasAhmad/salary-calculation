#include <iostream>

using namespace std;

int main()
{
    float total_salary,basic_salary,gross_salary,medical,house_rent,convence,tax;

    cout<<"Enter the basic salary of Ahmad"<<endl;
    cin>>basic_salary;

    medical = basic_salary * 0.4;
    house_rent = basic_salary * 0.15;
    convence = basic_salary * 0.20;

    gross_salary = basic_salary+medical+house_rent+convence;

    tax = gross_salary * 0.1;

    total_salary = gross_salary - tax;

    cout<<"\nthe total salary of ahmad is "<<total_salary;
    return 0;
}
