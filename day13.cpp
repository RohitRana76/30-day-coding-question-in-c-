#include<iostream>
using namespace std;

int main(){
    int noOfRedBloodCells = 5000000;
    int noOfWhiteBloodCells = 8000;
    int temp;

    temp = noOfRedBloodCells / noOfWhiteBloodCells;

    if((noOfRedBloodCells % noOfWhiteBloodCells) == 0){
        noOfWhiteBloodCells = 1;
    }

    else{
        noOfWhiteBloodCells = noOfRedBloodCells % noOfWhiteBloodCells;
    }

    cout<<"The ratio of red blood cells to white blood cells is  "<<temp<<" : "<<noOfWhiteBloodCells;
    return 0;
}
