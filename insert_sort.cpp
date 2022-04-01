#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::vector;


vector<int> in_sort(vector<int> serie, int n){
    int i, j, temp;

    for(i=0;i<n;i++){

        for(j=n-1;j>i;j--){
            if(serie[j]<serie[j-1])
            {
                temp=serie[j];
                serie[j]=serie[j-1];
                serie[j-1]=temp;
            }
        }
    }
    return serie;
}

int main(){
    int i, a, n;

    cout<<"Please enter the number of elements\n";
    cin>>n;

    vector<int> serie;
    vector<int> res;
    cout<<"Please enter the elements of the vector\n";

    for(i=0;i<n;i++){
        cin>>a;
        serie.push_back(a);
    }

    res=in_sort(serie,n);

    for(i=0;i<n;i++){
        cout<<res[i]<<",";
    }
    
}