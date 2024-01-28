// #include<stdlib.h>
// #include<stdio.h>
// int MaxIndex(int array[], int size);
// int MaxValue(int array[],int size);
// int main (){
//   int array[] = {91,7,100,2,3};
//   int TheSize = sizeof(array)/sizeof(array[0]);
//   printf("%d \n", MaxValue(array,TheSize));
//   printf("%d \n", MaxIndex(array,TheSize));
// }
// int MaxValue(int array[],int size){
//   int max = 0;
//   for(int i=0;i<size;i++){
//     if(array[i]>max){
//       max = array[i];
//     }
//   }
//   return max;
// }
// int MaxIndex(int array[], int size){
//   int Maxindex = 0;
//   for(int i =0; i<size+1; i++){
//     Maxindex = i;
// }
// return Maxindex;
// }






// float GetAvarage(int arra[] , int size);
// int main(){
//  int array[Array_Size] = {2,4,3,2};
//  for(int i = 0;i<Array_Size-1;i++){
//    printf("%d ", array[i]);
//  }
//  printf("%f", GetAvarage(array,Array_Size));
//  return 0;
// }
// float GetAvarage(int arra[] , int size){
//   float sum = 0;
//   for(int i = 0;i<size;i++){
//     sum+=arra[i];
//   }
//   return sum/size;
// }

  // int array[Array_Size] = {91,7,3,2,5,4,7};
  // for(int i = 0;i<Array_Size-1;i++){
  //   for(int j = i+1; j<Array_Size;j++){
  //     if(array[i]>array[j]){
  //       int temp = array[i];
  //       array[i] = array[j];
  //       array[j] = temp;
  //     }
  //   }
  // }
  // for(int i = 0;i<Array_Size;i++){
  //   printf("%d ", array[i]);
  // }



// int main(){
//   int MaxNumber,i;
//   int arrray[5];
//   for(i=0;i<5;i++){
//     printf("Enter the %d number\n", i+1);
//     scanf("%d", &arrray[i]);
//   }
//   for(i=0;i<5;i++){
//     if(arrray[i]>MaxNumber){
//       MaxNumber = arrray[i];
//     }
//   }
//   printf("The largest number is %d\n", MaxNumber);
//   return 0;
// }


// int main()
// {
//   int GuessNumber;
//   int EnterNumber;
//   printf("Enter the number you want to guess\n");
//   scanf("%d", &EnterNumber);
//   srand(time(NULL));
//   GuessNumber = rand() % 100;
//   while (GuessNumber != EnterNumber)
//   {
//     if(GuessNumber < EnterNumber){
//       printf("Number you entered is bigger than the number\n");
//       scanf("%d", &EnterNumber);
//     }
//     else if(GuessNumber > EnterNumber){
//       printf("Number you entered is smaller than the number\n");
//       scanf("%d", &EnterNumber);
//     }

//   }
//   printf("You guessed it right\n");
//   return 0;
// }