class Matrix
{
public:

	// Creates an empty Matrix of size 0 times 0.
	Matrix();

	// Creates an identity Matrix of size <size> times <size>.
	Matrix(int size);

	// Creates a Matrix of size <height> times <width> filled with 0s.
	Matrix(int height, int width);

	// Destructor
	~Matrix();

	int getWidth() const;

	int getHeight() const;

	void resize(int height, int width);


	// Returns the value at the specified position in the Matrix.
	double& operator()(const int row, const int col);
	double operator()(const int row, const int col) const;

private:
	int width;
	int height;

	double** values;

};
