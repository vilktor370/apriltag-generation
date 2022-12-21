package april.tag;
import java.util.Vector;

import april.util.ComplexNumber;
public class Main {
  public static void print(Vector<Double> arr){
    for(Double i : arr){
      System.out.println(i);
    }
  }
  public static void main(String[] args) {
    int n = 2;

    // tq = arange(-n/2,n/2+1)
    Vector<Double> tq = new Vector<>();
    for(double i = -n/2; i < (n / 2 + 1); i++){
      tq.add(i);
    }

    // tc = arange(-(n-1)/2,(n-1)/2+1)
    Vector<Double> tc = new Vector<>();
    for(double i = -(double)(n - 1) /2; i < (n-1) / 2 + 1; i++){
      tc.add(i);
    }

    // xc,yc = meshgrid(tc,tc)
    int rows = tc.size();
    double [][] xc = new double [rows][rows];
    double [][] yc = new double [rows][rows];
    for(int i =0;i<rows;i++){
      for(int j = 0; j < rows; j++){
        xc[i][j] = tc.get(j);
        yc[i][j] = tc.get(i);
      }
    }

    // z = xc + 1j*yc
    ComplexNumber [][] z = new ComplexNumber[4][4];
    for ( int i = 0; i< rows; i++){
      for(int j = 0;j < rows;j++){
        z[i][j] = new ComplexNumber(xc[i][j], yc[i][j]);
      }
    }

    // q_rt = tq.max()+1j*tq
    int tqSize = tq.size();

    // tq is always sorted from minimum to maximum becasue of numpy.arange()
    double tqMax = tq.lastElement();
    ComplexNumber [] q_rt = new ComplexNumber[tqSize];
    for(int i =0;i<tqSize;i++){
      q_rt[i] = new ComplexNumber(tqMax, tq.get(i));
    }


    // m_rt = [ (z/qk).real >= 0 for qk in q_rt ]
    boolean m_rt [][][] = new boolean[tqSize][rows][rows];
    for(int index = 0;index < tqSize;index++){
      ComplexNumber qk = q_rt[index];
      // System.out.println(qk.toString());
        for ( int i = 0; i< rows; i++){
          for(int j = 0;j < rows;j++){
            double value =  z[i][j].divide(qk).getReal();
            // System.out.println(value);
            if (value >= 0){
              m_rt[index][i][j] = true;
            }else{
              m_rt[index][i][j] = false;
            }
          }
        }
    }






    for(int index =0;index < tqSize;index++){

    
      for(int i =0;i< rows;i++){
        for(int j = 0;j < rows;j++){
          System.out.println(m_rt[index][i][j]);
        }
      }
      System.out.println("\n");
    }

    // for(int i =0;i<tq.size();i++){
    //   System.out.println(q_rt[i].toString());
    // }
  

  }
}
