#include <iostream>
using namespace std;

class queues
{
    int FRONT, REAR, max = 5;
    int queue_array[5];

public:
    queues()
    {
        FRONT = -1;
        REAR = -1;
    }

    void insert()
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << endl;

        //CEK APAKAH ANTRIAN PENUH
        if ((FRONT == 0 && REAR == max - 1) || (FRONT = REAR + 1))
        {
            cout << "\nQueue overflow\n";
            return;
        }

        //CEK APAKAH ANTRIAN KOSONG
        if (FRONT == -1)
        {
            FRONT = 0;
            REAR = 0;
        }
        else
        {
            // JIKA REAR BERADA DI POSISI TERAKHIR ARRAY, KEMBALI KE AWAL ARRAY
            if (REAR == max - 1)
                REAR = 0;
            else
                REAR = REAR + 1;

        }
        queue_array[REAR] = num;
        
    }

    void remove()
    {
        //CEK APAKAH ANTRIAN KOSONG
        if (FRONT == -1)
        {
            cout << "Queue underflow\n";
            return;
        }
        cout << "\nThe deleted from the queue is: " << queue_array[FRONT] << "\n";

        //CEK JIKA ANTRIAN HANYA MEMILIKI SATU ELEMENT
        if (FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }
        else
        {
            // JIKA ELEMEN YANG DIHAPUS BERADA DI POSISI TERAKHIR ARRAY,KEMBALI KE AWAL ARRAY
            if (FRONT == max - 1)
                FRONT = 0;
            else 
                FRONT = FRONT + 1;

        }
    }

    void display()
    {
        // CEK APAKAH ANTRIAN KOSOSNG
        if (FRONT == -1)
        {
            cout << "Queue is empty\n";
            return;
        }

        cout << "\nElement in the Queue are...\n";

        // JIKA FRONT <= REAR, ITERASI DARI FRONT HINGGA REAR
        if (FRONT <= REAR)
        {
            while (FRONT <= REAR)
            {
                cout << queue_array[FRONT] << "  ";
                FRONT++;
            }
            cout << endl;
        }

        else
        {
            // JIKA FRONT > REAAR ITERASI DARI FRONT HINGGA AKHIR ARRAY
            while (FRONT <= max - 1)
            {
                cout << queue_array[FRONT] << "  ";
                FRONT++;
            }
            FRONT = 0;

            //ITERASI DARI AWAL ARRAY HINGGA REAR
            while (FRONT <= REAR)
            {
                cout << queue_array[FRONT] << "  ";
                FRONT++;
            }
            cout << endl;
        }
    }

};



int main()
{
    
}
