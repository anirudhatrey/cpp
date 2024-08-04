#include <iostream.h>
using namespace std;

int rmdup(int array[],int size){
int temp[n];
int j=0;

for(int i=0;i<size-1;i++)
{

    if(array[i]!=array[i+1])
    {
        temp[j++]=array[i];
    }
    temp[j++]=array[n-1];

}
for (int i=0;i<j;i++){
    array[i]=temp[i];
}
return array;

}



int main(){
int array[]={1,2,3,4};
array=rmdup(array,4);

}
