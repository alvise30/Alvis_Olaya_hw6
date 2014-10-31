import pylab
import numpy

for i in range(30):

	data = numpy.loadtxt(open(str(i+1)+'.dat', 'r'))
	x = data[:,1]
	y = data[:,2]
		
	pylab.plot(x, y, 'k')
	pylab.xlabel('x')
	pylab.ylabel('y')
	pylab.title(str(i+1)+' x-y')
	pylab.savefig('poblaciones_'+str(i+1)+'_20.pdf')
	pylab.close()


