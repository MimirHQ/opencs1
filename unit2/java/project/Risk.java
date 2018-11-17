import java.util.Scanner;

public class Risk {

    public static void main(String[] args) {
        float a;
        float b;
        float c;
        float d;
        String food;
        Scanner scan = new Scanner(System.in);
        System.out.print("What food is being investigated? ");
        food = scan.next();
        System.out.println(food);
        System.out.print("How many people ate " + food + " and got sick? ");
        a = scan.nextInt();
        System.out.println(a);
        System.out.print("How many people ate " + food + " and did NOT get sick? ");
        b = scan.nextInt();
        System.out.println(b);
        System.out.print("How many people did NOT eat " + food + " and got sick? ");
        c = scan.nextInt();
        System.out.println(c);
        System.out.print("How many people did NOT eat " + food + " and did NOT get sick? ");
        d = scan.nextInt();
        System.out.println(d);
        System.out.println("The relative risk of " + food + " is:");
        float riskExposed = a / (a + b);
        float riskUnexposed = c / (c + d);
        float relativeRisk = riskExposed / riskUnexposed;
        System.out.println(relativeRisk);
    }

}
