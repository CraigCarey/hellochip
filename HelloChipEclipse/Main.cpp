#include <iostream>
#include <unistd.h>

using namespace std;

int main (void)
{
    cout << "Hello Chip from Eclipse"<< endl;

    cout << "Hello Chip from Eclipse again" << endl;

    int i = 0;

    while(1)
    {
        cout << "i = " << i << endl;
        i++;
        usleep(1000000);
    }

    return 0;

}
