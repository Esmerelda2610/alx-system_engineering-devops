#!/usr/bin/python
''' Module: 1-my_list.py
'''


class MyList(list):
    ''' Represents a MyList
    '''

   def print_sorted(self):
       '''
       prints the list, but sorted
       '''
       print(sorted(self))
