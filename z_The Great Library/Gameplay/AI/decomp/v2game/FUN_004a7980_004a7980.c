// FUN_004a7980 @ 004a7980 body=[[004a7980, 004a7af9]]


void FUN_004a7980(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (param_2 < 0x35c) {
    if (param_2 == 0x35b) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x78);
      if (iVar1 != 0) {
        return;
      }
      FUN_009a1140();
      return;
    }
    if (param_2 < 0x298) {
      if (param_2 == 0x297) {
        param_2 = 0;
        iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_2);
        if (iVar1 == 0) {
          FUN_009a1140();
        }
        *(undefined4 *)(in_ECX + 0x74) =
             *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + param_2 * 4);
        return;
      }
      if (param_2 == 0xd9) {
        param_2 = 0;
        FUN_009a1c10();
        *(int *)(in_ECX + 0x7c) = param_2;
        return;
      }
      if (param_2 == 0x1d4) {
        FUN_009a1c10();
        return;
      }
    }
    else if (param_2 == 0x2a7) {
      param_2 = 0;
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_2);
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      iVar1 = param_2;
      iVar2 = FUN_004dad40();
      *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(*(int *)(iVar2 + 0xc) + iVar1 * 4);
      return;
    }
  }
  else {
    if (param_2 == 0x4f0) {
      FUN_009a1d40();
      return;
    }
    if (param_2 == 0xa7b) {
      FUN_009a1bb0(in_ECX + 0x80);
      return;
    }
    if (param_2 == 0xa91) {
      (**(code **)(*(int *)(in_ECX + 8) + 0xc))(param_1);
      return;
    }
  }
  FUN_009a0f40();
  return;
}

