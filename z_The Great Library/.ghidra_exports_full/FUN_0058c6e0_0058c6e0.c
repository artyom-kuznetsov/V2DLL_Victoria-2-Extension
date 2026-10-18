// FUN_0058c6e0 @ 0058c6e0 body=[[0058c6e0, 0058c7c6]]


void FUN_0058c6e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (param_2 < 0x456) {
    if (param_2 == 0x455) {
      FUN_009a1d40();
      return;
    }
    if (param_2 == 0x2f0) {
      puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x3c) = *puVar2;
      *(undefined4 *)(in_ECX + 0x40) = puVar2[1];
      return;
    }
    if (param_2 != 0x35b) {
LAB_0058c78b:
      FUN_009a2620(param_1,param_2);
      return;
    }
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x44);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  else {
    if (param_2 != 0x82c) {
      if (param_2 == 0x83c) {
        FUN_009a1bb0(in_ECX + 0x50);
        return;
      }
      goto LAB_0058c78b;
    }
    FUN_009a1bb0(in_ECX + 0x51);
  }
  return;
}

