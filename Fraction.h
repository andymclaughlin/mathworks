int runTests();


class Fraction {
    private:
        //n is the numerator
        //d is the denominator
        int n;
        int d;

    public:
        Fraction(int num, int denom);

        int getN() const;
        
        int getD() const;

        Fraction operator + (Fraction const &f);

        Fraction operator - (Fraction const &f);

        Fraction operator * (Fraction const &f); 

        Fraction operator / (Fraction const &f);
        
        bool operator == (Fraction const &f); 
        
        bool operator < (Fraction const &f); 

        bool operator > (Fraction const &f);

        void Print() const; 
};
