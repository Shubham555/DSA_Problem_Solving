/************************ Virtual Base Class in C++ *******************************/
/*
student--------> test & sport;
test & sports--> result;
*/
#include <iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void set_number(int r){
        roll_no=r;
    }
    void print_number(){
        cout<<"your roll_no is "<<roll_no<<endl;
    }
}; 

class test : virtual public student{
  protected:
  float math,physics;
  public:
  void set_marks(float m1, float m2){
      math=m1;
      physics=m2;
  }
  void print_marks(){
      cout<<"your maths marks are "<<math<<endl;
      cout<<"your physics makrs are "<<physics<<endl;
  } 
};
class sports: virtual public student{
    protected:
    float score;
    public:
    void set_score(float s){
        score=s;
    }
    void print_score(){
        cout<<"your PT score is "<<score<<endl;
    }
};
class result : public test,public sports{
    private:
    float total;
    public:
    void Display(){
        total=math+physics+score;
        
        print_number();
        print_marks(); 
        print_score();
        cout<<"your total result is "<<total<<endl;
    }
};

int main(){
    result harry;
    harry.set_number(420);
    harry.set_marks(78.9,99.5);
    harry.set_score(9);
    
    harry.Display();
    return 0;
}

