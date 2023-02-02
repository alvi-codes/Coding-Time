
'''Encryption'''
message=input("Enter your message :-   ")
e_message=""
for i in range(len(message)):
    n_e=int(ord(message[i])+3)
    e_message=e_message+(chr(n_e))
print(e_message)

'''Decryption'''
print("The message to be decryted is :-   ",e_message)
d_message=""
for y in range(len(e_message)):
    n_d=int(ord(e_message[y])-3)
    d_message=d_message+(chr(n_d))
print(d_message)











