#include <iostream>
using namespace std;
const int Max = 10;

int* enter_score(int);
double cal(const int*,int,int);
void print(const int* scores,int size, int end,double avg);

int main()
{
  int* scores = enter_score(Max); 
  double avg = cal(scores,Max,-1);
  print(scores,Max,-1,avg); 
  delete [] scores;
  return 0;
}


int* enter_score(int size)
{
  int * scores = new int[size];
  cout << "Please enter up to ten golf scores (Enter ten or enter -1 to end the input) " << endl;
  for (int i = 0; i < Max; ++i)
  {
    cout << "#" << i + 1<< ":";
    while(!(cin >> scores[i]))
    {
      cin.clear();
      while (cin.get() != '\n');
      cout << "Please enter the correct number: ";
    }
    if (scores[i] == -1)
      break;
    cin.get();
  }
  return scores;
}

double cal(const int *scores,int size,int end)
{
  double avg = 0;
  int count = 0;
  for ( int i = 0;i < size; ++i)
  {
    if (scores[i] == end)
      break;
    count ++;
    avg += scores[i];
  }
  return avg/count;
}

void print(const int* scores,int size, int end,double avg)
{
  cout << " Your grades are: ";
  for ( int i = 0;i < size; ++i)
  {
    if (scores[i] == end)
      break;
    cout << scores[i] << "\t";
  }

  cout << endl << "avg = " << avg << endl;
}

