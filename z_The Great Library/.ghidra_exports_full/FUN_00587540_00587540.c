// FUN_00587540 @ 00587540 body=[[00587540, 005875e3]]


void FUN_00587540(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (param_2 == 0x87) {
    FUN_009a1d40();
  }
  else {
    if (param_2 == 0x2f0) {
      puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x4c) = *puVar2;
      *(undefined4 *)(in_ECX + 0x50) = puVar2[1];
      return;
    }
    if (param_2 != 0x921) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x48);
    if (iVar1 == 0) {
      FUN_009a1140();
      return;
    }
  }
  return;
}

