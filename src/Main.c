#include "/home/codeleaded/System/Static/Library/PS4_Controller.h"

int main() {
    char* dev = "/dev/input/by-id/usb-Sony_Interactive_Entertainment_Wireless_Controller-if03-event-joystick";
    PS4_Controller ps4c = PS4_Controller_New(dev);

    char running = 1;
    while(running){
        if(PS4_Controller_Key(&ps4c,PS4_CONTROLLER_HOME).PRESSED){
            printf("Quit!\n");
            running = 0;
        }

        if(PS4_Controller_Key(&ps4c,PS4_CONTROLLER_X).PRESSED){
            printf("X Pressed\n");
        }else if(PS4_Controller_Key(&ps4c,PS4_CONTROLLER_X).RELEASED){
            printf("X Released\n");
        }
        
        if(PS4_Controller_Key(&ps4c,PS4_CONTROLLER_O).PRESSED){
            printf("O Pressed\n");
        }else if(PS4_Controller_Key(&ps4c,PS4_CONTROLLER_O).RELEASED){
            printf("O Released\n");
        }

        if(PS4_Controller_Key(&ps4c,PS4_CONTROLLER_TRI).PRESSED){
            printf("TRI Pressed\n");
        }else if(PS4_Controller_Key(&ps4c,PS4_CONTROLLER_TRI).RELEASED){
            printf("TRI Released\n");
        }

        if(PS4_Controller_Key(&ps4c,PS4_CONTROLLER_QUD).PRESSED){
            printf("QUD Pressed\n");
        }else if(PS4_Controller_Key(&ps4c,PS4_CONTROLLER_QUD).RELEASED){
            printf("QUD Released\n");
        }

        PS4_Controller_Update(&ps4c);
        usleep(100);
    }

    PS4_Controller_Free(&ps4c);
}