// FUN_00a37c20 @ 00a37c20 body=[[00a37c20, 00a37cd4] [00a37cd8, 00a37cfb]]


void FUN_00a37c20(int param_1,uint param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_10 = &LAB_00bbc108;
  *unaff_FS_OFFSET = &local_14;
  if (param_2 != param_4) {
    do {
      local_c = 0xffffffff;
      param_4 = param_4 - 1;
      if (param_2 == param_4) break;
      uVar2 = param_4;
      if (*(uint *)(param_3 + 8) <= param_4) {
        uVar2 = param_4 - *(uint *)(param_3 + 8);
      }
      uVar3 = param_2;
      if (*(uint *)(param_1 + 8) <= param_2) {
        uVar3 = param_2 - *(uint *)(param_1 + 8);
      }
      uVar1 = *(undefined4 *)(*(int *)(param_3 + 4) + uVar2 * 4);
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00408ed0(*(undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 4),0,0xffffffff);
      local_c = 0;
      FUN_00408ed0(uVar1,0,0xffffffff);
      FUN_00408ed0(local_34,0,0xffffffff);
      local_c = 0xffffffff;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_4);
  }
  *unaff_FS_OFFSET = local_14;
  return;
}

