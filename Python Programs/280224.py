#import webbrowser
#import os

#while True:
#    inp=input("Enter a single line string")
#    if inp=='e':
#        break
#    else :
#        file=open("taxt.txt",'r')
#        #file.write(inp)
#        print(file.read())
#        file.close()
#pickle: Store Emp class objects into emp.dat file
#pickle: Store Emp class objects into emp.dat file
import emp,pickle
from emp import*      
f=open('emp.dat','wb')
n=int(input("How may records to store: "));
for i in range(n):
    id1=int(input('Enter Roll: '))
    name=input('Enter Name: ')
    sal=float(input('Enter Marks: '))
    e=Emp(id1,name,sal)
    e.display()
    pickle.dump(e,f)
f.close()

#
f=open('stu.dat','rb')
print("Student Records are as follows\n");
while True:
    try:
        obj=pickle.load(f)
        obj.display()
    except EOFError:
        print('Endof file reached')
        break
f.close()


