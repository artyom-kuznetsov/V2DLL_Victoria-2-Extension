// FUN_00a2f980 @ 00a2f980 body=[[00a2f980, 00a2fa4f] [00a2fa53, 00a2faa8] [00a2faac, 00a2fabf]]


/* WARNING: Removing unreachable block (ram,0x00a2fa46) */

void FUN_00a2f980(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b63450;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 100);
  *(int *)(in_ECX + 0x44) = param_1 + 0x158;
  uVar2 = FUN_009bcbf0(in_ECX + 0x94,1);
  *(undefined4 *)(in_ECX + 0xb0) = uVar2;
  FUN_009bcbf0(in_ECX + 0x100,1);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("ArrowEffect",0xb);
  local_c = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_c._0_1_ = 1;
  cVar1 = FUN_00416db0();
  local_c = (uint)local_c._1_3_ << 8;
  if (cVar1 == '\0') {
    iVar3 = FUN_009be510(*(int *)(in_ECX + 0xec) + 0x6bcfc,in_ECX + 0x120,local_34,
                         *(undefined4 *)(*(int *)(in_ECX + 0xec) + 100));
    *(int *)(in_ECX + 0x140) = iVar3;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xec) + 0x6bd00) + -4 + iVar3 * 4);
    }
    *(undefined4 *)(in_ECX + 0x13c) = uVar2;
  }
  if (local_20 < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

