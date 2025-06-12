#include <iostream>
using namespace std;

//CircularQueuesArray_0118
//15 commit


#include <iostream>
using namespace std;

class Queues
{

private:
    static const int max = 5;
    int FRONT, REAR;
    int queue_array[5];
    int FRONT, REAR, N = 5;
    int Queue_array[5];
    
public:
    Queues(){
        FRONT = -1;
        REAR = -1;

    }

    void insert()
    {
        int num;
        cout<<"Enter a number:";
        cin>>num;
        cout<<endl;


        //1. cek apakah antrian penuh

        if ((FRONT == 0 && REAR == max -1 ) ||(FRONT == REAR + 1))
        {
            cout<<"\nQueue overflow\n"; //.a
            return;                     //.b
        }

        //2. cek apakah antrian kosong 
        if (FRONT == -1)
        {
            FRONT = 0;  //2.A 
            FRONT = 0;  //2.b
        }
        else
        {
           


    }

    
   
    

    
};
