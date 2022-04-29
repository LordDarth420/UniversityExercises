#include <stdio.h>
#include <stdlib.h>
typedef struct Box
{
    double width, length, height, volume;
}Box;
int main()
{
    Box boxes[10];
    for(int i = 0; i < 10; i++)
    {
        Box box;
        printf("Box %d:\n", i + 1);
        scanf("%lf\n%lf\n%lf\n%lf", &box.width, &box.length, &box.height,
              &box.volume);
        boxes[i] = box;
    }
    double maxVolume = boxes[0].volume;
    int maxIndex = 0, minIndex = 0;
    double minVolume = boxes[0].volume;

    for(int i = 0; i < 10; i++)
    {
        if(maxVolume < boxes[i].volume)
        {
            maxVolume = boxes[i].volume;
            maxIndex = i;
        }
        if(minVolume > boxes[i].volume)
        {
            minVolume = boxes[i].volume;
            minIndex = i;
        }
    }
    printf("Biggest volume: Box %d\nWidth: %0.2lf\nLength: %0.2lf\nHeight: %0.2lf\nVolume: %0.2lf\n\n", maxIndex + 1,
           boxes[maxIndex].width, boxes[maxIndex].length, boxes[maxIndex].height, boxes[maxIndex].volume);

    printf("Lowest volume: Box %d\nWidth: %0.2lf\nLength: %0.2lf\nHeight: %0.2lf\nVolume: %0.2lf", minIndex + 1,
           boxes[minIndex].width, boxes[minIndex].length, boxes[minIndex].height, boxes[minIndex].volume);
}
