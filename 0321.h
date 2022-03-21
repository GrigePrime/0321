#include <iostream>
#include <iomanip>
using namespace std;

class Staff{
    private: 
        string name;
        string id;
        string gender;
        string Email;
        int phonenum;
        string unit;
        string service;
        string agent;
        string date;
        int dateout = 0;
        string job;
        int seniority;
        int today = 20220321;
        string date1, date2, date3, dateoutput;
    
    public:
        void showinfo();
        void setname(string newname);
        void setid(string newid);
        void setgender(string newgender);
        void setEmail(string newEmail);
        void setphonenum(int newphonenum);
        void setunit(string newunit);
        void setservice(string newserivice);
        void setagent(string newagent);
        void setdate(string newdate);
        void setjob(string newjob);
        string showname();
        void cut(string date,int dateout, string, string, string, string);
        int seniortycul(int date, int today);
        string getData();

        bool operator>(const Staff &);
        bool operator>=(const Staff &);
        bool operator<(const Staff &);
        bool operator<=(const Staff &);
        bool operator==(const Staff &);
};
