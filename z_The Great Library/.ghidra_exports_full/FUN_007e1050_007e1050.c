// FUN_007e1050 @ 007e1050 body=[[007e1050, 007e10bc] [007e10c0, 007e111e] [007e1122, 007e1187]]


void FUN_007e1050(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_38;
  uint local_34;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  puVar1 = (uint *)(param_1 + 0x6bd80);
  ExceptionList = &local_14;
  FUN_00992240("gfx/loadingscreens",puVar1,&DAT_00e19b2c);
  FUN_0068ea30((int)(*(int *)(param_1 + 0x6bd84) - *puVar1) / 0x1c);
  uVar4 = *puVar1;
  local_38 = 0;
  for (; (*puVar1 <= uVar4 && (uVar4 < *(uint *)(param_1 + 0x6bd84))); uVar4 = uVar4 + 0x1c) {
    FUN_00988fa0(uVar4);
    local_c = 0;
    iVar2 = FUN_0063f0c0(*(undefined4 *)(param_1 + 100));
    local_c = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
    local_20 = 0xf;
    local_34 = local_34 & 0xffffff00;
    if (iVar2 != 0) {
      *(int *)(local_38 + *(int *)(param_1 + 0x6bd90)) = iVar2;
      local_38 = local_38 + 4;
    }
  }
  uVar3 = FUN_0063f0c0(*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(param_1 + 0x6bda0) = uVar3;
  ExceptionList = local_14;
  return;
}

