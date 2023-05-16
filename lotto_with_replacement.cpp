#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int number;

int main()
    {
        cout << "Welcome in our lotto_with_replacement game, were going to release blockade in 3s time" << endl;
        sleep(3);
        cout<<endl;

        srand(time(NULL));

        for (int i = 1; i <=6; ++i)
        {
            number = rand()%49+1;
            sleep(1);
            cout<<number<<"\a"<<endl;
        }

    return 0;
    }
