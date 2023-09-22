#include <iostream>
#include <utility>

using namespace std;

class YouTubeChannel{
private:
    string name;
    string OwnerName;
    int age;

public:
    YouTubeChannel(string nm, string On, int a) {
        name = std::move(nm);
        OwnerName = std::move(On);
        age = a;
        cout << "Constructor created" << endl;
    }

    // Encapsulation is used for hiding data and to avoid direct manipulation of data
    // In order to access that data, public methods are exposed, and the user can change and
    // access private members of the class only by using those public methods
};

int main()
{
    cout << "Constructor start:" << endl;
    YouTubeChannel ytchannel("coco", "lemon", 2);
    cout << "Constructor end:" << endl;
    // when constructor not defined
    // access modifier '.' is used
    // all variable must be made public
//    ytchannel.name = "EPic";
//    ytchannel.OwnerName = "me";
//    ytchannel.age = 2;

}
