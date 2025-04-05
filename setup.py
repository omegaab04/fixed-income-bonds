from setuptools import setup, Extension

bond_ext = Extension(
    'bond',
    sources=['bond_pricing/bond_wrapper.c'],
)

setup(
    name='bond_pricing',
    version='0.1',
    description='Fast bond pricing with C backend',
    packages=['bond_pricing'],
    ext_modules=[bond_ext]
)