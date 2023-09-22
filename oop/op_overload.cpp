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

    string get_name(){
        return name;
    }

    int get_age() const{
        return age;
    }

    // Encapsulation is used for hiding data and to avoid direct manipulation of data
    // In order to access that data, public methods are exposed, and the user can change and
    // access private members of the class only by using those public methods
};

void operator<<(ostream& COUT, YouTubeChannel& ytchannel){
    COUT << ytchannel.get_name();
}

void operator+(YouTubeChannel& yt1, YouTubeChannel& yt2){
    auto res = yt1.get_age() + yt2.get_age();
    cout << res << endl;
}

void operator++(YouTubeChannel& yt){
    yt.get_age()+4;
}

int main()
{
    cout << "Constructor start:" << endl;
    YouTubeChannel ytchannel("coco", "lemon", 2);
    cout << "Constructor end:" << endl;
    cout << ytchannel;
    YouTubeChannel ytchannel2("loco", "melon", 5);
    ytchannel + ytchannel2;
    
}
