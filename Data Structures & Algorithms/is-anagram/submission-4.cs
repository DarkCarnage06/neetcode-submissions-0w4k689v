public class Solution {
    public bool IsAnagram(string s, string t) {
          char [] sARR=s.ToCharArray();
          char [] tArr=t.ToCharArray();
        Array.Sort(sARR);
        Array.Sort(tArr);
        return new string(sARR)==new string(tArr);

    }
}
