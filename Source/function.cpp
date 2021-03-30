#include "../Header/Metro_train.h"

bool MovingTrain (MetroTrain modelTrain) {
    if (modelTrain.GetDoorStatus()) { cout << "Двери открыты, ехать нельзя!" << endl; }
    if (!modelTrain.GetScheduleStatus()) { cout << "Поезд спешит, нужно подождать!" << endl; }
    if (!modelTrain.GetDoorStatus() and modelTrain.GetScheduleStatus()) {
        modelTrain.SetMovingStatus(true);
        ShowStatus(modelTrain);
        cout << "===============================================" << endl;
        cout << "*              ПОЕЗД ОТПРАВЛЯЕТСЯ             *" << endl;
        cout << "===============================================" << endl;
        Sleep(2500);
        cout << "Чу-чух чу-чух.." << endl;
        Sleep(2000);
        cout << "Чу-чух чу-чух.." << endl;
        Sleep(2000);
        cout << "Чу-чух чу-чух.." << endl;
        Sleep(2000);
        cout << "Чу-чух чу-чух.." << endl;
        Sleep(2500);
        cout << "===============================================" << endl;
        cout << "*        ПОЕЗД ПРИБЫЛ НА НОВУЮ СТАНЦИЮ        *" << endl;
        cout << "===============================================" << endl;

        return true;
    }
    return false;
}

void ShowStatus (MetroTrain modelTrain) {
    string status;
    if (modelTrain.GetMovingStatus()) { status = "в движении";} else status = "поезд стоит";
    cout << "Статус движения: " << status << endl;
    if (modelTrain.GetDoorStatus()) { status = "двери открыты";} else status = "двери закрыты";
    cout << "Статус дверей: " << status << endl;
    if (modelTrain.GetScheduleStatus()) { status = "по расписанию";} else status = "поезд спешит";
    cout << "Соответствие графику: " << status << endl;
}
bool OpenDoor (MetroTrain modelTrain) {
    if (modelTrain.GetDoorStatus()) {
        cout << "Двери уже открыты!" << endl;
        return true;
    }
    else {
        cout << "===============================================" << endl;
        cout << "*                ДВЕРИ ОТКРЫТЫ                *" << endl;
        cout << "===============================================" << endl;
        return true;
    }
}

bool CloseDoor (MetroTrain modelTrain) {
    if (!modelTrain.GetDoorStatus()) {
        cout << "Двери уже закрыты!" << endl;
        return false;
    }
    else {
        cout << "===============================================" << endl;
        cout << "*                ДВЕРИ ЗАКРЫТЫ                 *" << endl;
        cout << "===============================================" << endl;
        return false;
    }
}

bool CheckTime (MetroTrain modelTrain) {
    if (modelTrain.GetScheduleStatus()) {
        cout << "Поезд идет по расписанию" << endl;
        return true;
    } else {
        if ((rand() % 10)%2 == 0) {
            cout << "Как раз по расписанию, пора ехать" << endl;
            return true;
        } else {
            cout << "Поезд спешит. Подождите немного!" << endl;
            return false;
        }
    }
}












