#include<iostream>
using namespace std;

int main(){
    int totalPacket = 0;
    int packetCount = 0;

    for(int i=8;i<=400;i=i+8){
        totalPacket = totalPacket + i;
        packetCount++;
    }

    cout<<"the total number of packets requires to pack 400 hotdogs are :"<<packetCount<<" packets"<<endl;
    return 0;
}
