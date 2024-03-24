
using System;

public class Solution
{
    private static readonly char[] INPUT_CHARS = { 'D', 'I' };

    public int[] DiStringMatch(string input)
    {
        int smallerValue = 0;
        int largerValue = input.Length;
        int[] permutations = new int[input.Length + 1];

        for (int i = 0; i < input.Length; ++i)
        {
            permutations[i] = (input[i] == INPUT_CHARS[1]) ? smallerValue++ : largerValue--;
        }
        permutations[input.Length] = smallerValue;

        return permutations;
    }
}
