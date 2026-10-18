// FUN_0047d800 @ 0047d800 body=[[0047d800, 0047d85a]]


void FUN_0047d800(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  do {
    if (param_2[2] != 0) {
      FUN_0047d800(param_1,param_2[2]);
    }
    if ((*param_2 != 0) && (iVar1 = *(int *)(*param_2 + 0x1c), iVar1 != 0)) {
      FUN_0099f250(iVar1);
    }
    if (param_2[4] != 0) {
      FUN_0047d800(param_1,param_2[4]);
    }
    param_2 = (int *)param_2[3];
  } while (param_2 != (int *)0x0);
  return;
}

