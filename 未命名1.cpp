bool ListDelete(SqList &L, int i, Elemtype &value){
//删除顺序表L中最小值元素结点，并通过引用参数value返回其值
//若删除成功，则返回ture，否则返回false		
	if(L.length==0)
	return false;
	value=L.data[0];
	int min=0;
	for(int i;i<L.length;i++)
		if(L.data[i]<value){
			value=L.data[i];
			min=i;
		}
	L.data[min]=L.data[L.length-1];
	L.length--;
	return ture; 	
} 
