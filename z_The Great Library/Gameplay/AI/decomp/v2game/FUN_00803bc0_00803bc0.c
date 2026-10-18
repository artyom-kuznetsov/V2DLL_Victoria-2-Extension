// FUN_00803bc0 @ 00803bc0 body=[[00803bc0, 00803bfc] [00803c00, 00803cb1]]


void FUN_00803bc0(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char local_10c [264];
  
  iVar1 = param_2 * 0x3c0 + *(int *)(param_1 + 0x19c);
  uVar2 = *(int *)(iVar1 + 0x3ac) + 4;
  uVar4 = 1;
  uVar3 = *(int *)(iVar1 + 0x3a8) + 4;
  if (1 < uVar2) {
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 * 2;
    } while (uVar4 < uVar2);
  }
  uVar4 = 1;
  if (1 < uVar3) {
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 * 2;
    } while (uVar4 < uVar3);
  }
  *(int *)(iVar1 + 0x3b0) = *(int *)(iVar1 + 0x3a0) + -2;
  *(int *)(iVar1 + 0x3b4) = *(int *)(iVar1 + 0x3a4) + -2;
  *(uint *)(iVar1 + 0x3b8) = uVar3;
  *(uint *)(iVar1 + 0x3bc) = uVar2;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  _sprintf(local_10c,"%squad_texture_%d.dds",param_3,param_2);
  if (((*(char *)(*(int *)(param_1 + 0x40) + 0x28) != '\0') || (local_10c[0] == '\0')) ||
     (iVar1 = PHYSFS_exists(local_10c), iVar1 == 0)) {
    FUN_00803210(param_1,local_10c,param_2);
  }
  FUN_00803cc0(param_1,param_2,param_4);
  return;
}

