/*
||========================================================
|| CS460: Algorithm Design Methodologies
|| EECS Dept, Wichita State University
|| Fall, 2013
|| 
|| Prog#: 10
|| Question#: 2
|| Student Name (Last, First): Trang, Chinh
|| EECS User ID: cdtrang
|| WSU ID: C824N474	
|| Date: 11/19/2013
||
||========================================================
*/

/* header file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Prototype */
void towers(int,char,char,char);

int main(void)
{ 
	int n;
	printf("Enter the number of disks on Tower A: ");
	scanf("%d",&n);
	printf("The Tower of Hanoi involves the moves :\n");
	towers(n,'A','B','C');
	printf("\n");
	return 0;
}
	
void towers(int n, char fromrod, char torod, char auxrod)
{ 
	/* If only 1 disk, make the move and return */
	if(n==1)
	{ printf("\nMove disk 1 from Tower %c ---> Tower %c", fromrod, torod);
	  return;
	}
	
	/* Move top n-1 disks from A to C, using B as auxiliary */
	towers(n-1, fromrod, auxrod, torod);
	/* Move remaining disks from A to B */
	printf("\nMove disk %d from Tower %c ---> Tower %c", n, fromrod, torod);
	/* Move n-1 disks from C to B using A as auxiliary */
	towers(n-1,auxrod,torod,fromrod);
}