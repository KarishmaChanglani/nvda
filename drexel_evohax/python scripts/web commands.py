
# coding: utf-8

# In[1]:

# Web interaction commands called from voice recognition app to Arduino's shell commands
# Author: Anna Lu
# Date: 4/19/15

import webbrowser

# Opens a web browser
def openbrowser():
    user_browser=webbrowser.get('windows-default')
    user_browser.open('http://www.google.com')
    
#TO DO:
    
# Selectively reads content relevant to search engine and term
def search(engine, term):
    # opens engine such as wikipedia or google
    # uses the appropriate engine to find relevant page
    # control + F to jump to relevant text content on page

# Opens a new tab
def newtab():
    
# Opens a new window
def newwindow():
    
appfound = False;

def openapp(app):
    # Searches start menu for program
    # Check if app opens successfully
        #set appfound = True
    #else (appfound == False):
        #voice prompt to download app
        #downloadapp(app)
        
def downloadapp(app):
    openbrowser()
    search(google, app + "download")
    #automates download and installation process
    

