x = int(input("angka pertama: "))
menu = input("pilih operasi (+, -, *, /): ")
y = int(input("angka kedua: "))

tambahan = x + y
pengurangan = x - y
perkalian = x * y
pembagian = x / y

if menu == "+":
    print( x, "+", y, "=", tambahan)
elif menu == "-":
    print( x, "-", y, "=", pengurangan)
elif menu == "*":
    print( x, "*", y, "=", perkalian)
elif menu == "/":
    if y == 0:
        print("error: pembagian dengan nol")
    else:
        print( x, "/", y, "=", pembagian)

else:
    print("operasi tidak ditemukan")