#include <iostream>
#include <algorithm>

using namespace std;
class Exception1 : public std::exception
{
public:
    string msg;
    Exception1()
    {
    }
    Exception1(const char *re) : msg(re) {}
    virtual const char *what() const throw() override
    {
        return msg.c_str();
    }
    virtual ~Exception1() throw() {}
};
class Exception2 : public Exception1
{
public:
    string msg;
    Exception2(const char *re) : msg(re) {}
    virtual const char *what() const throw() override
    {
        return msg.c_str();
    }
    virtual ~Exception2() throw()
    {
    }
};

int main()
{
    try
    {
        throw Exception1("tex");
    }
    catch (Exception1 &ec)
    {
        cout << ec.what() << endl;
    }

    try
    {
        throw Exception2("tex2");
    }
    catch (Exception2 &ec)
    {
        /* cout<<"hello"<<endl; */
        cout << ec.what() << endl;
    }
}
