



#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <ctime>

void display()
{
	std::cout<<"1.Implement a matrix multiplication function."<<std::endl;
	std::cout<<"2.Implement a matrix addition function"<<std::endl;
	std::cout<<"3.Implement a matrix transpose function"<<std::endl;
}


void transpose()
{
	std::cout<<"1. Matrix A"<<std::endl;
	std::cout<<"2. Matrix B"<<std::endl;
}

void print(int** matrix, int row, int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			std::cout<<"\t"<<matrix[row][col];
		}
		std::cout<<"\n\n";
	}
}


int* readM(std::string name)
{
file ( name );
int m1;

getline (file, m1, ',' ); 
int* A=new int [m1*m1+1];



int i=1;
while ( file.good() )
{
	
     getline ( file, A[i], ',' );  
     i=i+1;
}
A[0]=m1;
return A;

}


int main()
{
	ifstream file;	
	int i;
	int j;
	int k;							
	int* A=readM("M1.txt");
	int* B=readM("M2.txt");
	//init for M1
	int m1=A[0];
	int M1 [m1][m1];
	for (i=0;i<m1;i++)
	{
		for(k=0;k<m1;k++)
		{
		if(A[k+i+1]==null)
		{
			cout<<"invaild input";
		}
		else
		{
			M1[i][k]=A[k+i+1];
		}
		}
	}


//init for M2
int m2=B[0];
int M2 [m2][m2];
for (j=0;i<m1;i++)
{
	for(int h=0;k<m1;k++)
	{
		if(B[k+i+1]==null)
		{
		std::cout<<"invaild input";
		}
		else
		{
		M2[j][h]=A[j+h+1];
		}
	}

}
//============================

bool flag=false;
if(m2==m1)
{
	flag=true;
	
}


int n=m1;





//======================================





	int** A=new int* [n];
	int** B=new int* [n];
	for(int i=0;i<n;i++)
	{
		A[i]=M1[i];
		B[i]=M2[i];
	}
	int C[n][n];
	
	int option=0;

	std::cout<<"Please choosing an option"<<std::endl;

	display();

	std::cin>>option;

	if(flag==false)
	{
		std::cout<<"can not process option 1 and 2"<<std::endl;
	}
	

	if(option==1 && flag==true)
	{	
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				C[i][j]=0;
				for(k=0;k<n;k++)
				{
					C[i][j]=C[i][j]+A[i][k]*b[k][j];
				}
			}
		}

		print(C,n,n);
	}

	if(option==2 && flag==true)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				C[i][j]=0;
				for(k=0;k<n;k++)
				{
					C[i][j]=C[i][j]+A[i][k]+b[k][j];
				}
			}
		}

		print(C,n,n);
	
	}

	if(option==3)
	{

		int temp;
		transpose();

		std::cin>>option;

		if(option==1)
		{
			std::cout<<"You choose the matrix A"<<std::endl;
			for(i=0;i<m1;i++)
			{
				for(j=i;j<m1;j++)
				{
					temp=A[i][j];
					A[i][j]=A[j][i];
					A[j][i]=temp;
				}
			}
		
			print(A,m1,m1);
		}
		if(option==2)
		{
			std::cout<<"You choose the matrix B"<<std::endl;
			for(i=0;i<m2;i++)
			{
				for(j=i;j<m2;j++)
				{
					temp=B[i][j];
					B[i][j]=B[j][i];
					B[j][i]=temp;
				}
			}

			print(B,m2,m2);
		}
	}
	
return 0;
}





