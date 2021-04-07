template <class T>
T order_statistics (std::vector<T> a, unsigned n, unsigned k)
{
	using std::swap;
	for (unsigned l=1, r=n; ; )
	{
		
		if (r <= l+1)
		{
			
			if (r == l+1 && a[r] < a[l])
				swap (a[l], a[r]);
			return a[k];
		}
		
		// упорядочиваем a[l], a[l+1], a[r]
		unsigned mid = (l + r) >> 1;
		swap (a[mid], a[l+1]);
		if (a[l] > a[r])
			swap (a[l], a[r]);
		if (a[l+1] > a[r])
			swap (a[l+1], a[r]);
		if (a[l] > a[l+1])
			swap (a[l], a[l+1]);
		
		unsigned
			i = l+1,
			j = r;
		const T
			cur = a[l+1];
		for (;;)
		{
			while (a[++i] < cur) ;
			while (a[--j] > cur) ;
			if (i > j)
				break;
			swap (a[i], a[j]);
		}

		
		a[l+1] = a[j];
		a[j] = cur;

	
		if (j >= k)
			r = j-1;
		if (j <= k)
			l = i;

	}
}