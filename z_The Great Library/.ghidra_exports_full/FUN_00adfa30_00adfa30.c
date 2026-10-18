// FUN_00adfa30 @ 00adfa30 body=[[00adfa30, 00adfa65]]


void FUN_00adfa30(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)(in_ECX + 3) = 1;
  in_ECX[5] = param_1;
  in_ECX[6] = param_2;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = param_3;
  *(undefined1 *)(in_ECX + 7) = 0;
  *(undefined4 **)(param_3 + 0x1b4) = in_ECX;
  return;
}

