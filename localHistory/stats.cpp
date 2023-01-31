//ashah04
#include "stats.h"
#include<iostream>


namespace comarc5814
{
    Stats::Stats()
    {
        branches = 0;
        branchTakenCount = 0;
        correctlyPredictedTakenBranches = 0;
        branchNotTakenCount = 0;
        correctlyPredictedNotTakenBranches = 0;
    }

    void Stats::incrementBranches()
    {
        branches++;
    }

    int Stats::getBranches()
    {
        return branches;
    }

    void Stats::incrementBranchTakenCount()
    {
        branchTakenCount++;
    }

    int Stats::getBranchTakenCount()
    {
        return branchTakenCount;
    }

    void Stats::incrementCorrectlyPredictedTakenBranches()
    {
        correctlyPredictedTakenBranches++;
    }

    int Stats::getCorrectlyPredictedTakenBranches()
    {
        return correctlyPredictedTakenBranches;
    }

    void Stats::incrementBranchNotTakenCount()
    {
        branchNotTakenCount++;
    }

    int Stats::getBranchNotTakenCount()
    {
        return branchNotTakenCount;
    }

    void Stats::incrementCorrectlyPredictedNotTakenBranches()
    {
        correctlyPredictedNotTakenBranches++;
    }

    int Stats::getCorrectlyPredictedNotTakenBranches()
    {
        return correctlyPredictedNotTakenBranches;
    }

    double Stats::getPercent()
    {
        return ((double)(correctlyPredictedTakenBranches + correctlyPredictedNotTakenBranches)/(double)branches) * 100;
    }
}
