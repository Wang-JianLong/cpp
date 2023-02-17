#include <string>
using std::string;

class Worker
{
    private:
        string fullName;
        long id;
    public:
        Worker(): fullName("no one"),id(0L) {}
        Worker(const string & name,long n): fullName(name),id(n){}
        virtual ~Worker();
        virtual void Set();
        virtual void Show() const;
};

class Waiter : virtual public Worker
{
    private:
        int panache;
    public:
        Waiter():Worker(){}
        Waiter(const string & name,long n,int p = 0):Worker(name,n),panache(p){}
        Waiter(const Worker & worker,int p = 0):Worker(worker),panache(0){}
        void Set();
        void Show() const;
};

class Singer: virtual public Worker
{
    protected:
        enum {other,alto,contralto,soprano,bass,barione,tenot};
        enum { Vtype = 7 };
    private:
        static char *pv[Vtype];
        int voice;
    public:
        Singer() : Worker(),voice(other){}
        Singer(const string & s,long n,int v  = other): Worker(s,n),voice(v){}
        Singer(const Worker & wk, int v = other):Worker(wk),voice(v){}
        void Set();
        void Show() const;
};

class WaiterSinger : public Waiter, public Singer
{
    private:
        // string wsname;
    public:
        WaiterSinger(const Worker & wk,int p = 0, int v = Singer::other);
        void Set(){};
        void Show() const {
             
        };
};
// 基类为虚时 禁止信息通过中间类自动传递给基类 Waiter(wk,p) Singer(wk,v) vk是无效的
WaiterSinger::WaiterSinger(const Worker & wk,int p = 0, int v = Singer::other)
:Waiter(wk,p),Singer(wk,v) , Worker(wk){}