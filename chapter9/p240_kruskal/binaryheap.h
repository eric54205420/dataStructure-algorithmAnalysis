#include <stdio.h>
#include <malloc.h>
#include "kruskal.h"

#define ElementType Edge
#define ElementTypePtr EdgePtr

#define Error(str) printf("\n error: %s \n",str)   

struct BinaryHeap;
typedef struct BinaryHeap *BinaryHeap;

void swap(ElementTypePtr x, ElementTypePtr y);
BinaryHeap initBinaryHeap(int capacity);
void insertHeap(ElementTypePtr value, BinaryHeap bh);
ElementType deleteMin(BinaryHeap);
int isFull(BinaryHeap bh);
int isEmpty(BinaryHeap bh);
void percolateUp(int index, BinaryHeap bh);
void percolateDownFromOne(int index, BinaryHeap bh);
void printBinaryHeap(BinaryHeap bh);
void printBinaryHeapFromZero(BinaryHeap bh);

struct BinaryHeap 
{
	int capacity;
	int size;	
	ElementTypePtr *elements;		
};