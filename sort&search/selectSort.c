void selectSort(int *arr, int n){
	for(i=0; i<n; i++){
		min = i; //�C�@�^�X�����e�@�ӡA�åB�^�X�����ɳ̤p�ȷ|�b��i����m 
		for(j=i+1, j<n; j++)
			if(arr[j]<arr[i])  //�q��i+1���n�A��Ӧ^�X�̤p�Ȥp�h���H�A���O�^�X�����e�~�h��m 
				min=j;
		if(min!=i)  //�o�^�X�̤p�Ȧ����H���� 
			swap(arr[i], arr[min]);
	}
}
