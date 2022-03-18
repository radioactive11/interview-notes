## Encapsualtion

Using OOP in Python, we can restrict access to methods and variables. This prevents data from direct modification which is called encapsulation. In Python, we denote private attributes using underscore as the prefix i.e single `_` or double `__`.

```python
class Computer:

	__maxprice: int = 100

  

def __init__(self) -> None:

	self.__maxprice = 1000

  

	def set_max_price(self, new_max_price: int):
	
		self.__maxprice = new_max_price
	
	  
	
	def get_max_price(self):
	
		return self.__maxprice

  
  

comp = Computer()

comp.__maxprice = 6969

print(comp.get_max_price())
```

### Benefits of encapsulation


- By keeping data private and providing public well-defined service methods the **role of the object becomes clear to other objects**. This increases usability. 
- Other objects are aware of the format to send messages in to the object providing the public service. This is essentially a contract between the two objects. 
- The **invoker is agreeing to send the message in the specific format**, including passing any of the required parameter information
- The invoked object is agreeing to process the message and if necessary, return a value in the pre-specified format.