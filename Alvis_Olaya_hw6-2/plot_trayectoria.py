import numpy as np
import matplotlib.pyplot as plt
import sys
from mpl_toolkits.mplot3d import Axes3D

print 'Python non e veloce per fare delle grafiche, ma i resultati sono grandiosi; aspetta un attimo'

Re = 6378137
a=sys.argv[1]
b=a.split(".")
datos = np.loadtxt(a)
x = datos[:,0]
y = datos[:,1]
z = datos[:,2]

fig = plt.figure()
ax = Axes3D(fig)
ax.set_aspect('equal')
ax.set_xlabel("$x$",fontsize=25)
ax.set_ylabel("$y$",fontsize=25)
ax.set_zlabel("$z$",fontsize=25)
ax.set_title("Trayectoria del proton", fontsize=25)
ax.plot(datos[:,0]/Re,datos[:,1]/Re,datos[:, 2]/Re,'g')

plt.savefig(""+b[0]+".pdf")
