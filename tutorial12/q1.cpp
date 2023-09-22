#include <iostream>
using namespace std;


const int MAXQUEUE = 100;
const int TRUE = 1;
const int FALSE = 0;

class queue{
private:
    int index;
    int num[MAXQUEUE];

public:
    queue();
    void enqueue(int);
    int serve();
    int isempty();
    int isfull();
};

queue::queue() {
    index = 0;
}

void queue::enqueue(int x) {
    if (index < MAXQUEUE){
        num[index] = x;
        index++;
    } else {
        cout << "Queue is full" << endl;
    }
}

int queue::isempty() {
    return (index == 0) ? TRUE : FALSE;
}

int queue::serve() {
    if (index > 0) {
        int x = num[0];
        for (int i = 1; i < index; i++) {
            num[i - 1] = num[i];
        }
        index--;
        return x;
    }
    else {
        cout << "Error: queue is empty" << endl;
        return -1;
    }
}

int queue::isfull() {
    return (index == MAXQUEUE)? TRUE : FALSE;
}
