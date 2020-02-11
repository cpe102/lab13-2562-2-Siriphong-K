#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
//Write your code here.
	for(int i=1;i<N;i++){
		for(int k=0;k<N;k++){
			if(k==i){
				cout<<"{"<<d[k]<<"}";
			}else{
				cout<<d[k]<<" ";
			}
			
			
		}
		cout<< "=>";
		int L;
		for(int j=i;j>0;j--){
			if(d[j]>d[j-1]){
				swap(d,j,j-1);
				
			}		
		}
		for(int k=0;k<N;k++){
			if(k==k-2){
				cout<<"{"<<d[k]<<"}";
			}else{
				cout<<d[k]<<" ";
			}
										
		}
		cout<<"\n";	
//	why 0 become 1 for this code 
//for(int o=N;o>1;o--){
//	for(int i=0;i<N;i++){
//		if(d[i]<d[i+1]){
//			swap(d,i,i+1);
//		}
////		if(d[i]==1)d[i]=0;
//	}
//	for(int j=0;j<N;j++)cout<<d[j]<<" ";
//	cout<<"\n";
//}
	
	}
}
int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
