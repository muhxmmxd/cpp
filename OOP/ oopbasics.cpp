#include <iostream>
class AbstractStudent{ //created virtual class, =0 in function makes it abstract. an abstract class is a class that cannot be instantiated and is typically used as a base class for other classes.
    //it must contain at least one pure virtual function
    //it can have member variables and normal member functions as well.
    public:
    virtual void passedBoardExam()=0;//pure virtual function. =0 makes it pure virtual function otherwise it will be just virtual function
                                    //differnce between virtual and pure virtual function is that pure virtual function must be implemented in derived class otherwise derived class will also become abstract class,
                                    // the just virtual function may or may not be implemented in derived class
                                    //cannot create object of abstract class

};
class Student : AbstractStudent //inheritance
{
    private:
    std::string Name;
    char gender;
    int year;
    int rollno;
    long int PRN;
    int assgCompleted;


    public:
    void greeting() //member function
    {
        std::cout << ("Welcome, ") << Name << std::endl;
        std::cout << ("Gender: ") << gender << std::endl;

    }
    Student(std::string nm, char gd, int yr, int rn, long int prn) //parameterized constructor
    {
        Name = nm;
        year = yr;
        rollno = rn;
        PRN = prn;
        gender=gd;
    }
    explicit Student() {}; //default constructor, explicit keyword prevents implicit conversions and copy-initialization.

    Student(int assgComp, int rn) : assgCompleted(assgComp), rollno(rn) //constructor. just a different and efficent way to initialze variables. Assign values to variables while declaring them i.e. before entering the constructor body
    {

    }

    void getAssgCompleted(){ //getter function
        std::cout << ("Assignments Completed: ") << assgCompleted << std::endl;


    }

    void setName(std::string nmm){ //setter function
        Name=nmm;

    }
    std::string getName() //getter function
    {
        return Name;
    }
    int getRollNo(){ //getter function
        return rollno;
    }
    void passedBoardExam() override //implementation of pure virtual function, must define this function otherwise Student class will also become abstract class
    {
        if(year>=1){
            std::cout<<"You passed board exam and are eligible to study in uni";
        }
        else std::cout<<"Not eligible to study in uni";
    }

};
int main()
{
    Student student1;
  //  student1.Name = "Muhammad";
    //student1.gender='M';
    //student1.year = 1;
    //student1.rollno = 39;
    student1.setName("Muhammad");
   // student1.greeting();

    Student student2("Jiya",'F', 0, 12, 0);
   // student2.greeting();
    
    student1.getName();
    student2.getName();

    Student student3(3,39);
    student3.getAssgCompleted();

    student2.passedBoardExam();

    

    
} 