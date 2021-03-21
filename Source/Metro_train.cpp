#include "../Header/Metro_train.h"

MetroTrain::MetroTrain() {
    movingStatus = false;
    doorStatus = false;
    scheduleStatus = false;
}

MetroTrain::MetroTrain(bool _movingStatus, bool _doorStatus, bool _scheduleStatus) {
    movingStatus = _movingStatus;
    doorStatus = _doorStatus;
    scheduleStatus = _scheduleStatus;
}

bool MetroTrain::GetMovingStatus() { return movingStatus; }
bool MetroTrain::GetDoorStatus() { return doorStatus; }
bool MetroTrain::GetScheduleStatus() { return scheduleStatus; }

void MetroTrain::SetMovingStatus(bool _movingStatus) { movingStatus = _movingStatus; }
void MetroTrain::SetDoorStatus(bool _doorStatus) { doorStatus = _doorStatus; }
void MetroTrain::SetScheduleStatus(bool _scheduleStatus) { scheduleStatus = _scheduleStatus; }
