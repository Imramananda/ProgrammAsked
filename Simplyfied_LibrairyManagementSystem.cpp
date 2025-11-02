#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Media
{
public:
    Media(const string &t) : title(t)
    {
        cout << " Media constructor call " << endl;
    }
    virtual void display() const = 0;

protected:
    string title;
};

class Book : public Media
{
public:
    Book(const string &a, const string &t, int p) :  Media(t), author(a),pages(p)
    {
        cout << "Contructor of Book called " << endl;
    }
    void display() const override
    {
        cout << " Book title : " << title << " Author : " << author << " pages : " << pages << endl;
    }

private:
    string author;
    int pages;
};

class DVD : public Media
{
public:
    DVD(const string &d, const string &ti, int t) :  Media(ti),director(d), duration(t)
    {
        cout << " contructor of DVD called " << endl;
    }
    void display() const override
    {
        cout << " DVD title : " << title << " Director : " << director << " duration : " << duration << endl;
    }

private:
    string director;
    int duration;
};
// int main()
// {
//     cout << " Main Function lib " << endl;
//     vector<shared_ptr<Media>> mVector;
//     mVector.push_back(make_shared<Book>("Ramayan ", "Ramananda Sagar ", 300));
//     mVector.push_back(make_shared<Book>("Mahabharat ", "Vedvyash ", 500));
//     mVector.push_back(make_shared<DVD>("3Idiot ", "Raju H", 120));
//     mVector.push_back(make_shared<DVD>("Bahubali ", "SS Rajmauli ", 200));
//     for (auto &i : mVector)
//     {
//         cout << "loop for " << i << endl;
//         i->display();
//     }
//     cout<<" Ref count "<<mVector.size()<<endl;
//     return 0;
// }
int main() {
    std::vector<std::unique_ptr<Media>> mVector;
    mVector.push_back(std::make_unique<Book>("Ramayan", "Ramananda Sagar", 300));
    mVector.push_back(std::make_unique<Book>("Mahabharat", "Vedvyash", 500));
    mVector.push_back(std::make_unique<DVD>("3 Idiot", "Raju H", 120));
    mVector.push_back(std::make_unique<DVD>("Bahubali", "SS Rajamouli", 200));
    for (auto& i : mVector) {
        i->display();
    }
    return 0;
}
