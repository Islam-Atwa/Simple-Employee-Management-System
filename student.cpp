# include <iostream>
using namespace std;

class Template{
    private:
        string name;
        int id;
        int age;
        int phonenumber;
    public:
        void setname(string name){
            this ->name = name;
        }

        void setid(int id){
            this ->id =id;  
        }
    
        void setage(int age){
            this ->age = age;
        }

        void phonenumber(int phonenumber){
            this ->phonenumber = phonenumber;
        }

};

class Teacher: public Template{
    private:
        int sallary;
        student std[10];

    public:
        void setsallary(int sallary){
            this-> sallary =sallary;
        }

        student  setstudent(Teacher std[10]){
            for (int i = 0; i < 10; i++)
            {
                this-> std[i] = std[i];
            }
    }
    student *getstudent(){
        return std;
    }
};

//     class student
class student: public Template{
    private:
        int gpa;
        Teacher teacher[5];

    public:
    void setgpa(int gpa){
        this ->gpa =gpa;
    }
    Teacher  setTeacher(Teacher teacher[5]){
        for (int i = 0; i < 5; i++)
        {
            this-> teacher[i] = teacher[i];
        }
    }
    Teacher *getTeacher(){
        return teacher;
    }

};






int main(){
    Teacher info;
    info.
    // i
}
