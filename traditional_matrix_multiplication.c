//Jack Hannon matrix multiplication function Lab 4



// 4x4 matrix version
/*
void matrix_mult(int A[4][4], int B[4][4], int AB[4][4])
{
	#pragma HLS ARRAY_RESHAPE dim=1 type=complete variable=B
	#pragma HLS ARRAY_RESHAPE dim=2 type=complete variable=A
	for (int i = 0; i < 4; ++i){
		//#pragma HLS PIPELINE II = 1
		for (int j = 0; j < 4; ++j){
			#pragma HLS PIPELINE II = 1
			int abij = 0;
			for (int k = 0; k < 4; ++k){
				#pragma HLS PIPELINE
				abij += A[i][k] * B[k][j];
			}
			AB[i][j] = abij;
		}
	}
}*/




void matrix_mult(int A[2][2], int B[2][2], int AB[2][2])
{
	#pragma HLS ARRAY_RESHAPE dim=1 type=complete variable=B
	#pragma HLS ARRAY_RESHAPE dim=2 type=complete variable=A
	for (int i = 0; i < 2; ++i){
		//#pragma HLS PIPELINE II = 1
		for (int j = 0; j < 2; ++j){
			#pragma HLS PIPELINE II = 1
			int abij = 0;
			for (int k = 0; k < 2; ++k){
				#pragma HLS PIPELINE
				abij += A[i][k] * B[k][j];
			}
			AB[i][j] = abij;
		}
	}
}



