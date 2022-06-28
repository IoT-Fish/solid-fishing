#include <iostream>
#include <stdio.h>

class AssembleRod {
public:
    void blank(void) {
        printf("Assembling TWO PEACE rod by JOINING TWO PIECES\n");
        printf("Placing reel in reel seat and fasten it\n");
        printf("Passing line through 10 blank RINGS\n");
    }

    void rig(void) {
        printf("Tying FREE RUNNING rig\n");
    }
};

class PrepareHook {
public:
    void worm(void) {
        printf("Pulling WORM down onto the hook\n");
    }
};

class RodAction {
public:
    void cast(void) {
        printf("Casting\n");
    }

    void retrieve(void) {
        printf("Retrieving\n");
    }
};

class FishingRodFacade: public AssembleRod, public PrepareHook, public RodAction {
public:
    void assembleRod(void) {
        blank();
    }

    void joinRig(void) {
        rig();
    }

    void prepareHook(void) {
        worm();
    }

    void castRod(void) {
        cast();
    }

    void retrieveRod(void) {
       retrieve();
    }
};

int main (void) {
    FishingRodFacade feederRod;
    feederRod.assembleRod();
    feederRod.joinRig();
    feederRod.prepareHook();
    feederRod.castRod();
    feederRod.retrieveRod();

    return 0;
}