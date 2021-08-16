#include<iostream>
#include<torch/torch.h>

using namespace std;

int main(){

	float start = 3;
	float end = 10;
	int steps = 5;
	try
	{
		if ( steps ==1 )
			throw steps;
		
		float limit = ( end - start ) / (steps - 1 ) ;
		torch::Tensor x = torch:: range(start , end , limit );
		cout<<x;
	}
	
	catch ( int steps )
	{
		cout<<torch::tensor({start});
	}

	return 0;
}
