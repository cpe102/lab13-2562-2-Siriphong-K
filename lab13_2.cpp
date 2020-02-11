#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double A[][N]){
//	A[N][N]={1,2,0,3,5,
//			0,8,7,-1,2,
//			4,4,3,5,1,
//			0,0,1,6,0,
//			1,2,3,4,5}
	for(int i=0;i<N;i++){
		cout<<"Row "<<i+1<<":";
		for(int j=0;j<N;j++){
		cin>>A[i][j];	
		}

	}

}
void findLocalMax(const double A[][N], bool B[][N]){
	for(int k=0;k<N;k++){
		B[0][k]=0;
		B[k][0]=0;
		B[N-1][k]=0;
		B[k][N-1]=0;
	}
for(int i=1;i<N-1;i++){
		for(int j=1;j<N-1;j++){
			if(A[i][j]>A[i-1][j]&&A[i][j]>A[i][j+1]&&A[i][j]>A[i+1][j]&&A[i][j]>A[i][j-1]){
				B[i][j]=1;
			}
			else{
				B[i][j]=0;
			}
}
}
}
void showMatrix(const bool B[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
}
