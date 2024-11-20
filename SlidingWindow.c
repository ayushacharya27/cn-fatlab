#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int w , i , f, frames[50];
printf("Enter Window Size:\n");
scanf("%d", &w);

printf("Enter Number of Frames:\n");
scanf("%d",&f);

printf("Enter Frames:\n");
for(int i = 0 ; i < f ;i++){
    scanf("%d",&frames[i]);
}
printf("In Sliding Window the Windows are sent in a following Manner (Assuming No Window is Corrupted)\n");
printf("After %d Frames , the Sender Waits for a Fraction Of Seconds to get an Acknowledgement\n", w);

for(int i = 0 ; i < f ; i++ ){
    if(i%w==0){
        printf("\t%d",frames[i]);
        printf(" Acknowledgement of these frames are Recieved by Sender\n");
    }
    else{
        printf("\t%d",frames[i]);
    }
}
if(f%w!=0){
    printf("Acknowledgement of these frames are Recieved by Sender\n");
}

}

