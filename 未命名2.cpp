void Reverse(SqList &L){
	Elemtype temp;
	for(i=0;i<L.length/2;i++){
		temp=L.data[i];
		L.data[i]=L.data[length-i];
		L.data[length-i]=temp;
	}
}
