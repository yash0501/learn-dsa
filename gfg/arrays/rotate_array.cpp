// { Driver Code Starts
#include<stdio.h>


 // } Driver Code Ends
//User function Template for C

//Function to rotate an array by d elements in counter-clockwise direction. 
void rotateArr(int arr[], int d, int n){
    // code here
    int x[d];
    int i;
    if(d>n){
        d=d%n;
    }
    
    for(i=0;i<d;i++){
        x[i]=arr[i];
    }
    for(i=0;i<n-d;i++){
        arr[i]=arr[i+d];
    }
    for(i=n-d;i<n;i++){
        arr[i]=x[i-(n-d)];
    }
    
}

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	scanf("%d",&t);
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    scanf("%d%d",&n, &d);
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        scanf("%d",&arr[i]);
	    }
	    //calling rotateArr() function
	    rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        printf("%d ",arr[i]);
	    }
	    printf("\n");
	}
	return 0;
}  // } Driver Code Ends
