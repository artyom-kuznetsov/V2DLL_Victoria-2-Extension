// FUN_008c85a0 @ 008c85a0 body=[[008c85a0, 008c862b]]


void FUN_008c85a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 == 0x344) {
    uVar2 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x24) = uVar2;
  }
  else if (param_2 == 0x404) {
    if (*(int *)(param_1 + 0x228) == 0x405) {
      *(undefined1 *)(in_ECX + 0x18) = 1;
      return;
    }
    if (*(int *)(param_1 + 0x228) == 0x3de) {
      *(undefined1 *)(in_ECX + 0x19) = 1;
      return;
    }
    puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x1c) = *puVar1;
    *(undefined4 *)(in_ECX + 0x20) = puVar1[1];
    return;
  }
  return;
}

