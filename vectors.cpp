#include <iostream>
#include <vector>

using namespace std;
//function to create and push-back elements into the array
vector<double> createOutputArray (int K, int N)
{
	// vector declaration
    vector<double> arr;
    int tmp = N;
	// pushing  a temporary value into the array
    arr.push_back(tmp);
    for(int i=1; i+2<=K; i+=2)
    {
        arr.push_back(++tmp);
        arr.push_back(tmp * 2);
        tmp *= 2;
    }
    if(K % 2 == 0)
        arr.push_back(++tmp);

    return arr;
}

int main()
{
    int K;
    double N;
    do
    {	//loop to define that we always get the value as desired in the condition of the homework
        cout << "Enter the value for the sequence: ";
        cin >> K;

        if ( K <= 3)
        {
            cout << "Write a bigger number!" << endl;
        }
    } while(K <= 3);

    cout << "Enter the first number: ";
    cin >> N;

	//output of the calculated numbers from the task
    vector<double> output = createOutputArray(K, N);
    for (int i=0; i < output.size(); i++)
    {
        cout << output.at(i);
        if(i < output.size()-1)
            cout << ",";
        else
            cout << endl;
    }

    return 0;
}
