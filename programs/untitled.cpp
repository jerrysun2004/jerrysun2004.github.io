vector<int> vi;
	for (int i=0; i< n; i++)
		vi.push_back(i+1);
	if (p>fact(n))
		return 0;
	int d=n;
	int i=0;
	int sum=0;
	while (d!=0){
		{

			int a=p/fact(d-1);
			arr[i]=vi[a];
			p-=a;
			i++;
			d--;
		}
	}

	return 0;
}
