#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int x[100][100];
    int m;
    cout<<"Masukkan Ordo matriks : ";
    cin>>m;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<" Masukan ["<<i<<","<<j<<"] : ";
            cin>>x[i][j];
			if(m==i+j+1)
				x[i][j]=0;
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
			cout<<" "<<x[i][j];
		}
        cout<<endl;
		}
system("pause");
}
