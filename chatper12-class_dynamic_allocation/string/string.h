#ifndef _STRING_H__
#define _STRING_H__
#include <iostream>
#include <cstring>
#include <cctype>
class String
{
    private:
        static int count_str;
        char * str;
        int len;
    public:
        String();
        String(const char *);
        // defualt copy
        String(const String & s);
        // str = str
        String & operator=(const String &);
        ~String();
        char & operator[](int i);
        const char & operator[](int i) const;
        String & operator=(const char * s);
        String operator+(const String & s);
        int length() const ;
        static int PoolCout();
        // out put
        friend std::ostream & operator<<(std::ostream & os,const String & str) ;
        friend std::istream & operator>>(std::istream & is,String & str);
        friend bool operator==(const String & s1,const String & s2);
        friend bool operator>(const String & s1,const String & s2) ;
        friend bool operator<(const String & s1,const String & s2) ;
        friend String operator+(const char * s,const String & str);
        void StringLow()
        {
            for(int i = 0; i < len; i++)
                str[i] = std::tolower(str[i]);
        }

        void StringUpper()
        {
            for(int i = 0; i < len; i++)
                str[i] = std::toupper(str[i]);
        }

        int char_cout(char c)
        {
            int count = 0;
            if(len > 1) 
            {
                for(int i = 0; i < len; i++)
                {
                    if (c == str[i])
                        count++;
                }
                return count;
            }
            return 0;
        }
};
#endif