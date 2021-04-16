// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
int c1 = 0;
int i;
int j;
int r=len-1;
for(i = 0; i < r; i++) {
for(j = i + 1; j < r+1; j++) {
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

while(arr[rg] > value){
rg--;
}

while(lg <= rg) { 
if(((arr[rg]+arr[lg]) == value)){if(lg<rg){c2++;
lg++;}
} else if(((arr[rg] + arr[lg]) < value)){if(lg<rg){lg++;}
}
else{rg--;
lg=0;
}
}
return c2;
}


int countPairs3(int *arr, int len, int value) {
int c3 = 0;
int ii = 0;

int med;
int index;

while(ii < len-1) {
int valuer = value-arr[ii];
int l = ii+1;
int r = len-1;

while (l <= r) {
med = l + (r - l) / 2;
if (arr[med] > valuer) {
r = med - 1;
} else if (arr[med] < valuer) {
l = med + 1;
} else {
index = med;
break;
}
}
if (index >= 0) {
for (int i = index; i > ii; i--) {
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

if(c3 >= 0) {
return c3;
} else { return 0; }
}

