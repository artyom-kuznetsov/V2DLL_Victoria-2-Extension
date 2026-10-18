// FUN_0057c960 @ 0057c960 body=[[0057c960, 0057ca73]]


void FUN_0057c960(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 < 0x2f1) {
    if (param_2 == 0x2f0) {
      puVar3 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x4c) = *puVar3;
      *(undefined4 *)(in_ECX + 0x50) = puVar3[1];
      return;
    }
    if (param_2 == 0x1ca) {
      FUN_009a19f0(param_1,in_ECX + 0x44);
      return;
    }
    if (param_2 == 0x2a7) {
      param_2 = -1;
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_2);
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      iVar1 = param_2;
      iVar2 = FUN_004dad40();
      *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(*(int *)(iVar2 + 0xc) + iVar1 * 4);
      return;
    }
  }
  else {
    if (param_2 == 0x35b) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x40);
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      return;
    }
    if (param_2 == 0x85c) {
      FUN_009a1bb0(in_ECX + 0x54);
      return;
    }
  }
  FUN_009a2620(param_1,param_2);
  return;
}

