import java.util.Scanner; 

/** 
 * @ProjectName: BruteForce.java 
 * @Author: CN 
 * @Date: Create in Fri Feb 21 01:29:38 2025
 */

public class BruteForce {

    public static int bruteForce(String s, String t) {
        for (int i = 0; i < s.length(); i++) {
            int flag = 1;
            for (int j = 0; j < t.length(); j++) {
                if (s.charAt(i + j) == t.charAt(j)) continue;
                flag = 0;
                break;
            }
            if (flag == 1) return i;
        } 
        return -1;
    }

    private static void test(.next();
                test(s, t);
            }String s, String t) {
        System.out.printf("bruteForce(%s, %s) = %d%n", s, t, bruteForce(s, t));
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        try {
            while (scanner.hasNext()) {
                String s = scanner.next();
                String t = scanner
        } catch (Exception e) {
            System.err.println("输入错误：" + e.getMessage());
        } finally {
            scanner.close();
        }
    }
}
