//linear search
#include <stdio.h>

int linear(int arr[], int n, int searchItem){
  int i;
  for(i=0;i<n;i++){
    if(arr[i]==searchItem){
      return i;
    }
  }
  return -1;
}

int main(void) {
  int arr[50],n,searchItem,i,position;
  
  printf("Enter the number of element in array\n");
  scanf("%d",&n);
  printf("Enter the aray elements:\n");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the search item:");
  scanf("%d",&searchItem);
  position=linear(arr,n, searchItem);
  if(position>-1){
    printf("Search item %d found at %d location",searchItem,position+1);
  }else{
    printf("Search item %d Not found at any loaction!!!",searchItem);
  }
  
  return 0;
}
