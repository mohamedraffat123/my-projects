
#include <iostream>
#include<cmath>
using namespace std;

struct street {
    string city;
    string country;
};

struct marital_status {
    string gender;
    string married;
};

struct charachter {
    string name;
    int age;
};


struct company {
    double monthly_salary;
    double yearly_salary;
    street x;
    marital_status v;
    charachter person;
};
enum gender{male, female};
enum miratal_status{single,married };
enum car{BMW, Mercedes, Toyota, GMC };
int main()
{
    string s,gend_string,mirital_string;
    int n,gend,miratal;
    gender z,l;
    z = gender::male;
    l = gender::female;
    miratal_status p,u;
    p = miratal_status::single;
    u = miratal_status::married;
    int choice;
    company person1;
    car a,b,c,d;
    b = car::Mercedes;
    a = car::BMW;
    c = car::Toyota;
    d = car::GMC;
    cout << "hallo to the company of halola";
    cout << "if you are new please print 1 if not print 0\n";
    cin >> choice;
    while (choice != 0) {
        cout << "eneter your name,please\n";
        cin>>person1.person.name;
        cout << "\nenter your age\n";
        cin >> person1.person.age;
        cout << "\nenter your monthly salary that you expected from this work\n";
        cin >> person1.monthly_salary;
        cout << "\nenter your yearly salary that you expected from this work\n";
        cin >> person1.yearly_salary;
        cout << "\n enter your city\n";
        cin >> person1.x.city;
        cout << "\n enter your country\n";
        cin >> person1.x.country;
        cout << "\nnow, you have choice to chooce your car that our company will support you \n";
        //BMW, Mercedes, Toyota, GMC 
        cout << "\nno.0 bmw\n" << "no.1 Mercedes\n" << "no.2 Toyota\n" << "no.3 GMC\n";
        cout << " enter your choice"<<endl;
        cin >> n;
        if (a==n) {
            s = "BMW";
        }
        else if(b==n) {
            s = "Mercedes";
        }
        else if (c==n) {
            s = " Toyota";
        }
        else if (d==n) {
            s = "GMC ";
        }
        cout << "\n form here please your choice will be 0 or 1"<<endl;
        cout << "choose your gender\n";
        cout << "a) male \t\t" << "b) female\n";
        cin >> gend;
        if (l  == gend) {
            gend_string = "male";
        }
        else if (z + 1 == gend) {
            gend_string = "female";
        }
        cout << "are you \n" << "a) married\n" << "b) single\n";
        cin >> miratal;
        if (p == miratal) {
            mirital_string = "single";
        }
        else if (u == miratal) {
            mirital_string = "married";
        }
        cout << "\neneter 0 to close to appear your informtion\n";
        cin >> choice;
    }
    cout << "\nyour name is \t " << person1.person.name<<endl;
    cout << "your age is \t" << person1.person.age << endl;
    cout << "your monthly salary that you expected from this work is \t" << person1.monthly_salary << endl;
    cout << "your yearly salary that you expected from this work is \t" << person1.yearly_salary << endl;
    cout << " your city is \t" << person1.x.city<<endl;
    cout << "your country is \t" << person1.x.country << endl;
    cout << "your gender is\t" << gend_string << endl;
    cout << " your mirtal status is\t" << mirital_string << endl;
    cout << " the car that the company that take you for this masion is\t" << s<<endl;
    cout << "***************************************************************";
    return 0;

}

