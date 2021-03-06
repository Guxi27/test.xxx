bool DeleteList(SqList &L, Elemtype s; Elemtype t){
	int i,j;
	if(s>=t||L.length==0)
		return false;
	for(i=0;i<L.length&&L.data[i]<s;i++)
		if(i>=L.length)	return false;
	for(j=0;j<L.length&&L.data[i]>t;j++)
	for(;j<L.length;i++,j++)	
	L.data[i]=L.data[j];
	L.length=i;	
	return ture;
}
