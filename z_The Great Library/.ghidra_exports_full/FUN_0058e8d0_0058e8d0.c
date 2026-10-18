// FUN_0058e8d0 @ 0058e8d0 body=[[0058e8d0, 0058e969]]


void FUN_0058e8d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (param_2 == 0x2f0) {
    puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x3c) = *puVar2;
    *(undefined4 *)(in_ECX + 0x40) = puVar2[1];
  }
  else {
    if (param_2 != 0x635) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    FUN_00aaf0c5(param_1 + 0x22c);
    if (DAT_01258a98 != 0) {
      iVar1 = FUN_009c1d40();
      if (iVar1 != 0) {
        *(int *)(in_ECX + 0x44) = iVar1;
        return;
      }
    }
  }
  return;
}

