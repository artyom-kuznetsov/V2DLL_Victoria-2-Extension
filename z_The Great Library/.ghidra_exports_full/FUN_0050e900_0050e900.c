// FUN_0050e900 @ 0050e900 body=[[0050e900, 0050e963] [0050e979, 0050e9d9]]


void FUN_0050e900(char param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  int unaff_ESI;
  undefined **local_60 [2];
  undefined4 uStack_58;
  uint uStack_44;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b46513;
  pvStack_14 = ExceptionList;
  if (param_1 == '\0') {
    ExceptionList = &pvStack_14;
    iVar2 = FUN_00aae9af(0x48);
    local_c = 1;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_005dce00(iVar2,*(undefined4 *)(unaff_ESI + 0x1c),*(undefined4 *)(unaff_ESI + 0x20)
                           ,in_ECX);
    }
    local_c = 0xffffffff;
    iVar2 = (**(code **)(**(int **)(unaff_ESI + 0xcdc) + 0x44))();
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
  }
  else {
    ExceptionList = &pvStack_14;
    piVar1 = (int *)FUN_005dce00(local_60,*(undefined4 *)(unaff_ESI + 0x1c),
                                 *(undefined4 *)(unaff_ESI + 0x20),in_ECX);
    local_c = 0;
    (**(code **)(*piVar1 + 0x18))();
    local_60[0] = CCommand::vftable;
    if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_58);
    }
  }
  ExceptionList = pvStack_14;
  return;
}

