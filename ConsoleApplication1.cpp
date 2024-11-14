#include <iostream>
#include <iomanip>

using namespace std;

const double COMMISSION_RATE = 0.05;

int main() {
    while (true) {
        double rubles, exchangeRate;
        int currencyChoice;

        cout << "Введите сумму в рублях: ";
        cin >> rubles;
        cout << "Выберите валюту для обмена:\n";
        cout << "1. Доллар\n";
        cout << "2. Евро\n";
        cout << "3. Юань\n";
        cout << "4. Фунт\n";
        cout << "5. Йена\n";
        cin >> currencyChoice;
        switch (currencyChoice) {
        case 1:
            exchangeRate = 0.013;
            break;
        case 2:
            exchangeRate = 0.012;
            break;
        default:
            cout << "Некорректный выбор валюты.\n";
            continue;
        }
        double amountAfterCommission = rubles * (1 - COMMISSION_RATE);
        double exchangedAmount = amountAfterCommission * exchangeRate;
        cout << fixed << setprecision(2);
        cout << "Вы можете купить " << exchangedAmount << " " << (currencyChoice == 1 ? "долларов" : (currencyChoice == 2 ? "евро" : "единиц выбранной валюты")) << endl;
        cout << "Комиссия банка: " << rubles * COMMISSION_RATE << " рублей." << endl;
        char repeat;
        cout << "Хотите повторить обмен? (y/n): ";
        cin >> repeat;
        if (tolower(repeat) != 'y') {
            break;
        }
    }

    return 0;
}