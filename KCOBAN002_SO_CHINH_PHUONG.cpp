#include<iostream>
#include<math.h>

using namespace std;

bool sochinhphuong(long long i){
    float a = sqrt(i);
    if(int(a)*int(a) == i)
        return true;
    return false;
}
bool cs_chinhphuong(long long i){
    int arr[20];
    int count=0;
    while(i>0){
        arr[count] = i % 10;
        i/= 10;
        count++;
    }
    int check = 0;
    for(int j = 0; j<count; j++){
        if(sochinhphuong(arr[j]) == false){
            check = 1;
            break;
        }
    }
    if(check == 0)
        return true;
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        long long i;
        cin >> k;
        long long min = pow(ceil(sqrt(pow(10,k-1))),2);
        while(1){
            if(cs_chinhphuong(min)){
                cout << min << endl;
                break;
            }
            else{
                min += 2*sqrt(min) +1;
            }
        }
    }
    return 0;
}