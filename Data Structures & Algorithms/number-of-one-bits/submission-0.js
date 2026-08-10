class Solution {
    /**
     * @param {number} n - a positive integer
     * @return {number}
     */
    hammingWeight(n) {
        // console.log(toString(n).length);
        console.log(typeof n)
        let cnt = 0;
        let num = n.toString(2);

        for (let i = 0; i < num.length; i++) {
            if (num[i] == 1) {
                cnt = cnt + 1;
            }
        }
        return cnt;
    }
}
