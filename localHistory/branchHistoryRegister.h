//ashah04
#ifndef BRANCHHISTORYREGISTER_H
#define	BRANCHHISTORYREGISTER_H

#include <string>

namespace comarc5814
{
    class BranchHistoryRegister
    {
    private:
        int value;
        int size;
        int mask;
    public:
        BranchHistoryRegister();
        int getValue();
        int getSize();
        void setValue(int setValue);
        void updateTaken();
        void updateNotTaken();
        void updateBranchHistoryRegister(std::string takenBranch);
    };
}

#endif
