// FUN_005883b0 @ 005883b0 body=[[005883b0, 0058845d]]


void FUN_005883b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  if (param_2 == 0x6a) {
    puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_14,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x48) = *puVar2;
    *(undefined4 *)(in_ECX + 0x4c) = puVar2[1];
    return;
  }
  if (param_2 != 0x2f0) {
    if (param_2 != 0x63b) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    iVar1 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(*(int *)(DAT_01258a48 + 0x18) + iVar1 * 4);
    return;
  }
  puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x3c) = *puVar2;
  *(undefined4 *)(in_ECX + 0x40) = puVar2[1];
  return;
}

