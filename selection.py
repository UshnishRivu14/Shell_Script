def selection(arr):
	num = len(arr)
	for i in range(num-1):
		small_pos = i
		for j in range(i+1,num):
			if(arr[j]<arr[small_pos]):
				small_pos = j
		
		arr[i],arr[small_pos]=arr[]		







arr = [4,6,1,9,3,7]

print("Array before sort: ", arr)
selection(arr)
print("Array after sort: ", arr)
