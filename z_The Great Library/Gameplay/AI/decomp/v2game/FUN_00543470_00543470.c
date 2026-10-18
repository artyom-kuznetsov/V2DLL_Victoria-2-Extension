// FUN_00543470 @ 00543470 body=[[00543470, 005434b9] [005434c0, 005435c1]]


int * FUN_00543470(int param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_10 [8];
  int *local_8;
  
  iVar2 = DAT_01258a3c;
  *param_2 = 0;
  FUN_008a8650(1);
  local_54 = *(undefined4 *)(param_1 + 0x1c);
  local_50 = *(undefined4 *)(param_1 + 0x20);
  iVar4 = 1;
  if (4 < (int)(*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) & 0xfffffffcU)) {
    do {
      lVar1 = *(longlong *)(*(int *)(param_1 + 0x8c0) + iVar4 * 8);
      local_8 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 0xc) + iVar4 * 4) + 0x140) +
                                   0x18))(local_10,local_5c);
      FUN_00401000(((float)((float10)lVar1 * (float10)3.0517578125e-05) + 0.0005) * 1000.0);
      iVar3 = FUN_00b31c00();
      iVar3 = __alldiv((longlong)*local_8 * (longlong)iVar3,1000,0);
      *param_2 = *param_2 + iVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2);
  }
  iVar4 = __alldiv((longlong)*param_2 * (longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0xb0),
                   1000,0);
  iVar2 = *(int *)(param_1 + 0x142c);
  *param_2 = iVar4;
  if (iVar2 != 0) {
    *param_2 = iVar4 + *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(param_1 + 0x142c) * 4) + 0xa60) + 0x3d0);
  }
  *param_2 = *param_2 + *(int *)(*(int *)(param_1 + 0xa60) + 0x3e0);
  return param_2;
}

