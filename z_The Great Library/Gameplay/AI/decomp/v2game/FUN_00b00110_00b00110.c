// FUN_00b00110 @ 00b00110 body=[[00b00110, 00b00159]]


void FUN_00b00110(int *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*param_1 != 0) {
    FUN_00b13660(param_1[1],0);
    if ((void *)*in_ECX != (void *)0x0) {
      FID_conflict__memcpy((void *)*in_ECX,(void *)*param_1,param_1[1] + 1);
    }
  }
  return;
}

