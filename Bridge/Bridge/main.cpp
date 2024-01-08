#include "samsung_tv.h"
#include "sony_tv.h"
#include "remote_control.h"

int main() {
    TV* sonyTV = new SonyTV();
    TV* samsungTV = new SamsungTV();

    RemoteControl* remote1 = new BasicRemote(sonyTV);
    RemoteControl* remote2 = new BasicRemote(samsungTV);

    // Sony TV 조작
    remote1->pressOn();
    remote1->setChannel(5);
    remote1->pressOff();

    std::cout << std::endl;

    // Samsung TV 조작
    remote2->pressOn();
    remote2->setChannel(10);
    remote2->pressOff();

    delete sonyTV;
    delete samsungTV;
    delete remote1;
    delete remote2;

    return 0;
}
