#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    static int next_id;

public:
    Person() {
        next_id++;
    }

    virtual void getdata() = 0;

    virtual void putdata() = 0;
};

int Person::next_id = 0;

class Doctor : public Person {
private:
    int doctor_specialist;
    int doctor_id;

public:
    Doctor() : Person() {
        doctor_id = next_id;
    }

    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter doctor specialist: ";
        cin >> doctor_specialist;
    }

    void putdata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Doctor specialist: " << doctor_specialist << endl;
        cout << "Doctor ID: " << doctor_id << endl;
    }
};

class Patient : public Person {
private:
    int admission_date;
    int patient_id;

public:
    Patient() : Person() {
        patient_id = next_id;
    }

    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter admission date: ";
        cin >> admission_date;
    }

    void putdata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Admission date: " << admission_date << endl;
        cout << "Patient ID: " << patient_id << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of people: ";
    cin >> n;

    Person *p[n];
    for (int i = 0; i < n; i++) {
        int type;
        cout << "Enter 1 for Doctor, 2 for Patient: ";
        cin >> type;

        if (type == 1) {
            p[i] = new Doctor();
            p[i]->getdata();
        }
        else {
            p[i] = new Patient();
            p[i]->getdata();
        }
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        p[i]->putdata();
        cout << endl;
    }

    return 0;
}
