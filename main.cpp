#include <stdio.h>

enum class SeatBoxAccessory {
    feederArm,
    buttRest
};

class SeatBox {
private:
    SeatBoxAccessory accessory;
public:
    SeatBox(SeatBoxAccessory accessoryType) : accessory{accessoryType} {}

    void attachAccessory() {
        if (accessory == SeatBoxAccessory::feederArm) {
            printf("Attaching seat box accessory - Feeder Arm\n");
        } else if (accessory == SeatBoxAccessory::buttRest) {
            printf("Attaching seat box accessory - Butt Rest\n");
        }
    }
};

int main (void) {
    SeatBox feederArm(SeatBoxAccessory::feederArm);
    SeatBox buttRest(SeatBoxAccessory::buttRest);

    feederArm.attachAccessory();
    buttRest.attachAccessory();

    return 0;
}