#include <iostream>

template <class type>
class Matrix
{
private:
    type m_matrix[3][3];

public:
    Matrix(Matrix matrix)
    {
        m_matrix = matrix;
    }

    void sum(Matrix a)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m_matrix[i][j] += a[i][j];
            }
        }
    }
    void subtract(Matrix a)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                m_matrix[i][j] -= a[i][j];
            }
        }
    }
    void multiply(Matrix a){
        
    }
};

int main()
{
}