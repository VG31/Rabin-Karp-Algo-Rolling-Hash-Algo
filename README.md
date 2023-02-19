# Rabin-Karp-Algo-Rolling-Hash-Algo(1D)

Rabin Karp Algo / Rolling Hash Algo (1D)

Time Complexity:-

Brute Force :- O(N*M) but it is less efficient

Rabin Karp Algo :- O(N*M) but it is highly efficient 

This way is very efficient in string matching.

Rabin-Karp is worst-case O(nm) because it could find a false positive at every point (of which there are n) and it can require up to m comparisons to verify the match, since you need to actually compare the strings.

With an even half-reasonable hash function that shouldn't ever happen, but for pretty well any hash function it is possible to craft a query (that is, both the string and the substring being searched for) which exhibit the above pathological behaviour.

Hence, although R-K has expected time complexity of O(n), it's worst case has time complexity O(nm). (Note: since m must be no greater than n, n + m is bounded by 2n and thus O(n + m) is the same as O(n).)

It is easier to produce O(nm) behaviour if the problem is to find all the matching substrings, which is another context in which R-K is often used. In that case, searching for a substring consisting of m as in a string consisting of n as would definitely take nm time, since the substring needs to be matched at every point in the source string.

Other algorithms exist for finding all substrings which are still linear in n, even in pathological cases.
