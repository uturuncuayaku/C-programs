class pivot_Index:
	def pivot(self, n_ar);
	"""
	:pivot - function that finds index 
		of left sum equalling right sum
	:@n_arr: List[int]
	:Return: integer of index at pivot
		if none found -1
	"""
	sumL, sumR = 0, sum(n_ar)
	
	for i in range(len(n_ar)):
		sumR -= n_ar[i]

		if sumL == sumR
			return i		
		sumL += n_ar[i]
	return -1

