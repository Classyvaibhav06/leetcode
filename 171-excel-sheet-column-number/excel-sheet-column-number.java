class Solution {
    public int titleToNumber(String columnTitle) {
        int result = 0;
        for (int i = 0; i < columnTitle.length(); i++) {
            // Multiply existing result by 26 to shift place value
            result *= 26;
            // Add the value of the current character (A=1, B=2...)
            result += (columnTitle.charAt(i) - 'A' + 1);
        }
        return result;
    }
}