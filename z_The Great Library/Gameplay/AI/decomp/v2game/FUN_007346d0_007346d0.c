// FUN_007346d0 @ 007346d0 body=[[007346d0, 0073476c] [00734770, 0073479b] [007347a0, 00734885]]


int * FUN_007346d0(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  undefined4 auStack_9c [7];
  int iStack_80;
  int *piStack_7c;
  undefined1 *puStack_78;
  undefined *puStack_74;
  undefined *puStack_70;
  undefined1 *puStack_6c;
  int iStack_5c;
  int iStack_58;
  undefined4 *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  uint uStack_38;
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
  puStack_6c = (undefined1 *)0x7346f8;
  ExceptionList = &pvStack_14;
  FUN_00734c80();
  puStack_6c = (undefined1 *)0x734709;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x108) + 0x54) + 0x10))();
  puStack_6c = (undefined1 *)0x73470e;
  iVar3 = FUN_00b31c00();
  puStack_6c = (undefined1 *)0x4;
  puStack_70 = &DAT_00dfad80;
  uStack_20 = 0xf;
  uStack_24 = 0;
  auStack_34[0] = 0;
  puStack_74 = (undefined *)0x734736;
  FUN_00409350();
  uStack_c = 0;
  puStack_6c = auStack_34;
  puStack_70 = (undefined *)0x734749;
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x7c))();
  puStack_70 = (undefined *)0x734752;
  piVar4 = (int *)(**(code **)(*piVar4 + 0x2c))();
  puStack_50 = (undefined4 *)*piVar4;
  puStack_10 = (undefined1 *)0xffffffff;
  if (uStack_24 < 0x10) {
    uStack_24 = 0xf;
    uStack_28 = 0;
    uStack_38 = uStack_38 & 0xffffff00;
    if (puStack_50 != (undefined4 *)0x0) {
      iStack_58 = iVar3 * 0x18;
      do {
        puVar1 = (undefined4 *)puStack_50[2];
        piVar2 = (int *)*puStack_50;
        piVar4 = piVar2;
        puStack_50 = puVar1;
        if (-1 < iVar3) {
          iVar5 = *(int *)(in_ECX + 0xec) - *(int *)(in_ECX + 0xe8);
          piVar4 = (int *)(iVar5 * 0x2aaaaaab);
          if (iVar3 < iVar5 / 0x18) {
            iVar6 = *(int *)(in_ECX + 0xe8) + iStack_58;
            iVar5 = *(int *)(iVar6 + 0x10);
            iVar3 = iStack_5c;
            if (iVar5 < 0) {
              puStack_74 = auStack_40;
              puStack_78 = (undefined1 *)0x734848;
              puStack_74 = (undefined *)(**(code **)(**(int **)(in_ECX + 0x68) + 0x58))();
              puStack_78 = *(undefined1 **)(in_ECX + 0x68);
              iStack_80 = 0x734859;
              piStack_7c = piVar2;
              piVar4 = (int *)FUN_00730ec0();
            }
            else {
              piVar4 = *(int **)(*(int *)(iVar6 + 0xc) + 0x16c);
              puStack_70 = (undefined *)param_1;
              puStack_78 = auStack_48;
              piStack_7c = (int *)0x734808;
              piStack_7c = (int *)(**(code **)(**(int **)(in_ECX + 0x68) + 0x58))();
              iStack_80 = *(int *)(in_ECX + 0xd8) + iVar5 * 0x10;
              (**(code **)(*piVar4 + 0x18))(auStack_9c);
              auStack_9c[0] = *(undefined4 *)(in_ECX + 0x68);
              piVar4 = (int *)FUN_007308c0(piVar2);
              puStack_50 = auStack_9c;
            }
          }
        }
        iStack_58 = iStack_58 + 0x18;
        iVar3 = iVar3 + 1;
        iStack_5c = iVar3;
      } while (puStack_50 != (undefined4 *)0x0);
    }
    ExceptionList = pvStack_18;
    return piVar4;
  }
  puStack_70 = (undefined *)uStack_38;
                    /* WARNING: Subroutine does not return */
  puStack_74 = &UNK_0073476d;
  FUN_00aae91b();
}

