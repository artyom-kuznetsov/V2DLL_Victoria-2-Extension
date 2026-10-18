// FUN_00589af0 @ 00589af0 body=[[00589af0, 00589b7d]]


void FUN_00589af0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined1 local_c [8];
  
  if (param_2 == 0x297) {
    iVar2 = in_ECX + 0x3c;
  }
  else {
    if (param_2 == 0x2f0) {
      puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x40) = *puVar1;
      *(undefined4 *)(in_ECX + 0x44) = puVar1[1];
      return;
    }
    if (param_2 != 0x344) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    iVar2 = in_ECX + 0x48;
  }
  iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",iVar2);
  if (iVar2 == 0) {
    FUN_009a1140();
  }
  return;
}

