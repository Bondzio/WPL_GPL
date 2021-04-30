import sys

print (f"This is the name of the script: {sys.argv[0]}")
print (f"Number of arguments:            {len(sys.argv)}")
print (f"The arguments are:              {str(sys.argv)}")
'''
python sample.py Hello Python 
Then inside sample.py, arguments are stored as: 

sys.argv[0] == ‘sample.py’ 
sys.argv[1] == ‘Hello’ 
sys.argv[2] == ‘Python’
'''
