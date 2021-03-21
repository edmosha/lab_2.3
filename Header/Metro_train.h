#ifndef LAB_2_3_METRO_TRAIN_H
#define LAB_2_3_METRO_TRAIN_H
#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>

using namespace std;

class MetroTrain {
    public:
        MetroTrain();
        MetroTrain(bool movingStatus, bool doorStatus, bool scheduleStatus);

        bool GetMovingStatus();
        bool GetDoorStatus();
        bool GetScheduleStatus();

        void SetMovingStatus(bool _movingStatus);
        void SetDoorStatus(bool _doorStatus);
        void SetScheduleStatus(bool _scheduleStatus);

    private:
    bool movingStatus;
    bool doorStatus;
    bool scheduleStatus;
};

void MovingTrain (MetroTrain modelTrain);
void ShowStatus (MetroTrain modelTrain);
void OpenDoor (MetroTrain modelTrain);
void CloseDoor (MetroTrain modelTrain);
void CheckTime (MetroTrain modelTrain);


#endif //LAB_2_3_METRO_TRAIN_H
