#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

struct patient {
    string name;
    int priority;

    bool operator<(const patient& other) const {
        return priority < other.priority;
    }
};

int main(){
    priority_queue<patient> emergencyRoomQueue;

    emergencyRoomQueue.push({"Alice", 2});
    emergencyRoomQueue.push({"Bob", 5});
    emergencyRoomQueue.push({"Charlie", 1});
    emergencyRoomQueue.push({"David", 4});
    emergencyRoomQueue.push({"Eva", 3});

    cout << "Order of treatment: " << endl;
    while (!emergencyRoomQueue.empty()) {
        patient currentpatient = emergencyRoomQueue.top();
        cout << currentpatient.name << endl;
        emergencyRoomQueue.pop();
    }


    return 0;
}