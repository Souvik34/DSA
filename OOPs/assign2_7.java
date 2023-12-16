public class assign2_7 {
        
    public static boolean Prime_numbers(int num) {
        if (num <= 1) {
            return false;
        }
        if (num <= 3) {
            return true;
        }
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        System.out.println("Prime numbers from 1 to 100:");

        for (int number = 1; number <= 100; number++) {
            if (Prime_numbers(number)) {
                System.out.print(number + " ");
            }
        }
    }
}
