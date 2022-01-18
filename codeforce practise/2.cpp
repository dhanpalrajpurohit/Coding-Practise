#include <bits/stdc++.h>
using namespace std;


void merge(int *array, int l,int m,int r){
    int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //extra element in left array
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}


void mergesort(int *array,int l,int r){
    int m;
	int i;
    if(l < r) {
        m = l+(r-l)/2;
            mergesort(array, l, m);
            mergesort(array, m+1, r);
            merge(array, l, m, r);
    }
}

int main(){
    int array[9] = {1,15,25,45,42,21,17,12,11};
    int size=sizeof(array)/sizeof(array[0]);
    mergesort(array,0,size-1);
    for(int i=0;i<size;i++){
        cout<<array[i]<<"\n";
    }
}