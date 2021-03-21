#include "../Header/Metro_train.h"

int main() {
    cout << "===============================================" << endl;
    cout << "* Запущена программа управления поездом метро *" << endl;
    cout << "===============================================" << endl;

    MetroTrain SPB_METRO_TRAIN(false, true, false);
    ShowStatus(SPB_METRO_TRAIN);
    SPB_METRO_TRAIN.SetDoorStatus(false);

    int choice = 1;
    while (choice != 6) {
        cout << "\n===============================================" << endl;
        cout << "*                    МЕНЮ                     *" << endl;
        cout << "===============================================" << endl;
        cout << "1. Поехать" << endl;
        cout << "2. Открыть двери" << endl;
        cout << "3. Закрыть двери" << endl;
        cout << "4. Проверить соответствие расписанию" << endl;
        cout << "5. Статус поезда" << endl;
        cout << "6. Завершить поездку" << endl;
        cin >> choice;
        switch (choice) {
            case 1: { MovingTrain(SPB_METRO_TRAIN); }break;
            case 2: { OpenDoor(SPB_METRO_TRAIN); }break;
            case 3: { CloseDoor(SPB_METRO_TRAIN); }break;
            case 4: { CheckTime(SPB_METRO_TRAIN); }break;
            case 5: { ShowStatus(SPB_METRO_TRAIN); }break;
            case 6: {
                cout << "===============================================" << endl;
                cout << "*              Спасибо за поездку!            *" << endl;
                cout << "===============================================" << endl;
            }break;
            default: { cout << "Неверное значение"; }
        }
    }

    return 0;
}
