#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void askForPromotion() = 0; //virtual makes this method obligatory 
};

class Employee:AbstractEmployee{
    private: // fully private
        string Name;
        int Age;     // these 2 are now encapsulated

    protected: // kind of mid-way
        string Company;

    public: // fully public 
            void setName(string name){ //setter method
                Name = name;
            }
            string getName(){ //getter method
                return Name;
            }

            void setCompany(string company){ //setter method
                Company = company;
            }
            string getCompany(){ //getter method
                return Company;
            }

            void setAge(int age){ //setter method with check
                if (age >= 18){
                    Age = age;
                }
            }
            int getAge(){ //getter method
                return Age;
            }

            void introduceYourself(){
                std::cout<< "Name: "<< Name <<std::endl;
                std::cout<< "Company: "<< Company <<std::endl;
                std::cout<< "Age: "<< Age <<std::endl;
            }

            Employee(string name, string company, int age){
                Name=name;
                Company=company;
                Age=age;
            }

            void askForPromotion(){
                if (Age > 30)
                    std::cout<<Name<<" got promoted!"<<std::endl;
                else
                    std::cout<<Name<<", sorry no promotion for you."<<std::endl;
            }

            virtual void work(){ // checks for the most derived implementation and executes that
                std::cout<<Name<<" is working."<<std::endl;
            }
};

class Developer:public Employee{
    public:
        string fav_language;
        Developer(string name, string company, int age, string langauge)
            :Employee(name, company, age)
            {
                fav_language = langauge;
            }

        void fix_bug(){
            std::cout<<getName()<<" fixed the bug using "<<fav_language<<" at "<<Company<<std::endl;
        }

        void work(){
            std::cout<<getName()<<" is coding."<<std::endl;
        }

};

class Teacher: public Employee{
    public:
        string subject;
        void prepareLesson(){
            std::cout<<getName()<<" is preparing "<<subject<<" lesson"<<std::endl;
        }

        Teacher(string name, string company, int age, string sub)
            :Employee(name, company, age){
                subject = sub;
            }

        void work(){
            std::cout<<getName()<<" is teaching."<<std::endl;
        }

};



int main(){
    Employee emp1("Alerax", "ICL", 20);
    // // emp1.Name = "Alerax";
    // // emp1.Company = "Imperial College";
    // // emp1.Age = 20;
    // emp1.introduceYourself();

    Employee emp2 = Employee("Heiley", "UCL", 34);
    // emp2.introduceYourself();

    // emp1.setAge(18);
    // std::cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old now!"<<std::endl;
    // emp1.introduceYourself();

    // emp1.askForPromotion();
    // emp2.askForPromotion();

    Developer emp3("Alvi", "MMU", 35, "C++");
    // emp3.fix_bug();
    // emp3.askForPromotion();
    emp3.work();

    

    Teacher emp4 = Teacher("Jack", "Cool School", 30, "Physics");
    // emp4.prepareLesson();
    // emp4.askForPromotion();
    emp4.work();



    //The most common use of polymorphism is when a parent class 
    //reference is used to refer to a child class object
    Employee* e1 = &emp3;
    Employee* e2 = &emp4;

    e1->work();
    e2->work();

    

}