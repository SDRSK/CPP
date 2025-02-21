#include <iostream>

int main() 
{
int a[16] = {42, 65, 94, 23, 13, 52, 69, 48, 11, 73, 22, 86, 95, 33, 29, 67};
for (int i = 0; i < 16; i++){
    std::cout<<a[i]<<"\t";
    
}
std::cout<<std::endl;

for (int i = 0; i < 15; i++){
    if(a[i]<a[i+1]){
        int b = a[i];
        a[i] = a[i+1];
        a[i+1]=b;
             
    }
    
}
for (int i = 0; i < 16; i++){
    std::cout<<a[i]<<"\t";
} 
std::cout<<std::endl;
return 0;
} 
