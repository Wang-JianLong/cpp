#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int LIMIT= 5;
 
void file_it(ostream & os,double fo,const double fe[], int n);

int main()
{
    ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        cout << "File Open Faild!!" << endl;
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "Enter the focal length  of your"
        "eyepieces:" << endl;
    cin >> objective;
    double eps[LIMIT];
    cout <<  "Enter the focal lengths,in mm,  of " << LIMIT
        << "Eyepieces:" << endl;
    for( int i = 0; i < LIMIT;++i)
    {
        cout << " Eyepiece #" << i + 1 << ":" << endl;
        cin >> eps[i];
    }
    
    file_it(fout,objective,eps,LIMIT);
    file_it(cout,objective,eps,LIMIT);
    cout << "DONE!" << endl;
    fout.close();
    return 0;
}  
// 
void file_it(ostream & os,double fo,const double fe[], int n)
{
    ios_base::fmtflags initial;
    // 置于定点表示法的模式
    initial = os.setf(ios_base::fixed);
    // 指定显示几位小数
    os.precision(0);
    os << "Focal length of objective"  << fo << "mm" << endl;
    // 将对象置于显示小数点的模式 
    os.setf(ios::showpoint);
    os.precision(1);
    // 设置下一个输出操作使用的字段宽度
    os.width(15);   
    os << "magnification" << endl;
    for(int i = 0; i < n; ++i)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int(fo/fe[i] + 0.5) << ndl;
    }
    os.setf(initial);
}
