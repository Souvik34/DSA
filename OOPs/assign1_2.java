public class assign1_2 {
    
    public static int sumASCII(String input){
        int sum = 0;
        for(int i=0;i<input.length();i++){
            if(input.charAt(i) == ' '){
                continue;
            }
            else{
                sum += (int)input.charAt(i);
            }
        }
        return sum;
    }

    public static void main(String args[]){
        String input = args[0];
        int ans = sumASCII(input);
        System.out.println("Sum of characters: "+ans);
    }
}
