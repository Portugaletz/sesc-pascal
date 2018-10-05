#include <stdio.h>

int main() {
  int x, y;
  int arr[1000]={0,1,0};
  int newarr[1000]={0};
  scanf("%d%d", &x, &y);
  x+=1;
  for (int i=1;i<x;i++){
    for(int j=1;j<=i;j++){
      newarr[j]=arr[j-1]+arr[j];
    }
    newarr[i+1]=0;
    
    /*for(int v=0;v<x;v++){
      printf("%4d", newarr[v]);
    }*/
    //printf("\n");
    for (int k=0;k<=i;k++){
      arr[k]=newarr[k];
    }
    arr[i+2]=0;
  }
  /*for(int i=0;i<x;i++){
    printf("%4d", arr[i]);
  }*/
  printf("%d", arr[y]);
  return 0;
}
