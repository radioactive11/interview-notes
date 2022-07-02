# Normalization

Normalization is the process of **organizing data in a database**. This includes **creating tables** and **establishing relationships between those tables** according to rules designed both to **protect the data** and to make the database **more flexible by eliminating redundancy** and **inconsistent dependency**.

### Redundancy
Redundant data wastes disk space and creates maintenance problems. If data that exists in more than one place must be changed, the data must be changed in exactly the same way in all locations. A customer address change is much easier to implement if that data is stored only in the Customers table and nowhere else in the database.

### Inconsistent Dependancy
What is an "inconsistent dependency"? While it is intuitive for a user to look in the Customers table for the address of a particular customer, it may not make sense to look there for the salary of the employee who calls on that customer. The employee's salary is related to, or dependent on, the employee and thus should be moved to the Employees table. Inconsistent dependencies can make data difficult to access because the path to find the data may be missing or broken.

## Normal Forms
There are a few rules for database normalization. Each rule is called a "normal form." If the first rule is observed, the database is said to be in "first normal form." If the first three rules are observed, the database is considered to be in "third normal form."

### First Normal form
-   **Eliminate repeating groups** in individual tables.
-   Create a **separate table for each set of related data**.
-   Identify each set of related data with a **primary key**.

##### Example:
To track an inventory item that may come from two possible sources, an inventory record may contain fields for Vendor Code 1 and Vendor Code 2.

What happens when you add a third vendor? Adding a field is not the answer; it requires program and table modifications and does not smoothly accommodate a dynamic number of vendors. Instead, place all vendor information in a separate table called Vendors, then link inventory to vendors with an item number key, or vendors to inventory with a vendor code key.


### Second Normal Form
-   Create separate tables for sets of values that apply to multiple records.
-   Relate these tables with a foreign key.

Records should not depend on anything other than a table's primary key (a compound key, if necessary). 

##### Example
 Consider a customer's address in an accounting system. The address is needed by the Customers table, but also by the Orders, Shipping, Invoices, Accounts Receivable, and Collections tables. Instead of storing the customer's address as a separate entry in each of these tables, store it in one place, either in the Customers table or in a separate Addresses table.

### Third Normal Form
-   Eliminate fields that do not depend on the key.

Values in a record that are not part of that record's key do not belong in the table. In general, anytime the contents of a group of fields may apply to more than a single record in the table, consider placing those fields in a separate table.

##### Example
 In an Employee Recruitment table, a candidate's university name and address may be included. But you need a complete list of universities for group mailings. If university information is stored in the Candidates table, there is no way to list universities with no current candidates. Create a separate Universities table and link it to the Candidates table with a university code key.


### Sample Question
This is the unnormalized table
![[Screenshot 2022-07-02 at 6.39.24 PM.png]]

#### - First Normal
Tables should have only two dimensions. Since one student has several classes, these classes should be listed in a separate table. **Fields Class1, Class2, and Class3 in the above records are indications of design trouble**.![[Screenshot 2022-07-02 at 10.31.43 PM.png]]

#### - Second Normal Form
Note the multiple Class# values for each Student# value in the above table. Class# is not functionally dependent on Student# (primary key), so this relationship is not in second normal form.![[Screenshot 2022-07-02 at 10.33.22 PM.png]]

#### - Third Normal Form
In the last example, Adv-Room (the advisor's office number) is functionally dependent on the Advisor attribute. The solution is to move that attribute from the Students table to the Faculty table, as shown below:
![[Screenshot 2022-07-02 at 10.36.15 PM.png]]