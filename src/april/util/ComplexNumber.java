package april.util;
public class ComplexNumber {
    private final double real;
    private final double imaginary;
  
    public ComplexNumber(double real, double imaginary) {
      this.real = real;
      this.imaginary = imaginary;
    }
  
    public double getReal() {
      return real;
    }
  
    public double getImaginary() {
      return imaginary;
    }
  
    public ComplexNumber add(ComplexNumber other) {
      double real = this.real + other.real;
      double imaginary = this.imaginary + other.imaginary;
      return new ComplexNumber(real, imaginary);
    }
  
    public ComplexNumber subtract(ComplexNumber other) {
      double real = this.real - other.real;
      double imaginary = this.imaginary - other.imaginary;
      return new ComplexNumber(real, imaginary);
    }
  
    public ComplexNumber multiply(ComplexNumber other) {
      double real = this.real * other.real - this.imaginary * other.imaginary;
      double imaginary = this.real * other.imaginary + this.imaginary * other.real;
      return new ComplexNumber(real, imaginary);
    }
  
    public ComplexNumber divide(ComplexNumber other) {
      double denominator = other.real * other.real + other.imaginary * other.imaginary;
      double real = (this.real * other.real + this.imaginary * other.imaginary) / denominator;
      double imaginary = (this.imaginary * other.real - this.real * other.imaginary) / denominator;
      return new ComplexNumber(real, imaginary);
    }
  
    @Override
    public String toString() {
      return String.format("%.2f + %.2fi", real, imaginary);
    }
  }
  