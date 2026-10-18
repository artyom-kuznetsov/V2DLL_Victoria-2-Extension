// FUN_00589ea0 @ 00589ea0 body=[[00589ea0, 00589f22]]


void FUN_00589ea0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 == 0x297) {
    iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x3c);
    if (iVar2 == 0) {
      FUN_009a1140();
    }
    return;
  }
  if (param_2 != 0x2f0) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x40) = *puVar1;
  *(undefined4 *)(in_ECX + 0x44) = puVar1[1];
  return;
}

