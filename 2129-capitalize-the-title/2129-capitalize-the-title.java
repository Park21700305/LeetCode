import java.util.Locale;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Solution {

    static String capitalizeFirstLetter(String str) {

        String firstLetter = str.substring(0, 1);

        String remainLetter = str.substring(1);

        firstLetter = firstLetter.toUpperCase();

        remainLetter = remainLetter.toLowerCase();

        String result = firstLetter + remainLetter;

        return result;
    }
    static String capitalizeTitle(String title) {
        StringTokenizer st = new StringTokenizer(title);
        String tmp = "";
        String result = "";
        while (st.hasMoreTokens()) {
            tmp = st.nextToken();
            if(tmp.length() > 2) tmp = capitalizeFirstLetter(tmp);
            else tmp = tmp.toLowerCase();
            result += tmp + " ";
        }
        return result.trim();
    }
}
