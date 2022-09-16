#include <iostream> 

using namespace std;

int main() {
    int qAndrew, qDmitry, qMichal;
    cin >> qAndrew >> qDmitry >> qMichal;
    int qGreen, qPurple, qBlack;
    cin >> qGreen >> qPurple >> qBlack;

    if (qGreen < qAndrew || qGreen + qPurple - qAndrew < qDmitry) {
        cout << "NO";
    }
    else if (qGreen + qPurple + qBlack - qAndrew - qDmitry >= qMichal) {
        cout << "YES";
    } else { cout << "NO"; };
}