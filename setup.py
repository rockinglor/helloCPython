#sudo apt-get update //or sudo  apt-get ¡Vfix-missing.
#sudo apt-get install python3-dev #for Linux
#sudo apt-get install python-dev #for Linux
#find / | grep 'Python.h'
# python3 setup.py build_ext --inplace
from distutils.core import setup, Extension
 
module1 = Extension('hello', sources = ['hello.c'])
 
setup (name = 'PackageName',
       version = '1.0',
       description = 'This is a demo package',
       #library_dirs=['/usr/include/python3.5m/'],#for raspberryPi       
       ext_modules = [module1])