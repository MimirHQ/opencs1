import java.util.Scanner;

public class Simulation {

    public static void main(String[] args) {
        // TODO: Create stores for both order plans

        // Read in simulated purchase data
        Scanner scan = new Scanner(System.in);
        while (scan.hasNextLine()) {
            String purchase = scan.nextLine();
            // TODO: Replace with your store objects
            // boolean wasSold = simulateSale(store, purchase);
        }

        // TODO: summarize results
    }

    public static boolean simulateSale(Store store, String purchase) {
        String[] data = purchase.split(",");
        String id = data[0];
        int amount = Integer.parseInt(data[1]);
        double payment = Double.parseDouble(data[2]);
        return store.sell(id, amount, payment);
    }

}