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
    }

    
};
