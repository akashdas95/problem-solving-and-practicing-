#include "bits/stdc++.h"
#include<conio.h>
using namespace std;

class abstructAccount
{
   virtual void balanceInfo()=0;
   virtual void withdrawal(int getCash)=0;
   virtual void statement()=0;
   virtual void getAccess(int accessPin)=0;
};

class Account: abstructAccount
{
    int pin;
    int balance;
    bool accessFlag=false;
public:
    string name;

    Account(string Name)//constructor for account class
    {
        name=Name;
    };

    void setPin(int Pin)//setter for pin
    {
        pin=Pin;
    };

    int getPin()
    {
        return pin;
    }

    virtual void getAccess(int accessPin)
    {
        if(accessPin == getPin())
        {
            accessFlag=true;
        }
        else
        {
            accessFlag=false;
        }
    };

    bool haveAccess()//for derived class introduction access.
    {
        if(accessFlag)
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    void setBalance(int Balance)//setter for balance
    {
        if(accessFlag)
        {
            balance=Balance;
        }
        else
        {
            cout<<"Please enter to your account first\n";
        }

    };

    int getBalance()//getter for balance
    {
        return balance;
    };



    virtual void Introduction()
    {
        if(accessFlag)
        {
            cout<<"welcome mr./mrs. "<<name<<" to Distopian Bank.\n";
        }
        else
        {
            cout<<"Please enter to your account first\n";
        }
    };

    void balanceInfo()//abstract class method
    {
        if(accessFlag)
        {
            cout<<"your balance is now "<<getBalance()<<" BDT.\n";
        }
        else
        {
            cout<<"Please enter to your account first\n";

        }

    };

    void statement()
    {
        if(accessFlag)
        {
            cout<<"\nyour remaining balance is "<<getBalance()<<" BDT.\nThank you.Have a nice day.\n";
        }
        else
        {
            cout<<"Please enter to your account first\n";
        }

    };

    void withdrawal(int getCash)//abstract class method
    {
        if(accessFlag)
        {
           int remainingBalance = getBalance();
           if(remainingBalance >= getCash)
           {
               remainingBalance -= getCash;
               setBalance(remainingBalance);
               cout<<"you have withdrawn "<<getCash<<" BDT.\nThnx for your trust.\n";
               cout<<"do u want a mini statement?\nif yes then press y or otherwise n \n";
               char needStatement;
               needStatement = getche();
               if(needStatement == 'y')
                  {
                    statement();
                  }
               else if(needStatement=='n')
               {
                   cout<<"Thank you.Have a nice day.\n";
               }
                else
               {
                   cout<<"\nyou have pressed a wrong key.\n";
               }

             }
             else
             {
                cout<<"sorry you do not have sufficient balance.\n ";
             }
        }
        else
        {
            cout<<"Please enter to your account first\n";
        }

    };

};

class VipAccount:public Account
{
public:
    int star;
    VipAccount(string Name, int Star):Account(Name)
    {
        star=Star;
    }
    void Introduction()
    {
        if(haveAccess())
        {
            cout<<"welcome mr./mrs. "<<name<<" to Distopian Bank.\n";
            cout<<"you are a "<<star<<" star member.\n";
        }
        else
        {
            cout<<"Please enter to your account first\n";
        }
    }
};

class RegularAccount:public Account
{
public:
    string badge;
    RegularAccount(string Name, string Badge):Account(Name)
    {
        badge = Badge;
    }
     void Introduction()
    {
        if(haveAccess())
        {
            cout<<"welcome mr./mrs. "<<name<<" to Distopian Bank.\n";
            cout<<"you are a "<<badge<<" member.\n";
        }
        else
        {
            cout<<"Please enter to your account first\n";
        }
    }

};

/*class createAccount: public VipAccount, public RegularAccount
{
public:
    string accountType;
    createAccount(string Name, string Badge, string AccountType)
    {
        accountType=AccountType;
    };
    void accountCreate()
    {
        if(accountType=="vip")
        {
            cout<<"enter your name and star rating\n";
            VipAccount newUser = VipAccount(name,star);
            Account* user = &newUser;
            cout<<"enter the pin\n";
            user->setPin();
            cout<<"enter your balance\n";
            user->setBalance();
        }
        else if(accountType=="regular")
        {
            cout<<"enter your name and badge rating\n";
            RegularAccount newUser = RegularAccount(name,badge);
            Account* user = &newUser;
            cout<<"enter the pin\n";
            user->setPin();
            cout<<"enter your balance\n";
            user->setBalance();
        }
        else
        {
            cout<<"Account type not supported\n"
        }
    }
};*/

main()
{
    VipAccount Akash = VipAccount("akash",5);
    Account* akash = &Akash;
    akash->setPin(123);
    akash->getAccess(123);
    akash->Introduction();
    akash->setBalance(40000);
    akash->balanceInfo();
    akash->withdrawal(7500);

    /*RegularAccount Mitu = RegularAccount("mitu","silver");
    Account* mitu = &Mitu;
    mitu->setPin(123);
    mitu->getAccess(123);
    mitu->Introduction();
    mitu->setBalance(15000);
    mitu->balanceInfo();
    mitu->withdrawal(2500);*/

    return 0;
}
