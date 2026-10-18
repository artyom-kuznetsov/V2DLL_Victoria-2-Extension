// FUN_0057cf30 @ 0057cf30 body=[[0057cf30, 0057cfce]]


void FUN_0057cf30(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 == 0x1ca) {
    FUN_009a19f0(param_1,in_ECX + 0x40);
  }
  else {
    if (param_2 == 0x2f0) {
      puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x48) = *puVar2;
      *(undefined4 *)(in_ECX + 0x4c) = puVar2[1];
      return;
    }
    if (param_2 != 0x35b) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x3c);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  return;
}

