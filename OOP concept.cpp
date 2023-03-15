 #include "bits/stdc++.h"
using namespace std;

class AbstractEmployee{
   virtual void askforpro()=0;
   virtual void eligible()=0;
};

class employee:AbstractEmployee{
protected:
   string name;
public:
   string company;
   int age;

   void setname(string Name)//setter for name
   {
       name=Name;
   }
   string getname()//getter for name
   {
       return name;
   }
   void setage(int Age)//setter for age
   {
       age=Age;
   }
   int getage()//getter for age
   {
       return age;
   }
   //constructor
   employee(string Name,string com, int Age)
   {
       name=Name;
       company=com;
       age=Age;
   }
   //methods
   void Introduce()
   {
      cout<<name<<company<<age;
   }
   void askforpro()
   {
       if(age>=30)
       {
           cout<<"can promote";
       }
       else
       {
           cout<<"can not promote";
       }
   }
   void eligible()
   {
       if(company == "ssel")
       {
           cout<<"you r eligible";
       }
       else
       {
           cout<<"sorry you r not eligible";
       }
   }
   virtual void work()
   {
       cout<<name<<" is doing work by using";
   }

};

class developer:public employee
{
public:
    string favprolang;
    //constructor
    developer(string name, string company, int age, string FavProLang):employee(name,company,age)
    {
        favprolang=FavProLang;
    };
    //method
    void work()
    {
        cout<<name<<" is using "<<favprolang<<" to create a App. ";
    }
};

class teacher:public employee
{
 public:
     string subject;
     //constructor
     teacher(string name, string company, int age, string Subject):employee(name,company,age)
     {
         subject=Subject;
     };
     //method
     void work()
     {
         cout<<name<<" is teaching "<<subject<<" in class";
     }
};


main()
{
    ///employee em1 = employee("akash","ssel",25);
    ///employee em2 = employee("mitu","home",17);
    developer dev1 = developer("akash","ssel",25,"c++");
    employee* em1= &dev1;
    em1->work();
    //dev1.eligible();
    teacher tea1 = teacher("mitu","school",22,"political science");
    employee* em2= &tea1;
    em2->work();

    //tea1.eligible();
    return 0;
}
