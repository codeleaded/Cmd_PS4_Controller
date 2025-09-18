#include "/home/codeleaded/System/Static/Library/PS4_Controller.h"

int main() {
    char* dev = "/dev/input/by-id/usb-Sony_Interactive_Entertainment_Wireless_Controller-if03-event-joystick";
    PS4_Controller ps4c = PS4_Controller_New(dev);

    while (1) {
        PS4_Controller_Update(&ps4c);
        usleep(1000);
    }

    PS4_Controller_Free(&ps4c);
}