/**
 * @mainpage Documentation Circular Queues
 * 
 * @section introduction
 * Project ini merupakan struktur data
 * menggunakan struktur data queues dengan pendekatan cicular arrays.
 * 
 * @section operations
 * project ini memiliki beberapa operasi antara lain:
 * 1. insert
 * 2. delete
 * 3. display
 * 
 * @section cara penggunaan 
 * Berikut beberapa menu yang bisa digunakan:
 * 1. en queue
 * 2. de queue
 * 3. display
 * 4. exit
 * 
 * 

 * @author profil
 * - nama : ilham saputra
 * - nim : 20240140118
 * - kelas : C
 * 
 * @brief
 * @version 1.0
 * @date 2025-06-24
 * 
 * @copyright ilhamputra@umy.ac.id (c) 2025 
 * 
 * 
 * 
 * 
 * 
 */







#include <iostream>
using namespace std;

//CircularQueuesArray_0118
//15 commit


#include <iostream>
using namespace std;

/**
 * @class queues
 * @brief class ini untuk operasi lengkap queues
 * 
 * 
 * 
 */



class Queues
{

private:
    static const int max = 5; 
    int FRONT; ///< variable private front untuk menyimpan posisi depan antrian
    int REAR; ///< variable private rear untuk menyimpan posisi belakang antrian
    int max = 5; ///< variable private max untuk menyimpan ukuran maximum antrian
    int queue_array[5]; ///< variable private queue_array untuk menyimpan elemen antrian
    
    
public:
/**
 * @brief contruct a new queues objext 
 * set default queues null
 * with front = -1 and rear = -1
 */
    Queues(){
        FRONT = -1;
        REAR = -1;

    }

    /**
     * @brief method untuk memasukkan data dalam antrian
     * data dimasukkan dalam variable queue_array
     */

    void insert()
    {
        int num; ///< variable num untuk menyimpan nilai
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

    /**
     * @brief method untuk menghapus data dalam antrian 
     * data dihapuskan dari dalam variable queue_array
     */

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

    /**
     * @brief method untuk menampilkan data dalam antrian 
     * data ditampilkan yang berada dalam variable queue_array
     */

    void display()
    {
        int FRONT_posisition = FRONT; ///< variable front_posisition untuk menandakan posisi element pertama pada variable front
        int REAR_posisition = REAR; ///< variable rear_posisition untuk mendandakan posisi elemen terakhir pada variable rear

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

/**
 * @brief method utama untuk menjalankan program
 * 
 * @return int
 */

int main()
{
    Queues q; ///< objek untuk menggunakan member yang ada pada class queues
    char ch; ///< variable ch untuk menyimpan pilihan menu yang diberikan

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


            switch (ch)
            {
                case '1':
                {
                    q.insert();
                    break;
                }

                case '2':
                {
                    q.remove();
                    break;
                }

                case '3':
                {
                    q.display();
                    break;

                }

                case '4':
                {
                    return 0;
                }

                default:
                {
                    cout<<"Invalid option!!"<<endl;
                    break;
                }
            }
        }
        catch(exception &e)
        {
            cout<<"Check for the values entered."<<endl;
            
        }
    }
}
 