// FUN_0047cf90 @ 0047cf90 body=[[0047cf90, 0047cffd]]


void FUN_0047cf90(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 == 0xb) {
    puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 8) = *puVar2;
    *(undefined4 *)(in_ECX + 0xc) = puVar2[1];
  }
  else if (param_2 == 0x344) {
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x10);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  return;
}

