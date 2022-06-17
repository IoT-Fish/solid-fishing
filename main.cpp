#include <iostream>
#include <stdio.h>

class RodPreparation {
public: 
    enum eBlankType { eTwoPeace, eTelescopic };
    enum eReelType { eFeeder, eBaitcaster };
    enum eRigType { eFreeRunning, eHelicopter };

    RodPreparation(eBlankType blankType, eReelType reelType, eRigType rigType) :
        blankType(blankType), reelType(reelType), rigType(rigType) {}

    void assembleFishingRod(void) {
        assembleBlank(blankType);
        attachReel();
        passLineThroughBlankRings(reelType);
    }

    void attachFishingRig(void) {
        if (rigType == eFreeRunning) {
            printf("Attaching FREE RUNNING rig\n");
        } else if (rigType == eHelicopter) {
            printf("Attaching HELICOPTER rig\n");
        } else {
            printf("Unsupported RIG type %u\n", rigType);
        }
    }

    void putOnWorm();

private: 
    eBlankType blankType;
    eReelType reelType;
    eRigType rigType;

    void assembleBlank(eBlankType blankType) {
        if (blankType == eTelescopic) {
            printf("Assembling TELESCOPIC rod by SPREADING OUT PIECES\n");
        } else if (blankType == eTwoPeace) {
            printf("Assembling TWO PEACE rod by JOINING TWO PIECES\n");
        } else {
            printf("Unsupported BLANK type %u\n", blankType);
        }
    }

    void attachReel(void) {
        printf("Placing reel in reel seat and fasten it\n");
    }

    void passLineThroughBlankRings(eReelType reelType) {
        releaseLine(reelType);
        printf("Passing line through blank rings\n");
    }

    void releaseLine(eReelType reelType) {
        if (reelType == eFeeder) {
            printf("Releasing line with FEEDER reel by OPENING BAIL\n");
        } else if (reelType == eBaitcaster) {
            printf("Releasing line with BAITCASTER reel by PRESSING BUTTON\n");
        } else {
            printf("Unsupported REEL type %u\n", reelType);
        }
    }
};

int main (void) {
    RodPreparation feederRod(RodPreparation::eTwoPeace, RodPreparation::eFeeder, RodPreparation::eFreeRunning);    
    feederRod.assembleFishingRod();
    feederRod.attachFishingRig();
    
    return 0;
}