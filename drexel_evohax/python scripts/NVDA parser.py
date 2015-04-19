
# coding: utf-8

# In[2]:

# A parsing function that parses blocks of raw text 
# into sentences and paragraphs to be passed to the speech to text reader NVDA
# Author: Anna Lu
# Date: 4/19/15

import re
import time

def msgparse(rawtext):

    #Use regular expressions to separate by punctuation into a list of words
    textlist = re.split(r' *[\.\?!][\'"\)\]]* *', rawtext)

    curr = 0
    sentence = textlist[curr]

    if(curr < len(textlist)):
        curr += 1
        nxt = textlist[curr]
         
    if(curr > 0):
        curr -= 1
        previous = textlist[curr]

    #iteratively reads the entire paragraph with pauses between sentences
    for curr in textlist:
        curr
        time.sleep(0.5)
        
    #TO DO:
    #Pass variables nxt, previous, and curr to NVDA speech reader's mouseHandler.py
    
    #Action on up arrow: read next sentence
    
    #Action on down arrow: read previous sentence
    
    #Action on right arrow: read entire paragraph


# In[19]:

print sentence 
print nxt
print previous

