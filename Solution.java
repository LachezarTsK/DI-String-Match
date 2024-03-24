
public class Solution {

    private static final char[] INPUT_CHARS = {'D', 'I'};

    public int[] diStringMatch(String input) {

        int smallerValue = 0;
        int largerValue = input.length();
        int[] permutations = new int[input.length() + 1];

        for (int i = 0; i < input.length(); ++i) {
            permutations[i] = (input.charAt(i) == INPUT_CHARS[1]) ? smallerValue++ : largerValue--;
        }
        permutations[input.length()] = smallerValue;

        return permutations;
    }
}
