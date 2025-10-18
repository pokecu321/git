def konversi_suhu(nilai, dari, ke):
    dari = dari.lower()
    ke = ke.lower()

    # Validasi input satuan
    if dari not in ["c", "f", "k", "r"] or ke not in ["c", "f", "k", "r"]:
        return "Error: Satuan harus 'C', 'F', 'K', atau 'R'!"

    # Validasi nilai suhu
    if dari == "k" and nilai < 0:
        return "Error: Suhu Kelvin tidak boleh negatif!"

    # Jika satuan asal == tujuan, tidak perlu konversi
    if dari == ke:
        return nilai

    # Konversi suhu
    if dari == "c":  
        if ke == "f":
            return (nilai * 9/5) + 32
        elif ke == "k":
            return nilai + 273.15
        elif ke == "r":
            return nilai * 4/5

    elif dari == "f":  
        if ke == "c":
            return (nilai - 32) * 5/9
        elif ke == "k":
            return (nilai - 32) * 5/9 + 273.15
        elif ke == "r":
            return (nilai - 32) * 4/9

    elif dari == "k":  
        if ke == "c":
            return nilai - 273.15
        elif ke == "f":
            return (nilai - 273.15) * 9/5 + 32
        elif ke == "r":
            return (nilai - 273.15) * 4/5

    elif dari == "r":  
        if ke == "c":
            return nilai * 5/4
        elif ke == "f":
            return (nilai * 9/4) + 32
        elif ke == "k":
            return (nilai * 5/4) + 273.15

    return "Error: Konversi tidak valid!"
