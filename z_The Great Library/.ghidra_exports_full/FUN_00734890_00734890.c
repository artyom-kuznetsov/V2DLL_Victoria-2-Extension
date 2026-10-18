// FUN_00734890 @ 00734890 body=[[00734890, 0073492c] [00734930, 0073495b] [00734960, 00734a60]]


void FUN_00734890(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iStack_54;
  undefined4 uStack_38;
  undefined1 auStack_34 [12];
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00734d40();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x10c) + 0x54) + 0x10))();
  iVar1 = FUN_00b31c00();
  uStack_20 = 0xf;
  uStack_24 = 0;
  auStack_34[0] = 0;
  FUN_00409350("queue",5);
  uStack_c = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x7c))(auStack_34);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))();
  iVar5 = *piVar2;
  puStack_10 = (undefined1 *)0xffffffff;
  if (uStack_24 < 0x10) {
    uStack_24 = 0xf;
    uStack_28 = 0;
    if (iVar5 != 0) {
      iVar7 = iVar1 * 0x28;
      do {
        iVar5 = *(int *)(iVar5 + 8);
        if ((-1 < iVar1) && (iVar1 < (*(int *)(in_ECX + 0xfc) - *(int *)(in_ECX + 0xf8)) / 0x28)) {
          puVar6 = (undefined4 *)(*(int *)(in_ECX + 0xf8) + iVar7);
          iVar1 = DAT_01258a94;
          if ((uint)puVar6[1] < 0x1269) {
            iVar1 = DAT_01258a98;
          }
          if (iVar1 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_009c1d40();
          }
          *puVar6 = uVar3;
          FUN_00732a10(uVar3,*(int *)(in_ECX + 0x6c) == 0);
          piVar2 = (int *)(*(int *)(in_ECX + 0xf8) + iVar7);
          iVar1 = DAT_01258a94;
          if ((uint)piVar2[1] < 0x1269) {
            iVar1 = DAT_01258a98;
          }
          if (iVar1 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_009c1d40();
          }
          *piVar2 = iVar4;
          iVar1 = iStack_54;
          if (iVar4 == 0) {
            *(undefined1 *)(in_ECX + 0x160) = 1;
          }
        }
        iVar7 = iVar7 + 0x28;
        iVar1 = iVar1 + 1;
        iStack_54 = iVar1;
      } while (iVar5 != 0);
    }
    ExceptionList = pvStack_18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_38);
}

