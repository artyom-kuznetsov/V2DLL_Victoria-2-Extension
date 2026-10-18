// FUN_00a213f0 @ 00a213f0 body=[[00a213f0, 00a21473] [00a21477, 00a2149d] [00a214a1, 00a2150a] [00a2150e, 00a2151f]]


void FUN_00a213f0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34 [5];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b635a8;
  local_14 = ExceptionList;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350(&DAT_00e17f6c,4);
  local_c = 0;
  FUN_00988fa0(in_ECX + 0x78);
  local_c._0_1_ = 1;
  FUN_00988f20(local_6c);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  local_c = CONCAT31(local_c._1_3_,4);
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  uVar1 = FUN_009bcbf0(local_34,1);
  *(uint *)(in_ECX + 0x49c) = uVar1;
  if (uVar1 < 10000) {
    uVar3 = *(undefined4 *)(uVar1 * 0x2c + 0x17c + *(int *)(in_ECX + 0x2c));
    uVar2 = *(undefined4 *)(uVar1 * 0x2c + 0x180 + *(int *)(in_ECX + 0x2c));
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
  }
  *(undefined4 *)(in_ECX + 0x4a0) = uVar3;
  *(undefined4 *)(in_ECX + 0x4a4) = uVar2;
  FUN_00a21520(in_ECX);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_14;
  return;
}

