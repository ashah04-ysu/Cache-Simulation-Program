//ashah04
#ifndef SMITHCOUNTER_H
#define	SMITHCOUNTER_H

#include<string>

namespace comarc5814
{
    class SmithCounter
    {
    private:
        int prediction;
    public:
        SmithCounter();
        bool getPrediction();
        void updatePrediction(std::string takenBranch);
    };
}


#endif
