import java.util.Scanner;
 
public class TreeMerging {
 
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        for (int t = in.nextInt(); t > 0; t--) {
            int n = in.nextInt();
            int root = (n * (n + 1)) / 2;
            int[] oldParent = new int[n + 1];
            for (int edges = n - 1; edges > 0; edges--) {
                int a = in.nextInt();
                int p = in.nextInt();
                oldParent[a] = p;
                root -= a;
            }
            int m = in.nextInt();
            int[] newParent = new int[n + 1];
            boolean[] extant = new boolean[n + 1];
            extant[root] = true;
            for (int edges = m - 1; edges > 0; edges--) {
                int a = in.nextInt();
                int p = in.nextInt();
                newParent[a] = p;
                extant[a] = true;
            }
            int[] depth = new int[n + 1];
            for (int iteration = n; iteration > 0; iteration--) {
                for (int a = 1; a <= n; a++) {
                    if (a != root) {
                        depth[a] = depth[oldParent[a]] + 1;
                    }
                }
            }
            boolean[][] canMerge = new boolean[n + 1][n + 1];
            for (int d = n; d > 0; d--) {
                for (int a = 1; a <= n; a++) {
                    if (depth[a] == d) {
                        if (extant[a]) {
                            canMerge[a][a] = true;
                        } else {
                            for (int b = a; b <= n; b++) {
                                if (extant[b]) {
                                    canMerge[a][b] = true;
                                    for (int c = 1; c <= n; c++) {
                                        if (oldParent[c] == a) {
                                            boolean works = false;
                                            for (int cn = 1; cn <= n; cn++) {
                                                if (newParent[cn] == b && canMerge[c][cn]) {
                                                    works = true;
                                                }
                                            }
                                            canMerge[a][b] &= works;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            System.out.println(n - m);
            int[] representative = new int[n + 1];
            representative[root] = root;
            for (int d = 1; d <= n; d++) {
                for (int a = 1; a <= n; a++) {
                    if (depth[a] == d) {
                        for (int b = 1; b <= n; b++) {
                            if (newParent[b] == representative[oldParent[a]] && canMerge[a][b]) {
                                representative[a] = b;
                            }
                        }
                        if (representative[a] != a) {
                            System.out.println(a + " " + representative[a]);
                        }
                    }
                }
            }
        }
    }
}
