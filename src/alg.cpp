// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
int c1 = 0;
for(int i = 0;i < len - 1;i++) { 
for(int j = i + 1; j < len; j++) { 
if((arr[i] + arr[j]) == value)c1++;
}
}
if(c1 >= 0) {
return c1;} else {return 0;}
}

int countPairs2(int *arr, int len, int value) {
int rg = len - 1;
int lg = 0;
int c2 = 0;

while(arr[rg] > value)
rg--;
while(lg <= rg){ 
if((arr[lg] + arr[rg]) == value){ c2++;
lg++;}else{ 
rg--;
lg = 0;
} 
}
if(c2 >= 0) return c2; else{ 
return 0;}
}

int countPairs3(int *arr, int len, int value) { 
int c3 = 0;
int ii=0;

int med;
int index;

  

while(ii<len-1){
int valuer = value-arr[ii];
int l = ii+1;
int r = len-1;


while (l <= r) { 
med = l + (r - l) / 2;
if (arr[med] > valuer) { 
r = med - 1;
} else if (arr[med] < valuer) { 
l = med + 1;
} else if (arr[med] == valuer) { 
index = med;
break;
} else { 
return 0;
}
}
if (index >= 0) {
for (int i = index; i >= 0; i--) {
if (arr[i] == valuer) {
c3++;
}
}
}
if (len > index) {
for (int i = index + 1; i < len; i++) {
if (arr[i] == valuer) {
c3++;
}
}
}
ii++;
}

if(c3 >= 0){return (c3/2);
}else return 0;
}

