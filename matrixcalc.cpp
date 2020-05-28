//This is A C program written to perform various mathematical functions on a user provided matrix
//Written by Andrew Vincent
//Spring 2019

#include <iostream>
using namespace std;

void addition(){
	cout<<"Welcome to the Addition Function!"<<endl;

	int rows1;
	int cols1;
	int rows2;
	int cols2;
	int userchoice;

	//User Input and Array Creating for the Two Matrices
	cout<<"Please enter the number of rows for your first matrix: ";
	cin>>rows1;

	cout<<"Please enter the number of columns for your first matrix: ";
	cin>>cols1;

	int arr1[rows1][cols1];

	cout<<"Please enter the number of rows for your second matrix: ";
	cin>>rows2;

	cout<<"Please enter the number of columns for your second matrix: ";
	cin>>cols2;

	int arr2[rows2][cols2];

	if(rows1!=rows2 || cols1 != cols2){
		cout<<"You have entered 2 matrices of different sizes."<<endl;
		cout<<endl;
		addition();
	}
	else{

	//For Loop To Get User Input on the First Array
	for(int i=0; i<rows1; ++i){
		for(int j=0; j<cols1; ++j){
			cout<<"Please enter your value for matrix1("<<i<<","<<j<<"): ";
			cin>>arr1[i][j];
		}
	}

	//For Loop To Get User Input on the Second Array
	for(int a=0; a<rows2; ++a){
		for(int b=0; b<cols2; ++b){
			cout<<"Please enter your value for matrix2("<<a<<","<<b<<"): ";
			cin>>arr2[a][b];
		}
	}

	//Printing out Matrix 1
	cout<<"Matrix 1:"<<endl;
	for(int c=0; c<rows1; ++c){
		for(int d=0; d<cols1; ++d){
			cout<<arr1[c][d]<<" ";
		}
		cout<<endl;
	}

	//Printing out Matrix 2
	cout<<"Matrix 2:"<<endl;
	for(int e=0; e<rows2; ++e){
		for(int f=0; f<cols2; ++f){
			cout<<arr2[e][f]<<" ";
		}
		cout<<endl;
	}

	//Creating the Addition matrix
	int addmat[rows1][cols1];

	for(int index=0; index<rows1; ++index){
		for(int jndex=0; jndex<cols1; ++jndex){
			addmat[index][jndex]=arr1[index][jndex] + arr2[index][jndex];
		}
	}


	cout<<"Resulting matrix:"<<endl;
	for(int x=0; x<rows1; ++x){
		for(int z=0; z<cols1; ++z){
			cout<<addmat[x][z]<<" ";
		}
		cout<<endl;
	}



	}
	cout<<endl;
	int main();
	main();

}



void subtraction(){
	cout<<"Welcome to the Subtraction Function! "<<endl;

	int rows1;
	int cols1;
	int rows2;
	int cols2;

	//User Input and Array Creating for the Two Matrices
	cout<<"Please enter the number of rows for your first matrix: ";
	cin>>rows1;

	cout<<"Please enter the number of columns for your first matrix: ";
	cin>>cols1;

	int arr1[rows1][cols1];

	cout<<"Please enter the number of rows for your second matrix: ";
	cin>>rows2;

	cout<<"Please enter the number of columns for your second matrix: ";
	cin>>cols2;

	int arr2[rows2][cols2];

	if(rows1!=rows2 || cols1 != cols2){
		cout<<"You have entered 2 matrices of different sizes."<<endl;
		cout<<endl;
		subtraction();
	}
	else{

	//For Loop To Get User Input on the First Array
	for(int i=0; i<rows1; ++i){
		for(int j=0; j<cols1; ++j){
			cout<<"Please enter your value for matrix1("<<i<<","<<j<<"): ";
			cin>>arr1[i][j];
		}
	}

	//For Loop To Get User Input on the Second Array
	for(int a=0; a<rows2; ++a){
		for(int b=0; b<cols2; ++b){
			cout<<"Please enter your value for matrix2("<<a<<","<<b<<"): ";
			cin>>arr2[a][b];
		}
	}


	//Printing out Matrix 1
	cout<<"Matrix 1:"<<endl;
	for(int c=0; c<rows1; ++c){
		for(int d=0; d<cols1; ++d){
			cout<<arr1[c][d]<<" ";
		}
		cout<<endl;
	}

	//Printing out Matrix 2
	cout<<"Matrix 2:"<<endl;
	for(int e=0; e<rows2; ++e){
		for(int f=0; f<cols2; ++f){
			cout<<arr2[e][f]<<" ";
		}
		cout<<endl;
	}

	//Creating the Subtraction Matrix
	int submat[rows1][cols1];

	for(int index=0; index<rows1; ++index){
		for(int jndex=0; jndex<cols1; ++jndex){
			submat[index][jndex]=arr1[index][jndex] - arr2[index][jndex];
		}
	}

	//Printing out the Subtraction Matrix
	cout<<"Resulting matrix:"<<endl;
	for(int x=0; x<rows1; ++x){
		for(int z=0; z<cols1; ++z){
			cout<<submat[x][z]<<" ";
		}
		cout<<endl;
	}


	}
	cout<<endl;
	int main();
	main();

}


void multiplication(){
	cout<<"Welcome to the Multiplication Function"<<endl;

	int rows1;
	int cols1;
	int rows2;
	int cols2;

	//User Input and Array Creating for the Two Matrices
	cout<<"Please enter the number of rows for your first matrix: ";
	cin>>rows1;

	cout<<"Please enter the number of columns for your first matrix: ";
	cin>>cols1;

	int arr1[rows1][cols1];

	cout<<"Please enter the number of rows for your second matrix: ";
	cin>>rows2;

	cout<<"Please enter the number of columns for your second matrix: ";
	cin>>cols2;

	int arr2[rows2][cols2];


	//For Loop To Get User Input on the First Array
	for(int y=0; y<rows1; ++y){
		for(int z=0; z<cols1; ++z){
			cout<<"Please enter your value for matrix1("<<y<<","<<z<<"): ";
			cin>>arr1[y][z];
		}
	}

	//For Loop To Get User Input on the Second Array
	for(int a=0; a<rows2; ++a){
		for(int b=0; b<cols2; ++b){
			cout<<"Please enter your value for matrix2("<<a<<","<<b<<"): ";
			cin>>arr2[a][b];
		}
	}

	//Printing out Matrix 1
	cout<<"Matrix 1:"<<endl;
	for(int c=0; c<rows1; ++c){
		for(int d=0; d<cols1; ++d){
			cout<<arr1[c][d]<<" ";
		}
		cout<<endl;
	}

	//Printing out Matrix 2
	cout<<"Matrix 2:"<<endl;
	for(int e=0; e<rows2; ++e){
		for(int f=0; f<cols2; ++f){
			cout<<arr2[e][f]<<" ";
		}
		cout<<endl;
	}

	//Initializing the multiplication array to 0
	int multarr[rows1][cols2];

	for(int index=0; index<rows1; ++index){
		for(int index2=0; index2<cols2; ++index2){
			multarr[index][index2]=0;
		}
	}

	//Multiplying all the elements and storing it in the array
	 for(int i=0; i<rows1; ++i)
       for(int j=0; j<cols2; ++j)
           for(int k=0; k<cols1; ++k)
            {
                multarr[i][j]+=arr1[i][k]*arr2[k][j];
            }

     //Printing out the multiplication array
     cout<<"Multiplied Array: "<<endl;

     for(int i=0; i<rows1; ++i){
     	for(int j=0; j<cols2; ++j){
     		cout<<multarr[i][j]<<" ";
     	}
     	cout<<endl;
     }

    cout<<endl;
    int main();
	main();




}

void determininant(){
	cout<<"Welcome to the Determinant Function! "<<endl;
	int det[3][3];

	//Getting user input to build the initial matrix
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			cout<<"Please enter your value for matrix("<<i<<","<<j<<"): ";
			cin>>det[i][j];
		}
	}

	//Printing out the initial array
	cout<<"Array:"<<endl;
	for(int k=0; k<3; ++k){
		for(int p=0; p<3; ++p){
			cout<<det[k][p]<<" ";
		}
		cout<<endl;
	}

	//Calculating the determinant
	int determinant;
	int a = det[0][0];  // I am putting in these variables so the determinant function itself is simpler to comprehend/execute
	int b = det[0][1];
	int c = det[0][2];
	int d = det[1][0];
	int e = det[1][1];
	int f = det[1][2];
	int g = det[2][0];
	int h = det[2][1];
	int z = det[2][2];

	cout<<endl;
	cout<<"Determinant:"<<endl;
	determinant = a*((e*z)-(f*h)) - b*((d*z)-(f*g)) + c*((d*h)-(e*g));
	cout<<determinant;

	cout<<endl;
	int main();
	main();
}

void transpose(){
	cout<<"Welcome to the Transpose Function! "<<endl;

	int rows;
	int cols;

	cout<<"Please enter the number of rows for your matrix: ";
	cin>>rows;

	cout<<"Please enter the number of columns for your matrix: ";
	cin>>cols;

	int arr[rows][cols];

	for(int a=0; a<rows; ++a){
		for(int b=0; b<cols; ++b){
			cout<<"Please enter your value for matrix("<<a<<","<<b<<"): ";
			cin>>arr[a][b];
		}
	}

	cout<<"Original Matrix: "<<endl;
	for(int i=0; i<rows; ++i){
		for(int j=0; j<cols; ++j){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	int transparr[cols][rows];

	for(int k=0; k<cols; ++k){
		for(int z=0; z<rows; ++z){
			transparr[k][z] = arr[z][k];
		}
	}
	cout<<"Transposed Matrix: "<<endl;
	for(int l=0; l<cols; ++l){
		for(int y=0; y<rows; ++y){
			cout<<transparr[l][y]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;
	int main();
	main();


}

void inverse(){
	cout<<"Welcome to the Inverse Function! "<<endl;
	int inv[3][3];
	//User input for the matrix
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			cout<<"Please enter your value for matrix("<<i<<","<<j<<"): ";
			cin>>inv[i][j];
		}
	}
	//Calculating determinant
	float determinant; //using a float because this provided the most accurate matrix in the end

  for(int i=0;i<3;i++)
  determinant += (inv[0][i]*(inv[1][(i+1)%3]*inv[2][(i+2)%3] - inv[1][(i+2)%3]*inv[2][(i+1)%3]));

//Calculating and printing out the inverted matrix
  cout<<"Inverted Matrix: "<<endl;
   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++)
       printf("%.2f\t",((inv[(j+1)%3][(i+1)%3] * inv[(j+2)%3][(i+2)%3]) - (inv[(j+1)%3][(i+2)%3]*inv[(j+2)%3][(i+1)%3]))/determinant); //I'm using printf here because it was much easier to format
       cout<<endl;
   }
   cout<<endl;
   int main();
   main();
}

int main(){
	cout<<"Matrix Calculator Main Menu:"<<endl;
	cout<<"Choice 1: Addition"<<endl; //done
	cout<<"Choice 2: Subtraction"<<endl; //done
	cout<<"Choice 3: Multiplication"<<endl; //done
	cout<<"Choice 4: Determinant"<<endl; //done
	cout<<"Choice 5: Transpose"<<endl; //done
	cout<<"Choice 6: Inverse"<<endl; //done
	cout<<"Choice 0: Exit the Program"<<endl;

	int choice;
	cout<<"Please enter your choice: ";
	cin>>choice;
	cout<<endl;

	switch(choice){
		case 0:
		return 0;
		break;

		case 1:
		addition();
        break;

		case 2:
		subtraction();
        break;

		case 3:
		multiplication();
        break;

		case 4:
		determininant();
		break;

		case 5:
		transpose();
		break;

		case 6:
		inverse();
		break;

		case 7:
		return 0;
		break;

		default:{
		cout<<"You have not entered a valid choice, try again."<<endl;
		return 0;
	}

	}
}
