// A Simple Recursive Function : GO HOME 

void goHome(X,Home){
	// Base Case 
	if(X==Home){
		cout<<"Reached Home"<<'\n';
	}

	X=X+1;
	goHome(X,Home);
}

int main() {
	int X=1;
	int Home=10;
	goHome(X,Home);
	return 0;
}
