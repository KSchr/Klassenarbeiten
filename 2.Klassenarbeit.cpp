#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char zk[101];
    int a,i,j;
    char h;

    cout << "Sortierung einer Zeichenkette!"<<endl<<endl;
    cout << "Wie lautet die Zeichenkette? (max 100 Zeichen; keien Leerzeichen!) "; cin >> zk;

    a = strlen(zk);

    for(i=0; i<a-1;i++) {
        for(j=0;j<a-1;j++) {
            if(zk[j]>zk[j+1]) {
                h=zk[j];
                zk[j] = zk[j+1];
                zk[j+1] = h;
            }
        }
    }
    cout<<zk;
}
