from setuptools import find_packages
from setuptools import setup

setup(
    name='msg_store',
    version='0.0.0',
    packages=find_packages(
        include=('msg_store', 'msg_store.*')),
)
