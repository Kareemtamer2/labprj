#include <iostream>
#include<map>
#include<string>
class login_class
{
    private:
    std::map<std::string,std::string> LoginRecord;
    std::map<std::string,std::string>:: iterator iter;
    public:
    void registering (std::string RegisterUser, std::string RegisterPass)
    { 
        
    }
    int check(const std::string &UserCheck, const std::string &PassCheck)
    {
        for(iter=LoginRecord.begin();iter!=LoginRecord.end();++iter)
        {
            if(iter->first==UserCheck)
            {
                if(iter->second==PassCheck)
                {
                    return 1;
                }
                else
                {
                    return 2;
                }
            }
        }
        return 0;
    }
   void login()
    {
        std::string User; 
        std::string Pass;
        std::cout<<"Please enter your User Name\n";
        std::cin>>User;
        std::cout<<"Please enter your Password\n";
        std::cin>>Pass;
        if(check(User,Pass)==1)
        {
            std::cout<<"Welcome"<<" "<<User<<"\n";
        }
        if(check(User,Pass)==2)
        {
            std::cout<<"INVALID PASSWORD, TRY AGAIN"; 
        }
        if(check(User,Pass)==0)
        {
            std::cout<<"This user does NOT exit, Automatically registring right now\n";
        }
    }
};