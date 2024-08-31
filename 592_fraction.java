class Solution {
    public String fractionAddition(String expression) {
        int numerator= 0;
        int denominator= 1;

        Scanner sc= new Scanner(expression).useDelimiter("(?=[-+])");
        while(sc.hasNext()){
            String fraction= sc.next();
            String[] parts= fraction.split("/");
            int num= Integer.parseInt(parts[0]);
            int denom= Integer.parseInt(parts[1]);

            numerator= numerator * denom + num * denominator;
            denominator*= denom;

            int gcd= gcd(Math.abs(numerator), denominator);
            numerator/= gcd;
            denominator/= gcd;
        }
        return numerator + "/" + denominator;
    }
    public static int gcd (int a, int b){
        while (b != 0){
            int temp= b;
            b= a % b;
            a= temp;
        }
        return a;
    }
}
