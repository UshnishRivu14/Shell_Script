arr=[]

num = int(input("Enter the array no. : "))

print("Enter the array elements: ")
for i in range(num):
	arr.append(int(input()))

#sorting
for i in range(num-1):
	for j in range(num-i-1):
		if(arr[j]>arr[j+1]):
			temp = arr[j]
			arr[j] = arr[j+1]
			arr[j+1] = temp
			
print("Array after sort: ",end=" ")
for i in range(num):
	print(arr[i],end=" ")			 
