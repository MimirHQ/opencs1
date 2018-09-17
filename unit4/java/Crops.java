import java.util.Scanner;
import java.util.ArrayList;

public class Crops {
    
    private static ArrayList<ArrayList<Integer>> grid;
    private static Scanner sc;
    private static int row;
    private static int column;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int column = sc.nextInt();
        int row = sc.nextInt();
        ArrayList<ArrayList<Integer>> grid = new ArrayList<ArrayList<Integer>>();
        
        loadCropData();
        getRowCount();
        getRowLength();
        getCropCount(row, column);
    }
    
    public static void loadCropData() {
        
        for (int c = 0; c < column; c++) {
            ArrayList<Integer> rows = new ArrayList<Integer>();
            
            for (int r = 0; r < row; r++) {
                int val = sc.nextInt();
                rows.add(val);
            }
            grid.add(rows);
        }
    }
    
    public static int getRowCount() {
        return grid.size();
    }
    
    public static int getRowLength() {
        return grid.get(0).size();
    }
    
    public static int getCropCount(int row, int plot) {
        return grid.get(row).get(plot);
    }
    
}