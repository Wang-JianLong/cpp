#ifndef _GOLG_H_
#define _GOLG_H_

const int Len = 40;

struct golf
{
	char fullname[Len];
	int handicap;
};

void setGolf(golf & g,const char * name,int han);
int setGolf(golf & g);
void handicap(golf & g, int he);
void showGolf(const golf & g);

#endif
