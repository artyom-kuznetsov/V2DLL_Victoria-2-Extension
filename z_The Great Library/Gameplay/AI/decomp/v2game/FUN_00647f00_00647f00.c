// FUN_00647f00 @ 00647f00 body=[[00647f00, 00647f73] [00647f77, 00647fee]]


void FUN_00647f00(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  undefined4 uStack_38;
  undefined1 local_34 [16];
  uint local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  pvStack_14 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("ToolTip",7);
  local_c = 0;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x54) + 0x38))(local_34);
  puStack_10 = (undefined1 *)0xffffffff;
  *(undefined4 *)(in_ECX + 0x50) = uVar3;
  if (local_24 < 0x10) {
    (**(code **)(**(int **)(in_ECX + 0x50) + 0xb0))();
    (**(code **)(**(int **)(in_ECX + 0x50) + 0x74))();
    iVar1 = *(int *)(in_ECX + 0x50);
    iVar2 = *(int *)(iVar1 + 0x54);
    for (iVar4 = *(int *)(iVar2 + 0xd8);
        (iVar4 != *(int *)(iVar2 + 0xdc) &&
        ((*(int *)(iVar4 + 4) != iVar1 || (*(int *)(iVar4 + 8) != *(int *)(iVar1 + 0x58)))));
        iVar4 = iVar4 + 0xc) {
    }
    FUN_0099e5e0(iVar2 + 0xd8);
    (**(code **)(**(int **)(in_ECX + 0x50) + 0x38))();
    ExceptionList = pvStack_18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_38);
}

