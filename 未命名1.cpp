bool ListDelete(SqList &L, int i, Elemtype &value){
//ɾ��˳���L����СֵԪ�ؽ�㣬��ͨ�����ò���value������ֵ
//��ɾ���ɹ����򷵻�ture�����򷵻�false		
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
