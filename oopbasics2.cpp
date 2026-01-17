#include <iostream>
class AbstractEmployee
{
    virtual void askForPromo() = 0;
};
class Employee : AbstractEmployee
{
private:
    std::string name;
    int age;
    int employeeID;

    // getter methods
public:
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
    void askForPromo() override
    {
    }
};

class Developer : public Employee // necessary to write public as public members of the base
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
};

// main method
int main()
{
    Developer dev1("Muhammad", 18, 209811, "SWE1");

    Developer dev2("Jiya", 17, 209812, "SWE2");

    Developer dev3("John", 18, 209813, "Finances manager");
    // std::cout << dev3.getName()<< " role is "<< dev3.getRole() << std::endl;

    Manager mg1("Umar", 25, 211001, "Finance");

    Manager mg2("Tim", 22, 211002, "AI");

    return 0;
}
