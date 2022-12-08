// Incapsulation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <tuple>
using namespace std;
class test1
{
private:
    int* blankData;
   public:
    test1(int length)
    {
        this->blankData = new int[length];
    }
    void fillDynamicArray(int length)
    {
        for (int i = 0; i < length; i++)
        {
            blankData[i] =rand() % 19;
        }
    }
    void showDynamicArray(int length)
    {
        for (int i = 0; i < length; i++)
        {
            cout <<blankData[i] << " ";
        }
    }
    ~test1()
    {
        delete[] blankData;
    }
};
int main()
{
    setlocale(LC_ALL, ("rus"));
    int num = 100;
    test1 ad(num);
    ad.fillDynamicArray(num);
    ad.showDynamicArray(num);
    
}
