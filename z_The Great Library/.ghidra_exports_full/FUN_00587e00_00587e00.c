// FUN_00587e00 @ 00587e00 body=[[00587e00, 00587ed4]]


void FUN_00587e00(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 < 0x2f1) {
    if (param_2 == 0x2f0) {
      puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x44) = *puVar2;
      *(undefined4 *)(in_ECX + 0x48) = puVar2[1];
      return;
    }
    if (param_2 == 0x297) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x3c);
      if (iVar1 != 0) {
        return;
      }
      FUN_009a1140();
      return;
    }
    if (param_2 == 0x2e7) {
      FUN_009a1bb0(in_ECX + 0x40);
      return;
    }
  }
  else {
    if (param_2 == 0x943) {
      FUN_009a1bb0(in_ECX + 0x41);
      return;
    }
    if (param_2 == 0x9aa) {
      FUN_009a1bb0(in_ECX + 0x42);
      return;
    }
  }
  FUN_009a2620(param_1,param_2);
  return;
}

