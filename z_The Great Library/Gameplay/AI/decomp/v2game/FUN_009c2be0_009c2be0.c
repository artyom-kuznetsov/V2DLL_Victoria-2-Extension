// FUN_009c2be0 @ 009c2be0 body=[[009c2be0, 009c2c6e]]


undefined1 * FUN_009c2be0(undefined1 *param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_ECX + 0x34); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
    if (param_2 == *piVar1) {
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00408ed0(piVar1 + 1,0,0xffffffff);
      return param_1;
    }
  }
  if (*(int *)(in_ECX + 0x68) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    return param_1;
  }
  FUN_009c2be0(param_1,param_2);
  return param_1;
}

