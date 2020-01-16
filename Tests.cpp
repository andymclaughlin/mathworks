#include "Fraction.h"
#include <random>
#include <cstdlib>

//idea choose random sequences of three operations and
//compare output of fraction to same output using
//float operation 
//there are 7 operations
// 1) + 
// 2) - 
// 3) *
// 4) / 
    
int runTests(){
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(1, 4);

    //Three operations with two start values = 3*2 + 2 = 8 samples per test
    int s[8];
    double d;
    int opSample[3];
    double fVal;
    bool testVal;

    for(int testId = 0; testId < 1000; testId++){
        s[0]= uni(rng);
        s[1] = uni(rng);
        Fraction f = Fraction(s[0], s[1]);
        d = (double) s[0] / (double) s[1];
        for(int o = 0; o < 3; o++){
            opSample[o] = uni(rng);        
            s[(o + 1) * 2] = uni(rng);
            s[(o + 1) * 2 + 1] = uni(rng);
            if(opSample[o] == 1){
                f = f + Fraction(s[(o + 1) * 2], s[(o + 1) * 2 + 1]);
                d = d + (double) s[(o + 1) * 2] / (double)  s[(o + 1) * 2 + 1];
            }
            if(opSample[o] == 2){
                f = f - Fraction(s[(o + 1) * 2], s[(o + 1) * 2 + 1]);
                d = d - (double) s[(o + 1) * 2] / (double)  s[(o + 1) * 2 + 1];
            }
            if(opSample[o] == 3){
                f = f * Fraction(s[(o + 1) * 2], s[(o + 1) * 2 + 1]);
                d = d * (double) s[(o + 1) * 2] / (double)  s[(o + 1) * 2 + 1];
            }
            if(opSample[o] == 4){
                f = f / Fraction(s[(o + 1) * 2], s[(o + 1) * 2 + 1]);
                d = d / ((double) s[(o + 1) * 2] / (double)  s[(o + 1) * 2 + 1]);
            }

        }
        fVal = (double) f.getN() / (double) f.getD();
        testVal = abs(fVal - d) > .0001;
        if(testVal){
            printf("testId: %d\n", testId);
            
            for(int o = 0; o < 3; o++){
                printf("opid: %d, val: ", o);
                if(opSample[o] == 1){
                    printf("+\n");
                }
                if(opSample[o] == 2){
                    printf("-\n");
                }
                if(opSample[o] == 3){
                    printf("*\n");
                }
                if(opSample[o] == 4){
                    printf("/\n");
                }
            }
            for(int fractInd = 0; fractInd < 4; fractInd++){
                printf("fractid: %d, val: %d/%d\n", fractInd, s[fractInd*2], s[fractInd*2+1]);
            }
            printf("comp: %d/%d\n", f.getN(), f.getD());
            printf("act: %f\n", d);
            printf("Tests failed.\n");
            return 1;  
        }

    }
        
    Fraction f11 = Fraction(uni(rng), uni(rng));
    Fraction f21 = Fraction(uni(rng), uni(rng));
    Fraction f31 = Fraction(uni(rng), uni(rng));
    
    if(!(f11 + f21 == f21 + f11)){
        printf("Test of equality failed.\n");
        return 1;  

    }    
    if(!(f11 + f21 <  f21 + f11 + f31)){
        printf("Test of less than failed.\n");
        return 1;  

    }    
    if(!(f11 + f21 + f31>  f21 + f11)){
        printf("Test of greater than failed.\n");
        return 1;  

    }    

    printf("Tests passed.\n");

    return 0;

}



