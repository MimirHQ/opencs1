# Project: Object-Oriented Basics

## Summary

Apply basic object-oriented (OO) concepts to model a store and then run simulations with the model to make decisions.

## Prerequisites

You should already be familiar with these programming concepts: data types, conditionals, loops, and lists.

## Learning Objectives

In this programming project you will:

- (Apply) Implement classes and class methods as described in a specification.
- (Apply) Illustrate the relationships between classes by creating an UML diagram (optional).
- (Apply) Write hidden methods and attributes to manage encapsulated state.
- (Analyze) Prevent objects from reaching invalid states.
- (Create) Formulate an object-oriented simulation to determine the best solution to a problem.

## Task Description

The support files for this project are included in the `store` directory.

### Part 1: Implementation

Your job is to implement an object-oriented model of a store that can process inventory and purchases.

- See [Appendix A](#appendix-a-terminology) for the specification of terminology in this project.
- See [Appendix B](#appendix-b-class-specification) for the specification of classes and methods.
- See [Appendix C](#appendix-c-error-messages) for the specification of error messages.

**Optional:** Before you start programming, create a UML diagram from the class specification that illustrates the relationships between `Store`, `Product`, and `Stock` and the functionality of each class.

### Part 2: Application

Now that you have created object-oriented model of a store, you can use it to create simulations that can help the store management answer questions and make decisions.

You have been given a file that contains a log of the last 10,000 transactions at the store as well as two inventory order forms. The store management wants to perform a hindsight analysis to evaluate which of these inventory plans would have resulted in higher profit based on this dataset of purchases.

Instantiate both stores according to their order forms and then simulate all of the purchases on the dataset. You have also been given a helper class that extracts the purchase data from each line.

Write your simulation program in `simulation.py`, then run it by executing this commands in your terminal:

```bash
$ python3.6 simulation.py < purchaselog.csv
```

Use your simulation to answer these questions:

- Which plan will generate the most profit?
- Which plan will generate the most purchases?
- Which plan will generate the most revenue per purchase?
- Will either plan generate more than $50,000 in profits? Which plan will reach that milestone first?

**Optional:** Propose a better inventory order form. Run your plan through the simulation to demonstrate that it outperforms the other proposals.

## Assessment

A successful solution will:

- Product Class
    - Write private fields for ID, name, and cost
    - Write class constructor
    - Write public getter/setter methods for ID, name, and cost
    - Raise an error if trying to set cost to a negative value
- Stock Class
    - Write private fields for product, quantity, and price
    - Write class constructor
    - Write public getter methods for product, quantity, and price
    - Write public methods to increase and decrease quantity
    - Raise an error if trying to set price to a negative value
    - Raise an error if trying to set quantity to a negative value
- Store Class
    - Write private fields for expenses, revenue, number of purchases, and inventory listing
    - Write class constructor
    - Write public getter methods for expenses, revenue, and number of purchases
    - Write public method to check if enough of a product is in stock
    - Write public method to add product to inventory listing
    - Write public methods to increase and decrease stock
    - Write public method to sell a certain amount of product only if paid enough to cover the total price

## Appendix A: Terminology

In this model, a **Store** can sell a certain amount of **Product** to customers. A **Store** has a **Stock** of each **Product** that it can sell.

### Attributes

- Each **Product** has an `id`, `name`, and `cost`.
- Each **Stock** has a `product`, `price`, and `quantity`.
- Each **Store** has `expenses`, `revenue`, `purchases`, and `inventory`.

### Domain Vocabulary

- **Cost** is how much money the store spends when ordering one unit of a product.
- **Price** is how much money the stores charges the customer when selling one unit of a product.
- **Expenses** is the total amount of money the store spends on ordering products.
- **Revenue** is the total amount of money the store gains from selling products to customers.
- **Purchases** is the total number of completed purchases.
- **Profit** is equal to revenue minus expenses.
- **Revenue per Purchase** is equal to revenue divided by purchases.

### Domain Actions

- When the store **adds a product**, it sets the **price** that units of that product will be sold at.
- When the store **increases stock**, it orders a certain amount of a product and adds that amount to the stock quantity.
- When a customer tries to makes a **purchase**, they ask to buy a certain amount of a certain product.
- If the customer's payment is greater than the total price of the amount of product, the store **sells** it to them and the purchase is completed, otherwise the purchase does not happen at all.
- If a purchase is completed, the store **decreases stock** for the purchased product by the amount that was sold.

## Appendix B: Class Specification

```python
class Store:
    def __init__(self) -> Store:
    def add_product(self, product: Product, price: float) -> None:
    def has_in_stock(product_id: str, amount: int) -> bool:
    def increase_stock(self, product_id: str, amount: int) -> None:
    def decrease_stock(self, product_id: str, amount: int) -> None:
    def sell(self, product_id: str, amount: int, payment: float) -> bool:
    def get_expenses(self) -> float:
    def get_revenue(self) -> float:
    def count_purchases(self) -> int:


class Stock:
    def __init__(self, product: Product, price: float, quantity: int) -> Stock:
    def set_price(self, price: float) -> None:
    def get_product(self) -> Product:
    def get_price(self) -> float:
    def get_quantity(self) -> int:
    def increase_quantity(self, amount: int) -> None:
    def decrease_quantity(self, amount: int) -> None:


class Product:
    def __init__(self, id: str, name: str, cost: float) -> Product:
    def set_id(self, id: str) -> None:
    def set_name(self, name: str) -> None:
    def set_cost(self, cost: float) -> None:
    def get_id(self) -> str:
    def get_name(self) -> str:
    def get_cost(self) -> float:
```

## Appendix C: Error Messages

- **Product**
    - `'Product cost cannot be negative.'` if trying to set cost below zero.
- **Stock**
    - `'Stock price cannot be negative.'` if trying to set price below zero.
    - `'Stock quantity cannot be negative.'` if trying to set quantity below zero.
- **Store**
    - `'Stock not available to increase.'` if trying to increase stock quantity for invalid id.
    - `'Stock not available to decrease.'` if trying to decrease stock quantity for invalid id.
