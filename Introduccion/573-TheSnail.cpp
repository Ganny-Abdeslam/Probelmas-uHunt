// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[]){

//     int percentaje, Down;
//     double Height, Up;
//     bool flag = true;

//     while (scanf("%lf%lf%d%d", &Height, &Up, &Down, &percentaje), Height != 0){
//         int days = 0;
//         double d, x = 0;
//         bool flagInt = true;

//         d = Up / 100.0 * percentaje;
//         do
//         {
//             x += Up;

//             ++days;

//             if(x > Height){
//                 flagInt = false;
//             }

//             Up -= d;

//             if(Up < 0){
//                 Up = 0;
//             }

//             x -= Down;
            
//         } while (x >= 0 && flagInt);
        
//         if(x <= 0){
//             cout << "failure on day " << days << "\n";
//         }else{
//             cout << "success on day " << days << "\n";
//         }
//     };

//     return 0;
// }

#include <cstdio>

int main()
{
    int dropDist, decayPercent, dayNum;
    double wellH, climbDist, decayNum, position;
    
    while (scanf("%lf%lf%d%d", &wellH, &climbDist, &dropDist, &decayPercent), wellH != 0)
    {
        position = dayNum = 0;
        decayNum = climbDist / 100.0 * decayPercent;
        
        do {
            position += climbDist;
            
            ++dayNum;
            
            if (position > wellH)
                break;
            
            
            climbDist -= decayNum;
            
            if (climbDist < 0)
                climbDist = 0;
                
            position -= dropDist;
            
        } while (position >= 0);
        
        if (position <= 0)
            printf("failure on day %d\n", dayNum);
        else
            printf("success on day %d\n", dayNum);
    }
    
}