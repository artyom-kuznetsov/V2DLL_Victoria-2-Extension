// FUN_006a5860 @ 006a5860 body=[[006a5860, 006a591b] [006a591f, 006a5996]]


void FUN_006a5860(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint auStack_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  undefined1 auStack_88 [116];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b50d93;
  local_14 = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    piVar2 = *(int **)(DAT_012588e8 + 0xb24);
    ExceptionList = &local_14;
    iVar3 = (**(code **)(*piVar2 + 0x38))();
    iVar1 = *(int *)(*(int *)(iVar3 + 0x20d8) + iVar1 * 4);
    if (iVar1 != 0) {
      uStack_90 = 0xf;
      uStack_94 = 0;
      auStack_a4[0] = auStack_a4[0] & 0xffffff00;
      FUN_00409350("MessageMapText",0xe);
      uStack_c = 0;
      (**(code **)(*piVar2 + 0x40))();
      uVar4 = FUN_005c2ad0(auStack_a4);
      uStack_c = 0xffffffff;
      if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_a4[0]);
      }
      uStack_94 = 0;
      uStack_90 = 0xf;
      auStack_a4[0] = auStack_a4[0] & 0xffffff00;
      FUN_00595a50(auStack_88);
      uStack_c = 1;
      FUN_00408ed0(param_2,0,0xffffffff);
      puVar5 = auStack_88;
      (**(code **)(*piVar2 + 0x38))(puVar5);
      FUN_00642220(iVar1,uVar4,puVar5);
      FUN_009dcbd0();
    }
  }
  ExceptionList = local_14;
  return;
}

