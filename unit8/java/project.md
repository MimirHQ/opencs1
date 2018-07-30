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

- See [Appendix A](#appendix-a-class-specification) for the specification of classes and methods.
- See [Appendix B](#appendix-b-error-messages) for the specification of error messages.

**Optional:** Before you start programming, create a UML diagram from the class specification that illustrates the relationships between `Store`, `Product`, and `Stock` and the functionality of each class.

### Part 2: Application

Now that you have created object-oriented model of a store, you can use it to create simulations that can help the store management answer questions and make decisions.

You have been given a file that contains a log of the last 10,000 transactions at the store as well as two inventory order forms. The store management wants to perform a hindsight analysis to evaluate which of these inventory plans would have resulted in higher profit based on this dataset of purchases.

Instantiate both stores according to their order forms and then simulate all of the purchases on the dataset. You have also been given a helper class that extracts the purchase data from each line.

Write your simulation program in `Simulation.java`, then run it by executing these commands in your terminal:

```bash
$ javac Simulation.java
$ java Simulation < purchaselog.csv
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
    - Throw an error if trying to set cost to a negative value
- Stock Class
    - Write private fields for product, quantity, and price
    - Write class constructor
    - Write public getter methods for product, quantity, and price
    - Write public methods to increase and decrease quantity
    - Throw an error if trying to set price to a negative value
    - Throw an error if trying to set quantity to a negative value
- Store Class
    - Write private fields for expenses, revenue, number of purchases, and inventory listing
    - Write class constructor
    - Write public getter methods for expenses, revenue, and number of purchases
    - Write public method to check if enough of a product is in stock
    - Write public method to add product to inventory listing
    - Write public methods to increase and decrease stock
    - Write public method to sell a certain amount of product only if paid enough to cover the total price

## Appendix A: Class Specification

```java
public class Store {
    public Store();
    public void addProduct(Product product, double price);
    public boolean hasInStock(String productID, int amount);
    public void increaseStock(String productID, int amount);
    public void decreaseStock(String productID, int amount);
    public boolean sell(String productID, int amount, double payment);
    public double getExpenses();
    public double getRevenue();
    public int countPurchases();
}

public class Stock {
    public Stock(Product product, double price, int quantity);
    public void setPrice(double price);
    public Product getProduct();
    public double getPrice();
    public int getQuantity();
    public void increaseQuantity(int amount);
    public void decreaseQuantity(int amount);
}

public class Product {
    public Product(String id, String name, double cost);
    public void setID(String id);
    public void setName(String name);
    public void setCost(double cost);
    public String getID();
    public String getName();
    public double getCost();
}
```

## Appendix B: Error Messages

- **Product**
    - `"Product cost cannot be negative."` if trying to set cost below zero.
- **Stock**
    - `"Stock price cannot be negative."` if trying to set price below zero.
    - `"Stock quantity cannot be negative."` if trying to set quantity below zero.
- **Store**
    - `"Stock not available to increase."` if trying to increase stock quantity for invalid id.
    - `"Stock not available to decrease."` if trying to decrease stock quantity for invalid id.
