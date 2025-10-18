# nama = muhammad saifuddin
# sekolah = smk negeri 1 boyolangu
# kelas = x rpl 2
# kelompok = Ghali


# Program Menentukan Kategori BMI 
print("=== Program Hitung BMI ===")

# Input data
berat = float(input("Masukkan berat badan (kg): "))
tinggi = float(input("Masukkan tinggi badan (m): "))

# Hitung BMI
bmi = berat / (tinggi ** 2)
print(f"\nNilai BMI Anda: {bmi:.2f}")

# Tentukan kategori dengan if, elif, else
if bmi < 18.5:
    kategori = "Kurus"
else:
    if bmi >= 18.5 and bmi <= 24.9:   # nested + logical operator
        kategori = "Normal / Ideal"
    elif bmi >= 25 and bmi <= 29.9:
        kategori = "Gemuk (Overweight)"
    elif bmi >= 30 and bmi <= 34.9:
        kategori = "Obesitas Kelas I"
    elif bmi >= 35 and bmi <= 39.9:
        kategori = "Obesitas Kelas II"
    else:
        kategori = "Obesitas Kelas III (Morbid)"

# Output kategori
print(f"Kategori BMI: {kategori}")

