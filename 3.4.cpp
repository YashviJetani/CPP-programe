#include<iostream>
using namespace std;

template<typename T>
class collection
{
    T* arr;
    int size;
public:
    collection (int s):size(s)
    {
        arr=new T[size];
    }
    void set(int index,int value)
    {
        if(index>=0 && index<size)
        {
            arr[index]=value;
        }
    }
    T getMax()
    {
        T maxvalue=arr[0];
        for(int i=0;i<size;++i)
        {
            if(arr[i]>maxvalue)
            {
                maxvalue=arr[i];
            }

        }
        cout<<maxvalue<<endl;;
       return maxvalue;
    }
    void reverse(int s)
    {
        for (int i = 0; i < size / 2; i++)
           {
        T temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
           }
    }
    void display()
    {
        for (int i = 0; i < size; i++)
           {
            cout<<arr[i]<<endl;
           }

    }
    ~collection()
    {
        delete[] arr;
    }
};
int main()
{
    collection<int>
    intcollection(2);
    intcollection.set(0,5);
    intcollection.set(1,3);
    cout<<"maximum value:"<<endl;
    intcollection.getMax();
    cout<<"reverse"<<endl;
    intcollection.reverse(2);
    intcollection.display();

    collection<float>
    floatcollection(2);
    floatcollection.set(0,4);
    floatcollection.set(1,3);
    cout<<"maximum value:"<<endl;
    floatcollection.getMax();
    cout<<"reverse"<<endl;
    floatcollection.reverse(2);
    floatcollection.display();


    return 0;
}
