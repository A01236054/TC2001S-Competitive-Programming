#include <iostream> 

using namespace std;

int main() {
    int numBusRoutes, timeServal;
    cin >> numBusRoutes >> timeServal;
    int hourBus, intervalRoute;
    int route, min = 1000001;
    for (int i = 1; i <= numBusRoutes; i++) { 
        cin >> hourBus >> intervalRoute;
        while (hourBus < timeServal) {
            hourBus += intervalRoute;
        } 
        if (hourBus < min) {
            min = hourBus;
            route = i;
        } 
    }
    cout << route;
}