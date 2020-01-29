//Takes input matrix and performs matrix addition,subtraction ,multiplication and transpose operation.
#include<iostream>
using namespace std;

int **create_matrix(int row,int column)
{
	int** arr ;
	arr = new int*[row];
	for(int i=0;i<row;i++)
	{
		arr[i]=new int[column];
		for(int j=0;j<column;j++)
		{
			cin>>arr[i][j];
		}
	}
	return arr;
}

void show_matrix(int **arr,int row,int column)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

}

int **addition(int **arrA,int **arrB,int row,int column)
{
	int** S = new int*[row];
	for(int i=0;i<row;i++)
	{
		S[i]=new int[column];
		for(int j=0;j<column;j++)
		{
			S[i][j]=arrA[i][j]+arrB[i][j];
		}
	}
	return S;
}

int **subtraction(int **arrA,int **arrB,int row,int column)
{
	int** D = new int*[row];
	for(int i=0;i<row;i++)
	{
		D[i]=new int[column];
		for(int j=0;j<column;j++)
		{
			D[i][j]=arrA[i][j]-arrB[i][j];
		}
	}
	return D;
}

int **matrix_transpose(int **arr,int row,int column)  
{
	int **T = new int*[column];
	for(int i=0;i<column;i++)
	{
		T[i]=new int[row];
		for(int j=0;j<row;j++)
		{
			T[i][j]=arr[j][i];
		}
	}
	return T;
}

int **matrix_multiplication(int **A,int **B,int r1,int c1,int r2,int c2)
{	int sum;
	int **T =new int*[r1];
	for(int i=0;i<r1;i++)
	{
		T[i]=new int[c2];
		for(int j=0;j<c2;j++)
		{	int sum=0;
			for(int k=0;k<c2;k++)
			{
				sum=sum+A[i][k]*B[k][j];
			}
			T[i][j]=sum;

		}
	}
	return T;
}

int main()
{
	int r1,c1,r2,c2;
	cout<<"Enter no. of rows and columns of matrix A: \n";
	cin>>r1>>c1;
	int **A;
	cout<<"Enter matrix A: \n";
	A=create_matrix(r1,c1);

	cout<<endl;
	cout<<"Enter no. of rows and columns of matrix B: \n";
	cin>>r2>>c2;
	int **B;
	cout<<"Enter matrix B: \n";
	B=create_matrix(r2,c2);
	
	
	cout<<endl;
	cout<<"Matrix A : \n";
	show_matrix(A,r1,c1);

	cout<<endl;
	cout<<"Matrix B : \n";
	show_matrix(B,r2,c2);

	
	int choice;
	do
	{
		cout<<endl;
		cout<<"Select operation to be performed:\n";
		cout<<"1. Matrix Addition\n";
		cout<<"2. Matrix Subtraction\n";
		cout<<"3. Matrix Transpose\n";
		cout<<"4. Matrix Multiplication\n";
		cout<<"5. For exit \n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				int **S;
				if(r1==r2 && c1==c2)
				{
				S=addition(A,B,r1,c1);
					cout<<endl;
					cout<<"A+B:\n";
					show_matrix(S,r1,c1);
				}
				else
					cout<<"Matrix is not compatible for Addition.\n";
			}
			break;
			
			case 2:
			{
				int **D;
				if(r1==r2 && c1==c2)
				{
					D=subtraction(A,B,r1,r2);
					cout<<endl;
					cout<<"A-B:\n";
					show_matrix(D,r1,c1);
				}
				else
					cout<<"Matrix is not compatible for Subtraction.\n";
			}
			break;
			
			case 3:
			{	cout<<"Choose Matrix: \n";
				cout<<"1. for matrix A:\n";
				cout<<"2. for matrix B:\n";
				cout<<"3. for both matrix :\n";
				int select;
				cin>>select;
				switch(select)
				{
				case 1:
					{	
						int **T;
						T = matrix_transpose(A,r1,c1);
						cout<<"Transpose of matrix A:\n";
						show_matrix(T,c1,r1);
					}
				break;
				case 2:
					{	
						int **T;
						T = matrix_transpose(B,r2,c2);
						cout<<"Transpose of matrix A:\n";
						show_matrix(T,c2,r2);
					}
				break;
				case 3:
					{

						int **TA;
						TA = matrix_transpose(A,r1,c1);
						cout<<"Transpose of matrix A:\n";
						show_matrix(TA,c1,r1);

						int **TB;
						TB = matrix_transpose(B,r2,c2);
						cout<<"Transpose of matrix B:\n";
						show_matrix(TB,c2,r2);
					
					}
				}	
			}
				break;

			case 4:
			{
				int **M;
				if(c1==r2)
				{
					M = matrix_multiplication(A,B,r1,c1,r2,c2);
					show_matrix(M,r1,c2);
				}
				else
					cout<<"Matrix A and B are not compatible for matrix multiplication\n";

			}
				break;
		
			case 5:
				break;

			default:
			cout<<"Invalid choice\n";
			break;

		}
	}while(choice!=5);
	return 0;
}
