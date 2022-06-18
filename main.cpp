#include <iostream>
#include <stdio.h>

class FishingRod {
public:
    const int totalBlankRings = 10;
    enum eBlankType { eTwoPeace, eTelescopic };
    enum eReelType { eFeeder, eBaitcaster };
    enum eRigType { eFreeRunning, eHelicopter };

    FishingRod(eBlankType blankType, eReelType reelType, eRigType rigType) :
        blankType(blankType), reelType(reelType), rigType(rigType) {}

    void assembleFishingRod(void) {
        assembleBlank(blankType);
        mountReel();
        passLineThroughBlankRings(reelType);
    }

    void joinFishingRig(void) {
        tieRig(rigType);
    }

    void hookWorm(void) {
        printf("Pulling worm down onto the hook\n");
    }

private: 
    eBlankType blankType;
    eReelType reelType;
    eRigType rigType;

    void assembleBlank(eBlankType blankType) {
        if (blankType == eTelescopic) {
            assembleTelescopicBlank();
        } else if (blankType == eTwoPeace) {
            assembleTwoPieceBlank();
        } else {
            printf("Unsupported BLANK type %u\n", blankType);
        }
    }

    void threadRing(int ring) {
        printf("Passing line through blank ring %i\n", ++ring);
    }

    void passLineThroughBlankRings(eReelType reelType) {
        releaseLine(reelType);
        for (int ring = 0; ring < totalBlankRings; ring++) {
            threadRing(ring);
        }
    }

    void releaseLine(eReelType reelType) {
        if (reelType == eFeeder) {
            releaseFeederLine();
        } else if (reelType == eBaitcaster) {
            releaseBaitcasterLine();
        } else {
            printf("Unsupported REEL type %u\n", reelType);
        }
    }

    void tieRig(eRigType rigType) {
        if (rigType == eFreeRunning) {
            tieFreeRunningRig();
        } else if (rigType == eHelicopter) {
            tieHelicopterRig();
        } else {
            printf("Unsupported RIG type %u\n", rigType);
        }
    }

    void assembleTelescopicBlank(void) {
        printf("Assembling TELESCOPIC rod by SPREADING OUT PIECES\n");
    }

    void assembleTwoPieceBlank(void) {
        printf("Assembling TWO PEACE rod by JOINING TWO PIECES\n");
    }

    void mountReel(void) {
        printf("Placing reel in reel seat and fasten it\n");
    }

    void releaseFeederLine(void) {
        printf("Releasing line with FEEDER reel by OPENING BAIL\n");
    }

    void releaseBaitcasterLine(void) {
        printf("Releasing line with BAITCASTER reel by PRESSING BUTTON\n");
    }

    void tieFreeRunningRig(void) {
        printf("Tying FREE RUNNING rig\n");
    }

    void tieHelicopterRig(void) {
        printf("Tying HELICOPTER rig\n");
    }
};

int main (void) {
    FishingRod feederRod(FishingRod::eTwoPeace, FishingRod::eFeeder, FishingRod::eFreeRunning);
    feederRod.assembleFishingRod();
    feederRod.joinFishingRig();
    feederRod.hookWorm();

    return 0;
}