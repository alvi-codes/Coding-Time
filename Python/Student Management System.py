def create():
    file = open("StudentX.txt", "w")
    noofstudents = int(input("How many Students: "))
    for i in range(noofstudents):
        name = input("Enter the name of the student: ")
        email = input("Enter the email address of the student: ")
        home = input("Enter the home address of the student: ")
        tutor = input("Enter the tutor of the student: ")
        file.write(name + "#" + email + "#" + home + "#" + tutor + "\n")
    print("Entry was created!")
    file.close()

def append():
    file = open("StudentX.txt", "a")
    noofstudents = int(input("How many Students: "))
    for i in range(noofstudents):
        name = input("Enter the name of the student: ")
        email = input("Enter the email address of the student: ")
        home = input("Enter the home address of the student: ")
        tutor = input("Enter the tutor of the student: ")
        file.write(name + "#" + email + "#" + home + "#" + tutor + "\n")
    print("Entry was created!")
    file.close()

def view():
    file1 = open("StudentX.txt", "r")
    choice = input("Input x to view old file, y for latest file: ")
    if choice == "x":
        print(file1.read())
    if choice == "y":
        file2 = open("StudentY.txt", "r")
        print(file2.read())
        file2.close()
    file1.close()

def search():
    while True:
        file = open("StudentX.txt", "r")
        studentname = input("Enter the name of the student to search: ")
        found = 0
        for line in file:
            position = line.find("#")
            if studentname == line[:position]:
                print("%s has the details: %s"%(studentname,line[position:]))
                found = found + 1
        if found == 0:
            print("Not found")
            break
        file.close()

def substringsearch():
    while True:
        file = open("StudentX.txt", "r")
        substring = input("Enter part of the name of the student to search: ")
        found = 0
        for line in file:
            position = line.find("#")
            if substring in line[:position]:
                print("substring %s matched with: %s"%(substring,line))
                found = found + 1
        if found == 0:
            print("Not found")
            break
        file.close()

def delete():
    file1 = open("StudentX.txt", "r")
    file2 = open("StudentY.txt", "w")
    studentname = input("Enter the name of the student to delete: ")
    for line in file1:
        position = line.find("#")
        if studentname != line[:position]:
            file2.writelines(line)
    file1.close()
    file2.close()  

def menu():
    while True:
        choice = input('''Enter (1 = Create, 2 = Append, 3 = View, 4 = Search,
5 = Substring Search, 6 = Delete, AnyOther = End): ''')
        if choice == "1":
            create()
        elif choice == "2":
            append()
        elif choice == "3":
            view()
        elif choice == "4":
            search()
        elif choice == "5":
            substringsearch()
        elif choice == "6":
            delete()
        else:
            break
menu()
