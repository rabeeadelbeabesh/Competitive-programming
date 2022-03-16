void staircase(int n) {
	int i = 1;
	while (n>0){
		for (int a = 0; a<n - 1; ++a)cout << " ";
		for (int a = 0; a<i; a++)cout << "#";
		cout << "\n";
		i++;
		n--;

	}
}