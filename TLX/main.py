import tkinter as tk
def klik_tombol(angka):
    teks_sekarang = layar.get()
    layar.delete(0, tk.END)
    layar.insert(0, teks_sekarang + str(angka))
    
jendela = tk.Tk()
jendela.title("Simple calc")

layar = tk.Entry(jendela, width=35, borderwidth=5, justify="right")
layar.grid(row=4, column=0, columnspan=3, padx=10, pady=10, sticky="we")

nol = tk.Button(jendela, text="0", padx=20, pady=20, command=lambda: klik_tombol(0))
nol.grid(row=3,column=1)

tujuh =  tk.Button(jendela, text="7", padx=20, pady=20, command=lambda: klik_tombol(7))
tujuh.grid(row=2,column=0)

delapan =  tk.Button(jendela, text="8", padx=20, pady=20, command=lambda: klik_tombol(8))
delapan.grid(row=2,column=1)

sembilan =  tk.Button(jendela, text="9", padx=20, pady=20, command=lambda: klik_tombol(9))
sembilan.grid(row=2,column=2)

empat =  tk.Button(jendela, text="4", padx=20, pady=20, command=lambda: klik_tombol(4))
empat.grid(row=1,column=0)

lima =  tk.Button(jendela, text="5", padx=20, pady=20, command=lambda: klik_tombol(5))
lima.grid(row=1,column=1)

enam =  tk.Button(jendela, text="6", padx=20, pady=20, command=lambda: klik_tombol(6))
enam.grid(row=1,column=2)

satu =  tk.Button(jendela, text="1", padx=20, pady=20, command=lambda: klik_tombol(1))
satu.grid(row=0,column=0)

dua =  tk.Button(jendela, text="2", padx=20, pady=20, command=lambda: klik_tombol(2))
dua.grid(row=0,column=1)

dua =  tk.Button(jendela, text="3", padx=20, pady=20, command=lambda: klik_tombol(3))
dua.grid(row=0,column=2)

jendela.mainloop()