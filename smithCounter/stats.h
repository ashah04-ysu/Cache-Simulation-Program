//ashah04
#ifndef STATS_H
#define	STATS_H

namespace comarc5814
{
    class Stats
    {
    private:
        int branches;
        int branchTakenCount;
        int correctlyPredictedTakenBranches;
        int branchNotTakenCount;
        int correctlyPredictedNotTakenBranches;
    public:
        Stats();
        void incrementBranches();
        int getBranches();
        void incrementBranchTakenCount();
        int getBranchTakenCount();
        void incrementCorrectlyPredictedTakenBranches();
        int getCorrectlyPredictedTakenBranches();
        void incrementBranchNotTakenCount();
        int getBranchNotTakenCount();
        void incrementCorrectlyPredictedNotTakenBranches();
        int getCorrectlyPredictedNotTakenBranches();
        double getPercent();
    };
}

#endif
