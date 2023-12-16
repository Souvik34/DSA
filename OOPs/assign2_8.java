public class assign2_8 {

    public static boolean haveSameDigits(int num1, int num2) {
        int[] count1 = new int[10];
        int[] count2 = new int[10];
        while (num1 > 0) {
            count1[num1 % 10]++;
            num1 /= 10;
        }
        while (num2 > 0) {
            count2[num2 % 10]++;
            num2 /= 10;
        }
        //Compare frequency of digits in the 2 numbers, if they are same that means they are same digits in 2 different 
        //numbers
        for (int i = 0; i < 10; i++) {
            if (count1[i] != count2[i]) {
                return false;
            }
        }
        return true;
    }

    public static boolean isPrime(int num) {
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
        System.out.println("Pairs of prime numbers with the same digits from 1 to 100:");

        for (int i = 1; i <= 100; i++) {
            for (int j = i + 1; j <= 100; j++) {
                if (haveSameDigits(i, j) && isPrime(i) && isPrime(j)) {
                    System.out.println(i + " and " + j);
                }
            }
        }
    }

}
