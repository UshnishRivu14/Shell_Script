class node:
	def __init__(self, data=None):
	self.data = data
	self.link = None

head = node(45)
current = node(48)
head.link = current
current	= node(50)
head.link.link=current
