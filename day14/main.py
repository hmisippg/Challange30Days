import numpy as np
import matplotlib.pyplot as plt

# Lingkaran
PI = np.pi
sudut = np.linspace(0,2*PI,100)
radius = 5

x = radius * np.cos(sudut)
y = radius * np.sin(sudut)

# inisialisasi
plt.plot(x,y)

# tampil
plt.show()