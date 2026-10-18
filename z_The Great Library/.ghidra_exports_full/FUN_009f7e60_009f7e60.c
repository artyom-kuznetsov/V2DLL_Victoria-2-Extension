// FUN_009f7e60 @ 009f7e60 body=[[009f7e60, 009f7f03] [009f7f07, 009f7f81] [009f7f85, 009f7f93]]


void FUN_009f7e60(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_ESI;
  undefined4 local_4c;
  uint local_38;
  undefined4 local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b63410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = FUN_009f7c00(*(undefined2 *)(unaff_ESI + 0x3a),*(undefined2 *)(unaff_ESI + 0x38));
  iVar4 = FUN_009f7c00(*(undefined2 *)(unaff_ESI + 0x70),*(undefined2 *)(unaff_ESI + 0x6e));
  if (iVar3 <= iVar4) {
    uVar1 = *(undefined2 *)(unaff_ESI + 0x6e);
    uVar2 = *(undefined2 *)(unaff_ESI + 0x70);
    FUN_009f7c00(*(undefined2 *)(unaff_ESI + 0x3a),*(undefined2 *)(unaff_ESI + 0x38));
    uVar5 = FUN_009f7c00(uVar2,uVar1);
    uVar5 = FUN_009895f0(uVar5);
    local_8 = 0;
    FUN_00408ed0(uVar5,0,0xffffffff);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30);
    }
  }
  iVar3 = FUN_009f7c00(*(undefined2 *)(unaff_ESI + 0x3a),*(undefined2 *)(unaff_ESI + 0x38));
  iVar4 = FUN_009f7c00(*(undefined2 *)(unaff_ESI + 0x70),*(undefined2 *)(unaff_ESI + 0x6e));
  if (iVar4 < iVar3) {
    uVar5 = FUN_009f7c00(*(undefined2 *)(unaff_ESI + 0x3a),*(undefined2 *)(unaff_ESI + 0x38));
    FUN_009f7c00(*(undefined2 *)(unaff_ESI + 0x70),*(undefined2 *)(unaff_ESI + 0x6e));
    uVar5 = FUN_009895f0(uVar5);
    local_8 = 1;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c);
    }
  }
  ExceptionList = local_10;
  return;
}

