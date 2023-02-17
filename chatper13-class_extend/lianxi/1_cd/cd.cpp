#include "cd.h"
#include <cstring>
#include <iostream>

Cd::Cd() {
    performersp[0] = '\0';
    lable[0] = '\0';
	selections = 0;
	playtime = 0.;}

Cd::Cd(char *s1, char *s2, int n, double x)
{
    strncpy(performersp, s1, 50);
    strncpy(lable, s2, 20);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &cd)
{
    strcpy(performersp, cd.performersp);
    strcpy(lable, cd.lable);
    selections = cd.selections;
    playtime = cd.playtime;
}

Cd &Cd::operator=(const Cd &cd)
{
    if (&cd == this)
        return *this;
    strcpy(performersp, cd.performersp);
    strcpy(lable, cd.lable);
    selections = cd.selections;
    playtime = cd.playtime;
    return *this;
}
Cd::~Cd()
{}
void Cd::Report() const
{
    using std::cout;
    using std::endl;
    cout << "performersp: " << performersp << "  lable: " << lable << "  selections: " << selections << "  playtime: " << playtime << endl;
}

Classic::Classic(char *s3, char *s1, char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    strcpy(mainwork, s3);
}

Classic::Classic() : Cd()
{
    mainwork[0] = '\0';
}

Classic::Classic(const Classic & c):Cd(c)
{
    strcpy(mainwork,c.mainwork);
}

Classic::~Classic() {}

Classic &Classic::operator=(const Classic &c)
{
    if (&c == this)
        return *this;
    Cd::operator=(c);
    strcpy(mainwork,c.mainwork);
    return *this;
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << " mainwork: " << mainwork << std::endl;
}