#pragma once
#include <complex>

extern "C"
{
	void dgemm_(char* TRANSA,
		char* TRANSB,
		int* M,
		int* N,
		int* K,
		double* ALPHA,
		double* A,
		int* LDA,
		double* B,
		int* LDB,
		double* BETA,
		double* C,
		int* LDC
	);

	void dgesv_(int*,
		int*,
		double*,
		int*,
		int*,
		double*,
		int*,
		int*);

	void dgetrf_(int* 	M,
		int* 	N,
		double*A,
		int* 	LDA,
		int*	IPIV,
		int* 	INFO
	);

	void dgetrs_(char*,
		int*,
		int*,
		double*,
		int*,
		int*,
		double*,
		int*,
		int*);

	void sgesv_(int*,
		int*,
		float*,
		int*,
		int*,
		float*,
		int*,
		int*);

	void sgetrf_(int* 	M,
		int* 	N,
		float*A,
		int* 	LDA,
		int*	IPIV,
		int* 	INFO
	);

	void sgetrs_(char*,
		int*,
		int*,
		float*,
		int*,
		int*,
		float*,
		int*,
		int*);

	void cgesv_(int*,
		int*,
		std::complex<float>*,
		int*,
		int*,
		double*,
		int*,
		int*);

	void cgetrf_(int* 	M,
		int* 	N,
		std::complex<float>*A,
		int* 	LDA,
		int*	IPIV,
		int* 	INFO
	);

	void cgetrs_(char*,
		int*,
		int*,
		std::complex<float>*,
		int*,
		int*,
		std::complex<float>*,
		int*,
		int*);

	void zgesv_(int*,
		int*,
		std::complex<double>*,
		int*,
		int*,
		double*,
		int*,
		int*);

	void zgetrf_(int* 	M,
		int* 	N,
		std::complex<double>*A,
		int* 	LDA,
		int*	IPIV,
		int* 	INFO
	);

	void zgetrs_(char*,
		int*,
		int*,
		std::complex<double>*,
		int*,
		int*,
		std::complex<double>*,
		int*,
		int*);
}

