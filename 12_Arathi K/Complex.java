package OOPLAB;
import java.util.Scanner;

 public class Complex {

    double real, img;
    Complex(double r, double i) {
        real = r;
        img = i;
    }
    static Complex sum(Complex c1, Complex c2) {
        return new Complex(
            c1.real + c2.real,
            c1.img + c2.img
        );
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Complex[] c = new Complex[2];
        for (int i = 0; i < 2; i++) {
            System.out.print("Enter real part of complex number " + (i + 1) + ": ");
            double r = sc.nextDouble();
            System.out.print("Enter imaginary part of complex number " + (i + 1) + ": ");
            double im = sc.nextDouble();
            c[i] = new Complex(r, im);
        }
        Complex result = sum(c[0], c[1]);
        System.out.println("Sum is: " + result.real + " + " + result.img + "i");

        sc.close();
    }
}

