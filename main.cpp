#include <stdio.h>

class SeatBox {
public:
    virtual void attachAccessory() = 0;
};

class FeederArm : public SeatBox {
public:
    void attachAccessory() override {
        printf("Attaching seat box accessory - Feeder Arm\n");
    }
};

class ButtRest : public SeatBox {
public:
    void attachAccessory() override {
        printf("Attaching seat box accessory - Butt Rest\n");
    }
};

int main (void) {
    FeederArm feederArm;
    ButtRest buttRest;

    feederArm.attachAccessory();
    buttRest.attachAccessory();

    return 0;
}