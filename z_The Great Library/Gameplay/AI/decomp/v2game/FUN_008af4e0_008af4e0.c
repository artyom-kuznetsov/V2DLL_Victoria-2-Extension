// FUN_008af4e0 @ 008af4e0 body=[[008af4e0, 008af693] [008af697, 008af6c1] [008af6c5, 008af6e9] [008af6ed, 008af766] [008af76a, 008af792] [008af796, 008af7cd] [008af7d1, 008af7f1] [008af7f5, 008af80d]]


/* WARNING: Removing unreachable block (ram,0x008af789) */
/* WARNING: Removing unreachable block (ram,0x008af6e0) */

undefined1 * FUN_008af4e0(uint *param_1,undefined1 *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar6;
  int *piVar7;
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 ******appppppuStack_50 [4];
  int iStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined4 *******pppppppuVar5;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4aa5e;
  pvStack_14 = ExceptionList;
  piVar7 = (int *)0x0;
  ExceptionList = &pvStack_14;
  for (puVar6 = (undefined4 *)*param_1;
      ((undefined4 *)*param_1 <= puVar6 && (puVar6 < (undefined4 *)param_1[1])); puVar6 = puVar6 + 1
      ) {
    piVar1 = (int *)*puVar6;
    cVar2 = (**(code **)(*piVar1 + 0x18))();
    if (cVar2 != '\0') {
      piVar7 = piVar1;
    }
  }
  if (piVar7 == (int *)0x0) {
    if ((param_1[1] - (int)*param_1 & 0xfffffffc) == 0) {
      *(undefined4 *)(param_2 + 0x14) = 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *param_2 = 0;
      FUN_00409350();
      ExceptionList = pvStack_14;
      return param_2;
    }
    piVar7 = *(int **)*param_1;
  }
  uStack_74 = 0xf;
  uStack_78 = 0;
  auStack_88[0] = auStack_88[0] & 0xffffff00;
  uStack_c = 0;
  (**(code **)(*piVar7 + 0x2c))(appppppuStack_50,param_3,0);
  uStack_c._0_1_ = 1;
  if (7 < iStack_40) {
    FUN_00448740();
    FUN_00448740();
    FUN_00409350();
    uStack_c._0_1_ = 2;
    FUN_00988a50(auStack_6c);
    uStack_c._0_1_ = 3;
    uVar3 = FUN_00988f20();
    uStack_c._0_1_ = 4;
    FUN_00448aa0(uVar3);
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_20 = 0xf;
    uStack_24 = 0;
    uStack_34 = uStack_34 & 0xffffff00;
    if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_c._0_1_ = 1;
    uStack_58 = 0xf;
    uStack_5c = 0;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
    pppppppuVar5 = (undefined4 *******)appppppuStack_50[0];
    if (uStack_3c < 0x10) {
      pppppppuVar5 = appppppuStack_50;
    }
    pcVar4 = (char *)((int)pppppppuVar5 + 7);
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    FUN_00409350();
    uStack_c._0_1_ = 5;
    uVar3 = FUN_00988fa0();
    uStack_c._0_1_ = 6;
    FUN_00448aa0(uVar3);
    if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_58 = 0xf;
    uStack_5c = 0;
    auStack_6c[0] = auStack_6c[0] & 0xffffff00;
  }
  uStack_c._0_1_ = 1;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00408ed0(auStack_88);
  if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_3c = 0xf;
  iStack_40 = 0;
  appppppuStack_50[0] = (undefined4 ******)((uint)appppppuStack_50[0] & 0xffffff00);
  if (uStack_74 < 0x10) {
    ExceptionList = pvStack_14;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

