// FUN_0088dea0 @ 0088dea0 body=[[0088dea0, 0088df04]]


void FUN_0088dea0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x1c) = 1;
    return;
  }
  if (param_1 != 0x3de) {
    if (param_1 != 0x70c) {
      puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,&stack0x00000008);
      *(undefined4 *)(in_ECX + 0x20) = *puVar2;
      iVar1 = puVar2[1];
      *(int *)(in_ECX + 0x24) = iVar1;
      if (iVar1 != 0) {
        return;
      }
    }
    *(undefined1 *)(in_ECX + 0x28) = 1;
    return;
  }
  *(undefined1 *)(in_ECX + 0x1d) = 1;
  return;
}

