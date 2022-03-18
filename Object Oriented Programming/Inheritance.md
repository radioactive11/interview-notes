### Inheritance

By using inheritance, we can create a class which uses all the properties and behavior of another class. The new class is known as a derived class or child class, and the one whose properties are acquired is known as a base class or parent class.

It provides the re-usability of the code.

Example of basic inheritance

```python
class Person:

_firstname: str = ""

_lastname: str = ""

  

def __init__(self, fn: str, ln: str) -> None:

self._firstname = fn

self._lastname = ln

  

def print_values(self):

print(self._firstname, self._lastname)

  
  

class Student(Person):

_school: str = ""

  

def __init__(self, fn: str, ln: str, school: str) -> None:

super().__init__(fn, ln)

self._school = school

  

def print_values(self):

super().print_values()

print(self._school)

  
  

student = Student("radioactive", "11", "nothing")

student.print_values()
```

#### Use of `super` in python

The `super()` builtin returns a proxy object (temporary object of the superclass) that allows us to access methods of the base class.

In Python, `super()` has two major use cases:

-   Allows us to avoid using the base class name explicitly
-   Working with Multiple Inheritance

Even if we changes the name of parent class, we will not need to change the name in the derived/child class as super will take care of that automatically.

The `super()` builtin returns a proxy object, a substitute object that can call methods of the base class via delegation. This is called indirection (ability to reference base object with `super()`)

Since the indirection is computed at the runtime, we can use different base classes at different times (if we need to).

### Method Order Resolution

```python
class Animal:
  def __init__(self, Animal):
    print(Animal, 'is an animal.');

class Mammal(Animal):
  def __init__(self, mammalName):
    print(mammalName, 'is a warm-blooded animal.')
    super().__init__(mammalName)
    
class NonWingedMammal(Mammal):
  def __init__(self, NonWingedMammal):
    print(NonWingedMammal, "can't fly.")
    super().__init__(NonWingedMammal)

class NonMarineMammal(Mammal):
  def __init__(self, NonMarineMammal):
    print(NonMarineMammal, "can't swim.")
    super().__init__(NonMarineMammal)

class Dog(NonMarineMammal, NonWingedMammal):
  def __init__(self):
    print('Dog has 4 legs.');
    super().__init__('Dog')
    
d = Dog()
print('')
bat = NonMarineMammal('Bat')
```

Method Resolution Order (MRO) is the order in which methods should be inherited in the presence of multiple inheritance. You can view the MRO by using the `__mro__`attribute.

Here is how MRO works:

-   A method in the **derived calls is always called before the method of the base** class.  
    
-   If there are multiple parents like `Dog(NonMarineMammal, NonWingedMammal)`, methods of NonMarineMammal is invoked first because it appears first.
```python
>>> Dog.__mro__
(<class 'Dog'>, 
<class 'NonMarineMammal'>, 
<class 'NonWingedMammal'>, 
<class 'Mammal'>, 
<class 'Animal'>, 
<class 'object'>)
```