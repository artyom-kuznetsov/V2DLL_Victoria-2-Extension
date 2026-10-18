// FUN_004a4550 @ 004a4550 body=[[004a4550, 004a4647] [004a464b, 004a465e]]


/* WARNING: Removing unreachable block (ram,0x004a4642) */
/* WARNING: Removing unreachable block (ram,0x004a4604) */
/* WARNING: Removing unreachable block (ram,0x004a4613) */
/* WARNING: Removing unreachable block (ram,0x004a462e) */
/* WARNING: Removing unreachable block (ram,0x004a4631) */
/* WARNING: Removing unreachable block (ram,0x004a4636) */

undefined4 FUN_004a4550(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4012b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004dada0();
    }
    FUN_004dc340(uVar2);
  }
  local_8 = 1;
  FUN_009beeb0(DAT_0125ce80 + 0x1c);
  for (uVar3 = *(uint *)(param_1 + 0x48);
      (*(uint *)(param_1 + 0x48) <= uVar3 && (uVar3 < *(uint *)(param_1 + 0x4c))); uVar3 = uVar3 + 4
      ) {
  }
  ExceptionList = local_10;
  return 0;
}

