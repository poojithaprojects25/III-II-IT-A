a = 10
print(type(a))   #int

b = "IOT"
print(type(b)) #string

c = 20.2
print(type(c))  #float

d = 1+3j
print(type(d))  #complex
print()


#strings

s = "Hello !! This is single line quotes"
print(s)

s1 = """ This is 
multiline string"""
print(s1)
print()

#string handling 

print(s[0:2]) #printing first 2 characters using slice operator
print(s[4]) #printing 4th character of the string
print(s*2) #printing string twice
print(s+s1) #concatenation of s and s1
