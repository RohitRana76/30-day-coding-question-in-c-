#include<iostream>
using namespace std;

int main(){
    int f,u,o,n;

    cout<<"Enter the size of free bytes available in disk"<<endl;
    cin>>f;

    cout<<"Enter the size of used bytes available in disk"<<endl;
    cin>>u;

    cout<<"Enter the size of bytes deleted from the used disk"<<endl;
    cin>>o;

    cout<<"Enter the size of new file created in disk in bytes"<<endl;
    cin>>n;
     
     int totalFloppyDiskSize = f + u;

    int currentUsedDiskSize = f - u;
    currentUsedDiskSize = currentUsedDiskSize + n;

    int FreeDiskSize = totalFloppyDiskSize - currentUsedDiskSize;
    cout<<"Total floppy disk size available is: "<<totalFloppyDiskSize<<endl;

    cout<<"The free space available in floppy disk is : "<<FreeDiskSize<<endl;
    return 0;
}
