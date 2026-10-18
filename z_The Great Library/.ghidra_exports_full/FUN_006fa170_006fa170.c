// FUN_006fa170 @ 006fa170 body=[[006fa170, 006fa26e] [006fa272, 006fa281]]


void FUN_006fa170(void)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int unaff_ESI;
  undefined4 uStack_54;
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
  ExceptionList = &pvStack_14;
  if ((*(int *)(unaff_ESI + 0xd4) == 0) ||
     (ExceptionList = &pvStack_14, cVar2 = FUN_0052c9b0(*(undefined4 *)(unaff_ESI + 0xd0)),
     cVar2 == '\0')) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = 0;
    FUN_00409350("Build",5);
    local_c = 1;
    piVar3 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x28) + 0x34))(local_34);
    (**(code **)(*piVar3 + 0xbc))();
    uStack_54 = uStack_38;
    uVar1 = local_24;
  }
  else {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = 0;
    FUN_00409350("Build",5);
    local_c = 0;
    piVar3 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x28) + 0x34))(local_50);
    (**(code **)(*piVar3 + 0xb8))();
    uVar1 = local_40;
  }
  if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_54);
  }
  ExceptionList = pvStack_18;
  return;
}

