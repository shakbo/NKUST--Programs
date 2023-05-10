import java.util.Scanner;

// ROW = 列
// COL = 行

public class W12C1 {
	static Scanner input = new Scanner(System.in);
	static int scoreBuffer = 2; // 宣告暫存大小用以儲存總分及平均
	static int subjectBuffer = 2; // 宣告暫存大小用以儲存總分及平均
	
	public static void main(String[] args) {
		System.out.printf("幾位學生: ");
		final int studentCount = input.nextInt(); //取得應有多少列
		
		final int ROW = studentCount+subjectBuffer;
		
		System.out.printf("幾項科目: ");
		final int subjectCount = input.nextInt(); //取得應有多少行
		
		final int COL = subjectCount+scoreBuffer; //得知應有多少行後加上暫存區塊
		
		double[][] scoreArray = new double[ROW][COL]; //宣告陣列用以儲存個別學生的各科分數、總分及平均
		
		// 給使用者輸入個別學生的各科分數
		for(int i=0; i<studentCount; i++) {
			System.out.printf("------------------------------\n");
			System.out.printf("第%d位學生\n", i+1); // 顯示第幾位學生
			for(int j=0; j<subjectCount; j++) {
				System.out.printf("  第%d科成績: ", j+1); // 顯示第幾科
				scoreArray[i][j] = input.nextDouble(); // 取得的值並存入該學生的成績當中
			}
		}
		
		// 計算個別學生的總和及平均
		for(int i=0; i<studentCount; i++) {
			for(int j=0; j<subjectCount; j++) {
				scoreArray[i][subjectCount] += scoreArray[i][j]; // 計算總分(邏輯請見 註1)
			}
			scoreArray[i][subjectCount+1] = scoreArray[i][subjectCount] / subjectCount; // 計算平均(邏輯請見 註2)
		}
		
		for(int i=0; i<studentCount; i++) {
			for(int j=0; j<subjectCount; j++) {
				scoreArray[studentCount][j] += scoreArray[i][j]; // 計算總分
				scoreArray[studentCount+1][j] = scoreArray[studentCount][j] / studentCount; // 計算平均
			}
		}
		/*
			註1:
				假設輸入2位學生 3個科目(即 ROW=2, subjectCount=3)
				則陣列長這樣
					[科目1成績][科目2成績][科目3成績]
					[科目1成績][科目2成績][科目3成績]
					
				(對應陣列代號 [i, j])
					[0, 0][0, 1][0, 2]
					[1, 0][1, 1][1, 2]
					
				但因為有設定額外暫存區所以長這樣
					[科目1成績][科目2成績][科目3成績][總分][平均]
					[科目1成績][科目2成績][科目3成績][總分][平均]
					
				(對應陣列代號 [i, j])
					[0, 0][0, 1][0, 2][0, 3][0, 4]
					[1, 0][1, 1][1, 2][1, 3][1, 4]
				
					
				而使用者輸入的 subjectCount(j) 為 3 對應至陣列即為 總分 的格子
			
			註2:
				同上
				scoreArray[i][subjectCount+1] 對應的為 平均 的格子
				而此時 scoreArray[i][subjectCount] / subjectCount 
				即可看為 總分 / 科目數
		*/
		
		System.out.printf("------------------------------\n");
		
		// 列出個別學生的各科分數、總分及平均
		for(int i=0; i<ROW; i++) {
			for(int j=0; j<COL; j++) {
				if(((i < ROW) || (j < COL)) && scoreArray[i][j] != 0) { // 當值在範圍內並且不為0時
					System.out.printf("[%6.2f] ", scoreArray[i][j]);	// 輸出值
				}
			}
			System.out.printf("\n");
		}
	}
}