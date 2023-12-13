#include <stdio.h>
#include <stdlib.h>

void exch(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

typedef int Item;
typedef struct Heap {
	Item *v;
	int size;
} Heap;

Heap *inicializa(int t) {
	
	Heap *new = malloc(sizeof(Heap));
	new->v = malloc(sizeof(Item) * (t+1));
	new->size = 0;

	return new;
}

void fixUp(Heap *h, int i) {
	
	while (i > 1 && h->v[i/2] < h->v[i]) {
		exch(&h->v[i/2],&h->v[i]);
		i /= 2;
	}
}

void insert(Heap *h, Item item) {
	
	h->v[h->size+1] = item;
	h->size++;
	fixUp(h,h->size);
}

void fixDown(Heap *h, int i) {
	
	int child;
	while (i*2 <= h->size) {
		child = 2*i;
		if (child != h->size && h->v[child] < h->v[child+1])
			child++;

		if (h->v[child] > h->v[i]) {
			exch(&h->v[child],&h->v[i]);
			i = child;
		} else 
			break;
	}
}

void pop(Heap *h) {

	exch(&h->v[1],&h->v[h->size]);
	h->size--;
	fixDown(h,1);
}

void heapfy(Heap *h) {

    for (int i = h->size; i > 0; --i)
        fixUp(h,i);

}