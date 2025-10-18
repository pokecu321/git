import tkinter as tk



# Fungsi untuk menambah angka ke layar

def on_click(button_text):

  current = entry.get()

  entry.delete(0, tk.END)

  entry.insert(tk.END, current + button_text)



# Fungsi untuk membersihkan layar

def clear():

  entry.delete(0, tk.END)



# Fungsi untuk menghitung hasil

def calculate():

  try:

    result = eval(entry.get()) # eval digunakan untuk mengevaluasi string sebagai ekspresi matematika

    entry.delete(0, tk.END)

    entry.insert(tk.END, result)

  except:

    entry.delete(0, tk.END)

    entry.insert(tk.END, "Error")



# Membuat jendela aplikasi

root = tk.Tk()

root.title("Kalkulator Sederhana")



# Membuat tampilan teks (entry)

entry = tk.Entry(root, width=20, font=("Arial", 24), borderwidth=5, relief="sunken", justify="right")

entry.grid(row=0, column=0, columnspan=4)



# Menentukan tombol-tombol kalkulator

buttons = [

  ('7', 1, 0), ('8', 1, 1), ('9', 1, 2), ('/', 1, 3),

  ('4', 2, 0), ('5', 2, 1), ('6', 2, 2), ('*', 2, 3),

  ('1', 3, 0), ('2', 3, 1), ('3', 3, 2), ('-', 3, 3),

  ('0', 4, 0), ('.', 4, 1), ('+', 4, 2), ('=', 4, 3)

]



# Membuat tombol untuk kalkulator

for (text, row, column) in buttons:

  button = tk.Button(root, text=text, width=5, height=2, font=("Arial", 18), command=lambda text=text: on_click(text))

  button.grid(row=row, column=column)



# Tombol C (clear) dan = (hitung)

clear_button = tk.Button(root, text="C", width=5, height=2, font=("Arial", 18), command=clear)

clear_button.grid(row=5, column=0, columnspan=2)



calc_button = tk.Button(root, text="=", width=5, height=2, font=("Arial", 18), command=calculate)

calc_button.grid(row=5, column=2, columnspan=2)



# Menjalankan aplikasi Tkinter

root.mainloop()