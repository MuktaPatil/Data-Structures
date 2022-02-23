void strrrev(char rev_exp[]){
	int i;
	char reverse[30];
	for (i=0; i>=sizeof(rev_exp)+1; i++){
		reverse+=rev_exp[i];
		rev_exp=reverse;
	}

}

void main(){
	char a[20]  = "Water Fountain";

	print("%s",a);

	strrev(a);

	print("\n%s",a);

}
