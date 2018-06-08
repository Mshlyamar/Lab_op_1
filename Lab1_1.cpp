int solution(int number){
	int i;
	int n = 0;
	for(i = 1; i<number; i++){
  		if(i%3==0 || i%5==0){
  		n = n + i;
  	}
	}
	return n;
}