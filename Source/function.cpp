#include "../Header/Metro_train.h"

void MovingTrain (MetroTrain modelTrain) {
    if (!modelTrain.GetDoorStatus() and modelTrain.GetScheduleStatus()) {
        modelTrain.SetMovingStatus(true);
        ShowStatus(modelTrain);
        cout << "===============================================" << endl;
        cout << "*              ПОЕЗД ОТПРАВЛЯЕТСЯ             *" << endl;
        cout << "===============================================" << endl;
        Sleep(2000);
        cout << "Чу-чух чу-чух.." << endl;
        Sleep(1200);
        cout << "Чу-чух чу-чух.." << endl;
        Sleep(700);
        cout << "Чу-чух чу-чух.." << endl;
        Sleep(400);
        cout << "Чу-чух чу-чух.." << endl;
        Sleep(2000);
        cout << "===============================================" << endl;
        cout << "*        ПОЕЗД ПРИБЫЛ НА НОВУЮ СТАНЦИЮ        *" << endl;
        cout << "===============================================" << endl;

        modelTrain.SetMovingStatus(false);
        modelTrain.SetDoorStatus(false);
        modelTrain.SetScheduleStatus(false);
    }
    if (modelTrain.GetDoorStatus()) { cout << "Двери открыты, ехать нельзя!" << endl; }
    if (!modelTrain.GetScheduleStatus()) { cout << "Поезд спешит, нужно подождать!" << endl; }
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
void OpenDoor (MetroTrain modelTrain) {
    if (modelTrain.GetDoorStatus()) { cout << "Двери уже открыты" << endl << endl; }
    else {
        cout << "===============================================" << endl;
        cout << "*                ДВЕРИ ОТКРЫТЫ                *" << endl;
        cout << "===============================================" << endl;
        modelTrain.SetDoorStatus(true);
    }
}

void CloseDoor (MetroTrain modelTrain) {
    if (!modelTrain.GetDoorStatus()) { cout << "Двери уже закрыты" << endl << endl; }
    else {
        cout << "===============================================" << endl;
        cout << "*                ДВЕРИ ЗАКРЫТЫ                 *" << endl;
        cout << "===============================================" << endl;
        modelTrain.SetDoorStatus(false);
    }
}

void CheckTime (MetroTrain modelTrain) {
    if (modelTrain.GetScheduleStatus()) { cout << "Поезд идет по расписанию" << endl; } else {
        if ((rand() % 10)%2 == 0) {
            modelTrain.SetScheduleStatus(true);
            cout << "Как раз по расписанию, пора ехать" << endl;
        } else cout << "Поезд спешит. Подождите немного!" << endl;
    }
}












