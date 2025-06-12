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
            //jika rear berada di posisi terakhir array, kembali ke awal array
            if (REAR == max -1)
                REAR =0;
            else
            REAR = REAR + 1;
        }
        queue_array[REAR] = num;



    }

    void remove ()
    {
        //cek apakah antrian kosong 
        if (FRONT == -1)
        {
            cout<<"Queue underflow\n";
            return;
        }
        cout<<"\nThe element deleted from the queue is: "<<queue_array[FRONT]<<"\n";

        //cek jika antrian hanya memiliki satu elemen
        if (FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }
        else
        {
            //jika elemen yang dihapus berada di posisi terakhir array, kembali ke awal array
            if (FRONT == max -1)
                FRONT = 0;
            else
            FRONT=FRONT+1;
        }

    }

    void display()
    {
        int FRONT_posisition = FRONT;
        int REAR_posisition = REAR;

        //cek apakah antrian kosong
        if (FRONT == -1)
        {
            cout<<"Queue is empty\n";
            return;

        }

        cout<<"\nElements in the queue are...\n";

        //jika front_posisition <= REAR posisition, iterasi dari front hingga REAR
        if (FRONT_posisition <= REAR_posisition)
        {
            while (FRONT_posisition <= REAR_posisition)
            {
                cout<<queue_array[FRONT_posisition]<<" ";
                FRONT_posisition++;
            }
            cout<<endl;
        }
        else
        {
            //JIKA FRONT_posisition  > rear_posisition , iterasi dari FRONT hingga akhir array
            while (FRONT_posisition <= max -1 )
            {
                cout<<queue_array[FRONT_posisition]<<" ";
            }


            FRONT_posisition = 0;

            while (FRONT_posisition <= REAR_posisition)
            {
                cout<<queue_array[FRONT_posisition]<<" ";
                FRONT_posisition++;
            }
            cout<<endl;
        }
        
    }    
};

int main()
{
    Queues q;
    char ch;

    while (true)
    {
        try
        {
            cout<<"Menu"<<endl;
            cout<<"1. Implement insert operation"<<endl;
            cout<<"2. Implement delete opereation"<<endl;
            cout<<"3. Display values"<<endl;
            cout<<"4. Exit"<<endl;
            cout<<"Enter your delete (1-4)"<<endl;
            cin>>ch;
            cout<<endl;


          