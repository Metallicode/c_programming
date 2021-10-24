#include <stdio.h>

void swap(int v[], int i, int j);
void qsort(int v[], int left, int right);

int main(void)
{

	int valArr [] = {2,546,7,87,576,4,-4,-50,34,7,687,25,264,765,3,42,46,21};
	
	int arrLen = sizeof(valArr) / sizeof(*valArr);
	
	qsort(valArr, 0, arrLen-1);
	
	for(int i = 0; i < arrLen; i++)
      	printf("%d ", valArr[i]);

	printf("\n");
	return 0;
}

void qsort(int v[], int left, int right){

	int last;
	
	if(left >= right)
		return;
		
	swap(v, left, (left+right)/2);
	last=left;
	for (int i = left+1; i<=right; i++)
		if(v[i]<v[left])
			swap(v,++last,i);
	swap(v,left,last);
	qsort(v,left,last-1);
	qsort(v,last+1,right);
}


void swap(int v[], int i, int j){

	int temp = v[i];
	v[i] = v[j];
	v[j] = temp;

}



