// FUN_0045fbc0 @ 0045fbc0 body=[[0045fbc0, 0045fc52]]


undefined1 * FUN_0045fbc0(int *param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = param_1[1] - *param_1 >> 2;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*param_1 + iVar4 * 4);
      if (((int)(*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) & 0xfffffffcU) < 1) ||
         (cVar2 = (**(code **)(*(int *)(iVar1 + 8) + 0x18))(param_3), cVar2 != '\0')) {
        FUN_0045d9a0(param_2,0,0,0);
        return param_2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00409350(&DAT_00ded94d,0);
  return param_2;
}

