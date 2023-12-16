public class assign1_1 {
    
    public static boolean isPalindrome(String str){
        for(int i=0;i<str.length();i++){
            if(str.charAt(i) == str.charAt(str.length()-1-i)){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }

    public static void main(String args[]){
        String input = args[0];
        boolean ans = isPalindrome(input);
        if(ans){
            System.out.println("String is Palindrome");
        }
        else{
            System.out.println("String is Not Palindrome");
        }
    }
}
