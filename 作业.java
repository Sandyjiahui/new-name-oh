package 复利;

public class 作业 {
	public class YearsInterest {
		private double amount = 10000;
		private double rate = 0.065;
		//计算并输出每年利息
		//结算10年后的平均利息
		private Double[] interest = new Double[10];

		public void getYearInterest(){
		int i = 0;
		double num = 0;
		while(i<10){
		//每年的利息
		interest[i] = amount*rate;
		num = amount + (amount * rate);
		this.amount = num;
		i++;
		}

		}
		public double getAverage(){
		//结余 (不清楚是否是除去本金后的剩余金额？)
		double average = 0.0;
		for(double a:interest){
		average += a;
		}
		return average;
		}
		public double getAverageInterest(){
		double average = 0.0;
		for(double a:interest){
		average += a;
		}
		//平均利息
		return average/interest.length;
		}
		public void main(String[] args){
		YearsInterest yi = new YearsInterest();
		yi.getYearInterest();
		for(double a:interest){
		System.out.println(a +"\n\t");
		}
		System.out.println("结余："+yi.getAverage());
		System.out.println("平均利息："+yi.getAverageInterest());
		}
		}
}
