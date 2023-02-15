#ifndef STNOEWT_H

#define STNOEWT_H
class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonewt(double lbs);


};

#endif
