#include <iostream>
#include<string>
using namespace std;

class Shape{   //DO NOT change the class name
	//Fill code here
	public:
	double calculateArea(int radius){
		return (3.14*radius*radius);
	}
	double calculateArea(int width, int height){
		return width*height;
	}
	double calculateArea(float base, float height){
		return ((base*height)/2);
	}
};

class Circle : public Shape//Add required code 
{
		 //Fill code here
	private:
	int radius;
	public:
	void setRadius(int r){
		radius = r;
	}
	int getRadius(){
		return radius;
	}
};
class Rectangle : public Shape //Add required code
{
		//Fill code here
		private:
		int width,height;
		public:
		void setWidth(int w){
			width = w;
		}
		int getWidth(){
			return width;
		}
		void setHeight(int h){
			height = h;
		}
		int getHeight(){
			return height;
		}

};
class Triangle : public Shape//Add required code
{
		//Fill code here
		private:
		float base, height;
		public:
		void setBase(float b){
			base = b;
		}
		float getBase(){
			return base;
		}
		void setHeight(float h){
			height = h;
		}
		float getHeight(){
			return height;
		}
};



int main()  //DO NOT change the 'main' signature
{  
    int radius;
    string shape;
	cout<<"Enter the type of shape:"<<endl;
	cin>>shape;
	double result;
	Circle circle;
	Rectangle rectangle;
	Triangle triangle;	
	if(shape.compare("Circle") == 0){
		int radius;
		cout<<"Enter the radius(in cm):"<<endl;
		cin>>radius;
		//Fill the code
		circle.setRadius(radius);
		result = circle.calculateArea(circle.getRadius());
	}		
	else if (shape.compare("Rectangle") == 0){
		int width, height;
		cout << "Enter the width (in cm):" << endl;
		cin >> width;
		cout <<"Enter the height (in cm):" << endl;
		cin >> height;
		rectangle.setWidth(width);
		rectangle.setHeight(height);
		result = rectangle.calculateArea(rectangle.getWidth(),rectangle.getHeight());
	}	
	else if (shape.compare("Triangle") == 0){
		float base, height;
		cout << "Enter the base (in cm):" << endl;
		cin >> base;
		cout <<"Enter the height (in cm):" << endl;
		cin >> height;
		triangle.setBase(base);
		triangle.setHeight(height);		
		result = triangle.calculateArea(triangle.getBase(),triangle.getHeight());
	}	
    //Fill code here
	cout << "The area of the " << shape << " is: " << result << " square centimeters";
    return 0;
}