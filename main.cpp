#include<iostream>
#include<vector>
#include<string>
#include<memory>
#include<random>
#include<iterator>

class Test
{
    private:
        std::string message;

    public:
        Test() = default;
        Test(const std::string &something)
        {
            for (size_t i = 0; i < 10; i++)
            {
                message.append(something);
            }
            
        }
};


using namespace std;

int main()
{
    // mt19937 eng;
    // vector<unsigned int> uvec;

    // for(int i = 1; i<10'000; ++i)
    // {
    //     uvec.push_back(eng());
    // }

    // // bu deger cpp ref te yazanla mesela ortusmeli
    // cout << eng() << endl;

    int a[10]{};
    std::copy(std::begin(a), std::end(a), ostream_iterator<int>(cout, ""));
}
