class Cd
{
    private:
    char performersp[50];
    char lable[20];
    int selections;
    double playtime;
    public:
    Cd(char * s1,char * s2, int n, double x);
    Cd(const Cd & cd);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & cd);
};

class Classic : public Cd
{
    private:
        const static int work_size = 100;
        char mainwork[work_size];
    public:
        Classic(char * s3,char * s1,char * s2, int n, double x);
        Classic();
        Classic(const Classic & c);
        virtual ~Classic();
        Classic & operator=(const Classic & c);
        virtual void Report() const;
};