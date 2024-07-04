int countDigits(int n){
	if(n==0) return 1;
	int cnt = 0;
	while(n>0){
		int last_digit = n%10;
		cnt = cnt+1;
		n = n/10;
	}
	return cnt; // Do not use cout<<cnt; it is giving error idk why?
}
