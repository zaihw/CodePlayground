#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Dec 21 00:07:49 2019

@author: zw
"""

from random import randint
from time import sleep
md2=randint(1,30)
def gentree():
    print('\033c')
    for x in range(1,30,2):
        md1=randint(1,md2)
        if x==1:
            ch='$'
        elif md1%4==0:
            ch='o'
        elif md1%3==0:
            ch='i'
        else:
            ch='*'
        print("{:^33}".format(ch*x))
    print("{:^33}".format("|||"))
    print("{:^33}".format("|||"))
    sleep(.75)