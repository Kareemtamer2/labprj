#ifndef LOGIN_H
#define LOGIN_H
#include<map>
#include<string>

class login
{
private:
    std::map<std::string,std::string> login_record;
public:
    login();
    bool check();
    void registering ();
};
#endif // LOGIN_H
