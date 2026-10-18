// FUN_00796ac0 @ 00796ac0 body=[[00796ac0, 00796be8] [00796bec, 00796bfd]]


void FUN_00796ac0(void)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  undefined1 local_50 [16];
  uint local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 local_34 [16];
  uint local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  pvStack_14 = ExceptionList;
  uVar1 = *(undefined4 *)(in_ECX + 0x30);
  iVar6 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x2c) < 0x1269) {
    iVar6 = DAT_01258a98;
  }
  if (iVar6 == 0) {
    uVar4 = 0;
    ExceptionList = &pvStack_14;
  }
  else {
    ExceptionList = &pvStack_14;
    uVar4 = FUN_009c1d40();
  }
  *(undefined4 *)(in_ECX + 0x28) = uVar4;
  FUN_009c16d0(*(undefined4 *)(in_ECX + 0x54),*(undefined4 *)(in_ECX + 0x58));
  cVar3 = FUN_005cbc60();
  if (cVar3 == '\0') {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = 0;
    FUN_00409350("leader_button",0xd);
    local_c = 0;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_50);
    (**(code **)(*piVar5 + 0xbc))();
    uVar2 = local_40;
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = 0;
    FUN_00409350("leader_button",0xd);
    local_c = 1;
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_34);
    (**(code **)(*piVar5 + 0xb8))();
    uVar1 = uStack_38;
    uVar2 = local_24;
  }
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar1);
  }
  ExceptionList = pvStack_18;
  return;
}

