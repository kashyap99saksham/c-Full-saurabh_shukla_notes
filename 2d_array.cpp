//2d array with pointer
#include <iostream>
using namespace std;
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--)
  {
	    int N;
	    cin >> N;
	    
	    // Declaring mat as pointer to pointer
	    int **mat;
	
	    // mat pointer contains array of pointer to array
    	mat = new int*[N];
    	
    	// Taking input to mat[][]
    	for(int i = 0;i<N;i++){
    	    mat[i] = new int[N];
    	}
    	
    	for(int i = 0;i<N;i++){
    	    for(int j = 0;j<N;j++){
    	        cin >> mat[i][j];
    	    }
    	}
    	
    	twoDimensional(mat, N);     
	}
	
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/* Function to take input for 2D array elements
* Note : Mention matrix in argument also.
* N : size of matrix
*/
void twoDimensional(int **p,int N){
    
    // Loop to iterate through matrix
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            cout<<p[i][j]<<" ";
            
        }
        cout << endl;
    }
    
}
