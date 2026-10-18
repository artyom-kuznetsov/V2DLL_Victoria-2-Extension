// FUN_008a5940 @ 008a5940 body=[[008a5940, 008a59f1]]


void FUN_008a5940(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (param_2 == 0x1aa) {
    (**(code **)(*(int *)(in_ECX + 0xc) + 0xc))(param_1);
  }
  else {
    if (param_2 == 0x3b5) {
      FUN_00aaf0c5(param_1 + 0x22c);
      if (DAT_01258a98 != 0) {
        uVar2 = FUN_009c1d40();
        *(undefined4 *)(in_ECX + 8) = uVar2;
        return;
      }
      *(undefined4 *)(in_ECX + 8) = 0;
      return;
    }
    if (param_2 == 0x3c0) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x54);
      if (iVar1 == 0) {
        FUN_009a1140();
        return;
      }
    }
  }
  return;
}

