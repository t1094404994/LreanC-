#include<iostream>  
#include<string>  
#include<cmath>  
#include<cstdlib>  
  
using namespace std;  
  
//四则运算  
template <class T> class ElementaryArithmetic{  
private:  
    T result;  
    T operand1, operand2;  
    char operators;  
public:  
    //四则运算  
    void Calculate();   
    //加法运算  
    void add(T, T);   
    //减法运算  
    void subtraction(T, T);   
    //乘法运算  
    void multiplication(T, T);  
    //除法运算  
    void divide(T, T);   
    //输出运算符重载  
    template <class E> friend ostream &operator<<(ostream&, ElementaryArithmetic<E> &);  
};  
  
//四则运算  
template <class T> void ElementaryArithmetic<T>::Calculate(){  
    int type;  
  
loop1:  
    system("cls");  
    cout << endl << "*******************" << endl;  
    cout << "*   1.加法运算    *" << endl;   
    cout << "*   2.减法运算    *" << endl;    
    cout << "*   3.乘法运算    *" << endl;    
    cout << "*   4.除法运算    *" << endl;   
    cout << "*******************" << endl << endl;  
    cout << "请输入菜单项(1-4)：";  
    try{  
        cin >> type;  
        if (type != 1 && type != 2 && type != 3 && type != 4)  
            throw 1;  
    }  
    catch (int e){  
        cout << endl << "输入错误，请重新输入选项...";  
        system("pause");  
        goto loop1;  
    }  
      
    cout << endl << "请输入两个数字：";  
    cin >> operand1 >> operand2;  
    if (type == 1){  
        add(operand1, operand2);  
        operators = '+';  
    }  
    else if (type == 2){  
        subtraction(operand1, operand2);  
        operators = '-';  
    }  
    else if (type == 3){  
        multiplication(operand1, operand2);  
        operators = '*';  
    }  
    else if (type == 4){  
        divide(operand1, operand2);  
        operators = '/';  
    }  
      
}  
  
//加法运算  
template <class T> void ElementaryArithmetic<T>::add(T operand1,T operand2){  
    result = operand1 + operand2;  
}  
  
//减法运算  
template <class T> void ElementaryArithmetic<T>::subtraction(T operand1, T operand2){  
    result = operand1 - operand2;  
}  
  
//乘法运算  
template <class T> void ElementaryArithmetic<T>::multiplication(T operand1, T operand2){  
    result = operand1 * operand2;  
}  
  
//除法运算  
template <class T> void ElementaryArithmetic<T>::divide(T operand1, T operand2){  
    try{  
        //除数为0，出现异常  
        if ((operand2 - 0) < 1e-8 && (operand2 - 0) > -1e-8)  
            throw 0;  
    }  
    catch (int){  
        throw ;  
    }  
    result = operand1 / operand2;  
}  
  
//输出运算符重载  
template <class E> ostream& operator<<(ostream &os, ElementaryArithmetic<E> &result){  
    os << endl << "计算结果 ： " << result.operand1 << result.operators << result.operand2 << '=' << result.result << endl;  
    return os;  
}  
  
//三角函数  
class Trigonometric{  
private:  
    double radian;  
    string type;  
    double result;  
public:  
    //三角函数计算  
    void Calculate();  
    //输出运算符重载  
    friend ostream &operator<<(ostream&, Trigonometric &);  
};  
  
//三角函数计算  
void Trigonometric::Calculate(){  
    int option;  
  
loop2:  
    system("cls");  
    cout << "*******************" << endl;  
    cout << "*    1.求正弦      *"<< endl;   
    cout << "*    2.求余弦      *"<< endl;  
    cout << "*    3.求正切      *"<< endl;  
    cout << "*******************" << endl << endl;  
    cout << "请输入菜单项(1-3)：";  
    try{  
        cin >> option;  
        if (option != 1 && option != 2 && option != 3 && option != 4)  
            throw 2;  
    }  
    catch (int e){  
        cout << endl << "输入错误，请重新输入选项..." ;  
        system("pause");  
        goto loop2;  
    }  
      
  
    cout << endl << "请输入弧度：";  
    cin >> radian;  
  
    if (option == 1){  
        result = sin(radian);  
        type = "sin";  
    }  
    else if (option == 2){  
        result = cos(radian);  
        type = "cos";  
    }  
    else if (option == 3){  
        result = tan(radian);  
        type = "tan";  
    }  
}  
  
//输出运算符重载  
ostream &operator<<(ostream &os, Trigonometric &result){  
    os << endl << "计算结果 ： " << result.type << "(" << result.radian << ") = " << result.result << endl;  
    return os;  
}  
  
int main(){  
    int type;  
  
loop:  
    while (true){  
        system("cls");  
        cout << "*******主菜单**********" << endl;  
        cout << "*                     *" << endl;  
        cout << "*   1. 四则运算       *" << endl;  
        cout << "*   2. 三角函数       *" << endl;  
        cout << "*   3. 退出程序       *" << endl;  
        cout << "*                     *" << endl;  
        cout << "***********************" << endl << endl;  
        cout << "请输入菜单项(1-3)：";  
  
        try{  
            cin >> type;  
            if (type != 1 && type != 2 && type != 3)  
                throw - 1;  
          
            if (type == 1){  
                ElementaryArithmetic<double> calc;  
                calc.Calculate();  
                cout << calc;  
            }  
            else if (type == 2){  
                Trigonometric calc;  
                calc.Calculate();  
                cout << calc;  
            }  
            else if (type == 3)  
                break;  
        }  
        catch (int e){  
            if (e == -1){  
                cout << endl << "输入错误，请重新输入选项...";  
                system("pause");  
                goto loop;  
            }  
            else if (e == 0)  
                cout << "除数不能为 0 " << endl;  
              
        }  
        cout << endl;  
        system("pause");  
    }  
    return 0;  
}