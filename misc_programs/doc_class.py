
"""
An implementation of a class for text documents.
I include examples of its use. I apologize that the commenting is sparse.
I have spent as much time as I could.   I need to try the Module 2 Quiz 3
try to get a few more times to try to get 10-out-of-10.  
I hope students still find this helpful.
"""

# Example documents to be used later.
text1 = "Python is fun!"
text2 = "Man the courses are a lot of work."
text3 = "I am try to build a class the might be useful for natural language processing.\nI hope to do research in this area in the near future."


# The definition of the Document class with attributes and methods
class Document:
	# Class
    type = "text"

    def __init__(self, text, title, date, source):
        self.text = text
        self.title = title
        self.date = date
        self.source = source

    # Instance method
    def description(self):
        return f"Title = {self.title}\nDate = {self.date}\nFound in {self.source}"

    # Another instance method
    def char_count(self):
        return len(self.text)

# I create three Document objects
first_text = Document(text1, "Text1", "10/25/23","my brain")
second_text = Document(text2, "Text2", "10/26/23","my brain")
third_text = Document(text3, "Text3", "10/27/23","my brain")

# Now we demonstrate how the attributes and methods of the class work.
n = 30
print("****** MY OUTPUT *******")
print(f"first_text is called {first_text.title}.")
print(n*"*")
print(f"second_text has {second_text.char_count()} characters.")
print(n*"*")
print(f"Here is the description of third_text\n{third_text.description()}")
print(n*"*")
print(f"third_text had type: {third_text.type}.")


# Finally we demonstrate that these objects are a sequence-based type 
# by sorting them in one possible way.


list_of_text = [first_text, second_text, third_text] # A list of documents

n = 40 # use to control the number of asterisks that are used a separators
print("\nThe original order of the list of texts:")
print(n*"*")
for item in list_of_text:
    print(item.title)

# We define a key for the sort method.  Note we are using the built-in sort method.
def text_key(doc_object):
    return(doc_object.text[:10]) # returns the first 20 characters of the text

list_of_text.sort(key=text_key)
print("\nThe sorted order of the list of texts:")
print(n*"*")
for item in list_of_text:
    print(f'{item.title} sorted using \"{item.text[:10]}\".')

"""
****** MY OUTPUT *******
first_text is called Text1.
******************************
second_text has 34 characters.
******************************
Here is the description of third_text
Title = Text3
Date = 10/27/23
Found in my brain
******************************
third_text had type: text.

The original order of the list of texts:
****************************************
Text1
Text2
Text3

The sorted order of the list of texts:
****************************************
Text3 sorted using "I am try t".
Text2 sorted using "Man the co".
Text1 sorted using "Python is ".
"""
