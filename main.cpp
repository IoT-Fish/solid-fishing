#include <iostream>
#include <stdio.h>

class FishingRod {
public:
    void assembleRod(void) {
        printf("Assembling TWO PEACE rod by JOINING TWO PIECES\n");
        printf("Placing reel in reel seat and fasten it\n");
        printf("Passing line through 10 blank RINGS\n");
    }

    void joinRig(void) {
        printf("Tying FREE RUNNING rig\n");
    }

    void prepareHook(void) {
        printf("Pulling WORM down onto the hook\n");
    }

    void cast(void) {
        printf("Cast\n");
    }

    void retrieve(void) {
        printf("Retrieving\n");
    }
};

int main (void) {
    FishingRod feederRod;
    feederRod.assembleRod();
    feederRod.joinRig();
    feederRod.prepareHook();
    feederRod.cast();
    feederRod.retrieve();

    return 0;
}