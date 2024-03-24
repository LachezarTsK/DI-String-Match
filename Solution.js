
/**
 * @param {string} input
 * @return {number[]}
 */
var diStringMatch = function (input) {
    const INPUT_CHARS = ['D', 'I'];

    let smallerValue = 0;
    let largerValue = input.length;
    const permutations = new Array(input.length + 1);

    for (let i = 0; i < input.length; ++i) {
        permutations[i] = (input.charAt(i) === INPUT_CHARS[1]) ? smallerValue++ : largerValue--;
    }
    permutations[input.length] = smallerValue;

    return permutations;
};
