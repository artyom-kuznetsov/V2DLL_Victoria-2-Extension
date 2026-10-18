// FUN_007b1520 @ 007b1520 body=[[007b1520, 007b158f] [007b1593, 007b15ee]]


void FUN_007b1520(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  uint uStack_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  void *pvStack_1c;
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
  FUN_00409350("unit_queue",10);
  local_c = 0;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x24) + 0x7c))(local_34);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  local_24 = 0xf;
  uStack_28 = 0;
  uStack_38 = uStack_38 & 0xffffff00;
  (**(code **)(*piVar1 + 0x5c))();
  puVar2 = (undefined4 *)(**(code **)(**(int **)(unaff_EDI + 0x20) + 0x58))(auStack_48);
  uStack_44 = *puVar2;
  FUN_007b1480(unaff_EDI,piVar1,*(int *)(*(int *)(DAT_012587e4 + 4) + puVar2[1] * 4) + 0x7b4);
  ExceptionList = pvStack_1c;
  return;
}

