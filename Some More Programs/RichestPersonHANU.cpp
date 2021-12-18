#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Process(string matrix[][3]){
    int size = 3;
    int i;
    for (i = 0; i < size; i++)
    {
        int m = 0;
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] == "Yes"){
                m++;
            }
        }
        if (m == 1)
            break;
    }
    cout << "Index at " << i << endl;
}

int main(){
    int size = 3;
    string arr[3][3] = {{"Yes", "Yes", "No"}, {"No", "Yes", "No"}, {"Yes", "Yes", "Yes"}};
    Process(arr);
    return 0;
}