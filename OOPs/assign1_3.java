public class assign1_3 {
    
    public static void displayDigits(String num){
        for(int i=0;i<num.length();i++){
            System.out.println(num.charAt(i));
        }
    }
    
    public static void main(String args[]){
        String input = args[0];
        displayDigits(input);
    }
}
