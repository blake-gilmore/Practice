#include <iostream>
#include <string>
using std::string;
using std::cout;
class DynamicStringArray
{
public:
    DynamicStringArray();
    DynamicStringArray(DynamicStringArray& oldArray);
    ~DynamicStringArray();
    int getSize();
    string getEntry(int search);
    void addEntry(string newElement);
    void deleteEntry(string entry);
    DynamicStringArray& operator =(DynamicStringArray& oldArray);
private:
    string* dynamicArray;
    int size;
};

int main()
{

}

DynamicStringArray::DynamicStringArray()
{
    dynamicArray = nullptr;
    size = 0;
}
DynamicStringArray::DynamicStringArray(DynamicStringArray& oldArray)
{
    *this = oldArray;
    return;
}
DynamicStringArray::~DynamicStringArray()
{
    delete[] dynamicArray;
    dynamicArray = nullptr;
    size = 0;
}
int DynamicStringArray::getSize()
{
    return size;
}
string DynamicStringArray::getEntry(int search)
{
    return dynamicArray[search];
}
void DynamicStringArray::addEntry(string newElement)
{
    string* temp = new string[size + 1];
    for (int i = 0; i < (size); i++)
    {
        temp[i] = dynamicArray[i];
    }
    temp[size] = newElement;
    size++;
    delete[]dynamicArray;
    dynamicArray = new string[size];
    for (int i = 0; i < size; i++)
    {
        dynamicArray[i] = temp[i];
    }
    delete[] temp;
    temp = nullptr;

    return;
}
void DynamicStringArray::deleteEntry(string entry)
{
    int index = -1;
    int ind1(0), ind2(0);
    string* temp;
    for (int i = 0; i < size; i++)
    {
        if (dynamicArray[i] == entry)
        {
            index = i;
        }
    }
    if (index != -1)
    {
        size--;
        temp = new string[size];
        while (ind2 < size)
        {
            if (ind1 == index)
            {
                ind1++;
            }
            else
            {
                temp[ind2] = dynamicArray[ind1];
                ind1++;
                ind2++;
            }
        }
        delete [] dynamicArray;
        dynamicArray = temp;
        temp = nullptr;
        cout << "Deleted.\n";
    }
    else
    {
        cout << "Could not find entry.\n";
    }
    return;
}
DynamicStringArray& DynamicStringArray::operator =(DynamicStringArray& oldArray)
{
    size = oldArray.size;
    delete[] dynamicArray;
    dynamicArray = new string[size];
    for (int i = 0; i < size; i++)
    {
        dynamicArray[i] = oldArray.dynamicArray[i];
    }
    return *this;
}