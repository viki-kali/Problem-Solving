import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class TSVReader {
    public static void main(String[] args) {
        List<String[]> dataList = new ArrayList<>();

        try (BufferedReader br = new BufferedReader(new FileReader("data.tsv"))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] parts = line.split("\t");
                dataList.add(parts);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }

        // Print the data to verify
        for (String[] data : dataList) {
            for (String item : data) {
                System.out.print(item + "\t");
            }
            System.out.println();
        }
    }
}
