//--------------------------------------------------
// 	Hugo Rafael de Lima
//  Codcad 2018 - Data structs
// 	problem: interval product
//--------------------------------------------------
// libraries and definitions 

#include <iostream>
#include <cstdio>
#include <cstring>

#define maxn 100010
#define debug(n) for(int u=1; u<n; u++)cout << v[i] << " ";

using namespace std;

//--------------------------------------------------
// global variables

int n, q, v[maxn], tree[4*maxn];

//--------------------------------------------------
// control signal of the tree

int signal(int x){

	if(x > 0) return 1;
	else if(x < 0) return -1;
	else return 0;

}

//--------------------------------------------------
// build the tree

void build(int node, int l, int r){

	// base case
	if( l == r ){
		tree[node] = v[l];
		return;
	}

	// subdivide for conquest
	int mid = (l+r)/2;
	int nodel = 2*node;
	int noder = 2*node+1;

	// construct the sons
	build(nodel, l, mid);
	build(noder, mid+1, r);

	// recursive operation
	tree[node] = tree[nodel]*tree[noder];

}

//--------------------------------------------------
// consult the tree 

int consult(int node, int l, int r, int start, int end){

	// base case
	if(l == start and r == end) return tree[node];

	// subdivide to search
	int mid = (l+r)/2;
	int nodel = 2*node;
	int noder = 2*node+1;

	// now will be similar to a binary search
	// basically, i going to the way that my interval are include

	// my recursive case
	if(end <= mid) // all to left
		return consult(nodel, l, mid, start, end);
	else if(start > mid) // all to right
		return consult(noder, mid+1, r, start, end);
	else	// fuzzy case
		return ( consult(nodel, l, mid, start, mid)*consult(noder, mid+1, r, mid+1, end) );

}

//--------------------------------------------------
// update the tree

void update(int node, int l, int r, int idx, int val){

	// base case
	if(l == r){
		tree[node] = val;
		return; 
	}

	// subdivide for conquest
	int mid = (l+r)/2;
	int nodel = 2*node;
	int noder = 2*node+1;

	// recursive cases
	if(idx <= mid) // all to left
		update(nodel, l, mid, idx, val);
	else if(idx > mid) // all to right
		update(noder, mid+1, r, idx, val);

	tree[node] = tree[nodel]*tree[noder];
}

//--------------------------------------------------
// the main function

int main(void){

	while( scanf(" %d %d", &n, &q) != EOF ){

		// clear the tree
		memset(tree, 0, sizeof(tree));

		// imput the array
		for(int i=1; i<=n; i++){
			scanf(" %d", &v[i]);
			v[i] = signal(v[i]);
		}

		// now, i going to build the tree
		build(1, 1, n);

		// finally i will make the queries
		for(int i=0; i<q; i++){
			char a;
			int b, c;	

			// 'C' to update
			// 'P' to consult

			scanf(" %c %d %d", &a, &b, &c);

			if(a == 'C'){ // update an element for the leafs
				
				c = signal(c);

				update(1, 1, n, b, c); 

			}else if(a == 'P'){ // consult some interval of array
					
				int r = consult(1, 1, n, b, c);	

				if(r == 1) printf("+");
				else if(r == -1) printf("-");
				else printf("0");

			}

		}

		printf("\n");
	}

	return 0;
}

//--------------------------------------------------
