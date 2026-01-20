#include <iostream>
class AbstractEmployee
{
    virtual void askForPromo()=0;
};
class Employee : AbstractEmployee
{
private: //not at all accesible outside this class
    std::string name;
    int employeeID;

protected: //accesible in derived classes but not accesible elsewhere
    int age;
    // getter methods
public: //accesible anywhere in the program
    std::string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;   
    }
    int getEmployeeID()
    {
        return employeeID;
    }
    // constructors
    Employee() {};
    Employee(std::string nm, int ag, int empID) : name(nm), age(ag), employeeID(empID)
    {
        if (age < 18 || age > 58)
        {
            std::cout << name << " is not eligible to work" << std::endl;
            employeeID = 0;
            ;
        }
        else
        {
            std::cout << name << " is hired with Employee ID: " << employeeID << std::endl;
        }
    }
    virtual void askForPromo() // base class method made virtual to achieve polymorphism.
                                // without the 'virtual' keyword the function called by employee pointer 
                                // will always run this function and not the specific function specified in respective derived classes
    {
        std::cout<<"Talk to head manager personally to enquire whether you can get a promotion or not.";
    }
};

class Developer : public  Employee // necessary to write public as public members of the base
                                  //  class become private in the derived class,
                                  //  making them inaccessible from outside the derived class.
{
    using Employee::Employee; // inherit constructors from base class, they are not inherited by default
private:                      // the :: means scope resolution operator
    std::string role;

public:
    std::string getRole()
    {
        return role;
    }
    Developer(std::string nm, int ag, int empID, std::string rl) : Employee(nm, ag, empID), role(rl) // what this does is it calls
                                                                                                     // the constructor of base class Employee to initialize its members
    {
        if (role != "SWE1" && role != "SWE2" && role != "SWE3" && role != "JD" && role != "Intern")
        {
            std::cout << nm << " is not assigned any valid role" << "\n"
                      << std::endl;
            role = "Unassigned";
        }
        else
        {
            if (getAge() >= 18 && getAge() < 59)
                std::cout << "Developer Role: " << role << "\n"
                          << std::endl;
            else
                std::cout << std::endl;
        }
    }
    void askForPromo()//override 
    {   
        int bugsFixed;
        std::cout<< getName()<<", how many bugs did you fix this year? Give an estimate number:";
        std::cin>>bugsFixed;
        if(bugsFixed>=50)
            std::cout<<"Congrats, you're promoted! Contact head manager for details.\n\n"<<std::endl;
        
        else
            std::cout<<"Sorry, you're not promoted yet. Keep working hard!\n\n" <<std::endl;


    }
};

class Manager : public Employee
{
    std::string department;

public:
    Manager(std::string nm, int ag, int empID, std::string dept) : Employee(nm, ag, empID), department(dept)
    {
        std::cout << "Managing Department: " << department << "\n"
                  << std::endl;
    }
    using Employee::Employee;
    void askForPromo() //override
    {
        std::cout<<getName()<<", have you made a decision this year which made a significant positive impact on the company? Enter 0 for no , 1 for yes.";
        bool decision;
        std::cin>>decision;
        if(decision)    
            std::cout<<"Congrats, you're promoted! Contact head manager for details.\n\n"<<std::endl;
        else
            std::cout<<"Sorry, you're not promoted yet. Keep working hard!\n\n" <<std::endl;

    }
};

// main method
int main()
{
    Developer dev1("Muhammad", 18, 209811, "SWE1");

    Developer dev2("Jiya", 17, 209812, "SWE2");

    Developer dev3("John", 18, 209813, "Finances manager");

    Manager mg1("Umar", 25, 211001, "Finance");

    Manager mg2("Tim", 22, 211002, "AI");

    Employee *e1=&dev1;
    Employee *e2=&dev2;
    Employee *e3=&dev3;
    Employee *e4=&mg1;
    Employee *e5=&mg2;

    // the '->' operator is used to access members of a class/struct through a pointer
    // it is just a shortcut for dereferencing the pointer and then implementing . operator
    // for e.g. e1->askForPromo is exactly same as (*e1).askForPromo()

    e1->askForPromo(); //polymorphism in action
    (*e3).askForPromo(); //the benefit of polymorphism here is we don't need to know employee is a developer or
                        // a manager to and run askforpromotion function
                        //there are different parameters on which a developer and a manager gets promotion.
    e5->askForPromo(); //for that, we have different implementations of askforpromotion function in derived classes
    e2->askForPromo();
    e4->askForPromo();






    return 0;
}
