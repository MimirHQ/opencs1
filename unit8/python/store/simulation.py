def simulate_sale(store: Store, purchase: str) -> bool:
    data = purchase.split(',')
    id = data[0]
    amount = int(data[1])
    payment = float(data[2])
    return store.sell(id, amount, payment)


def main() -> None:
    # TODO: Create stores for both order plans

    # Read in simulated purchase data
    while True:
        try:
            purchase = input()
            # TODO: Replace with your store objects
            # was_sold = simulate_sale(store, purchase)
        except EOFError:
            break

    # TODO: summarize results


if __name__ == '__main__':
    main()
