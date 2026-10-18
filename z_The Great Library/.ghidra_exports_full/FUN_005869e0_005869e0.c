// FUN_005869e0 @ 005869e0 body=[[005869e0, 00586a7a]]


void FUN_005869e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 == 0x2f0) {
    puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x3c) = *puVar2;
    *(undefined4 *)(in_ECX + 0x40) = puVar2[1];
  }
  else {
    if (param_2 != 0x35b) {
      if (param_2 != 0x7ae) {
        FUN_009a2620(param_1,param_2);
        return;
      }
      FUN_009a1bb0(in_ECX + 0x48);
      return;
    }
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x44);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  return;
}

