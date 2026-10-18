// FUN_00a84180 @ 00a84180 body=[[00a84180, 00a84235] [00a84239, 00a84264]]


int FUN_00a84180(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_b0 [16];
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_54 [17];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d558;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00a84480(in_ECX);
  if (iVar2 != *(int *)(param_1 + 4)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') {
      ExceptionList = local_10;
      return iVar2 + 0x28;
    }
  }
  FUN_00408b00();
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  FUN_00408ed0(in_ECX,0,0xffffffff);
  puVar5 = local_b0;
  puVar6 = local_54;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_8 = 0;
  uVar3 = FUN_00a851b0();
  FUN_00a84ce0(iVar2,uVar3);
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70);
  }
  ExceptionList = local_10;
  return iVar2 + 0x28;
}

