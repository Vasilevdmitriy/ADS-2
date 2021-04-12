// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
 // clock_t start = clock();
  
  int c1 = 0;
  for(i = 0;i < len - 1;i++){
    for(j = i + 1;j < len;j++){
      if((arr[i] + arr[j]) == value)c1++;
  }
  }
  if(c1 >= 0){
  return c1;} else return 0;
  
  //clock_t end = clock();
 // double seconds = (double)(end - start) / CLOCKS_PER_SEC;
 // return seconds;
}

int countPairs2(int *arr, int len, int value) {
  int rg = len - 1;
  int lg = 0;
  int c2 = 0;
  
  while(arr[rg] > value)
    rg--;
  while(lg > rg){
      if((arr[lg] + arr[rg]) == value){c2++;
      lg++;}else{
      rg--;
       lg = 0;
      } 
  }
  if(c2 >= 0) return c2; else
  return 0;
}

int countPairs3(int *arr, int len, int value) {
 
  
  
  return 0;
}
