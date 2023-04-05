line = "55222"

bit_twins = 0

input_bin = bin(int((line))) [::-1]
bin_array = [0]*32

for i in range(len(input_bin)-2):
    bin_array[i] = input_bin[i]

i = 0
while i< 29:
    test_str = ""
    for j in range(4):
        test_str = test_str + str(bin_array[i+j])
    if (test_str == "0110"):
        bit_twins += 1
        i += 4
    else:
        i += 1

print(bit_twins)



##################
print_str = ""
i = 0
for i in range(len(bin_array)-1, -1 , -1):
    print_str += str(bin_array[i])

print(bin(int(line)))
print(print_str)


