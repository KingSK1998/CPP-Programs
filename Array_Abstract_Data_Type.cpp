// ADT : Abstract Data Type
// Array ADT : Lists
#include <iostream>

using namespace std;

class ArrayADT
{
private:
    int capacity;
    int lastIndex;
    int *ptr;
public:
    ArrayADT()
    {
        capacity = 0;
        lastIndex = -1;
        ptr = NULL;
    }

    void createArray(int capacity)
    {
        this->capacity = capacity;
        lastIndex = -1;
        ptr = new int[capacity];
    }

    int getItem(int index)
    {
        if(lastIndex == -1){
            cout << "List is empty" << endl;
            return(-1);
        }
        if(index > lastIndex || index < 0){
            cout << "Invalid Index" << endl;
        }
        return ptr[index];
    }

    void setItem(int index, int value)
    {
        int i;
        if(lastIndex == capacity - 1)
            cout << "Overflow" << endl;
        else if(index > capacity - 1 || index < 0)
            cout << "Invalid Index";
        else if(index > lastIndex+1)
            cout << "Invalid Index";
        else if(index <= lastIndex){
            lastIndex++;
            i = lastIndex;
            while(i != index){
                ptr[i] = ptr[i-1];
                i--;
            }
            ptr[index] = value;
        }
        else{
            lastIndex++;
            ptr[index] = value;
        }
    }

    void editItem(int index, int value)
    {
        if(index > 0 || index > lastIndex)
            cout << "Invalid Index" << endl;
        else
            ptr[index] = value;
    }

    int countItems()
    {
        return (lastIndex+1);
    }

    void removeItem(int index)
    {
        if(index < 0 || index > lastIndex)
            cout << "Either invalid or underflow" << endl;
        else if(index < lastIndex){
            int i = index;
            while(i!=lastIndex){
                ptr[i] = ptr[i+1];
                i++;
            }
            lastIndex--;
        }
        else if(index == lastIndex)
            lastIndex--;
    }

    int searchItem(int value)
    {
        if(lastIndex == -1){
            cout << "List is empty" << endl;
            return(-1);
        }
        for(int i = 0; i <= lastIndex; i++){
            if(ptr[i] == value){
                return i;
            }
        }
        return -1;
    }

    void sortArray()
    {
        int i, r, t;
        for(r=0; r<countItems(); r++){
            for(i = 0; i < countItems() - r; i++){
                if(ptr[i] > ptr[i+1]){
                    t = ptr[i];
                    ptr[i] = ptr[i+1];
                    ptr[i+1] = t;
                }
            }
        }
    }

    friend ostream& operator <<(ostream &out, ArrayADT l)
    {
        if(l.lastIndex == -1)
            out << "List is empty" << endl;
        for(int i=0; i <l.countItems(); i++)
            out << " " << l.getItem(i);
        return out;
    }

    ~ArrayADT()
    {
        delete []ptr;
    }

    // Copy constructor cannot handle objects so use Reference variables
    ArrayADT(ArrayADT &List)
    {
        // Deep Copy
        capacity = List.capacity;
        lastIndex = List.lastIndex;
        ptr = new int[capacity];
        for(int i = 0; i<=List.lastIndex; i++)
            ptr[i] = List.ptr[i];
    }
};

int main()
{
    ArrayADT l1;
    l1.createArray(5);
    l1.setItem(0,10);
    l1.setItem(1,20);
    l1.setItem(2,50);
    l1.setItem(1, 40);
    cout << l1;
    return 0;
}
