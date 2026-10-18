// FUN_008b24f0 @ 008b24f0 body=[[008b24f0, 008b2678]]


int FUN_008b24f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_40;
  undefined4 *local_28;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b58b88;
  pvStack_14 = ExceptionList;
  puVar9 = (undefined4 *)0x0;
  local_40 = 0;
  local_28 = (undefined4 *)0x0;
  local_20 = 0;
  local_c = 0;
  puVar10 = *(undefined4 **)(param_1 + 0x20);
  ExceptionList = &pvStack_14;
  ppvVar2 = &pvStack_14;
  if (puVar10 != (undefined4 *)0x0) {
    do {
      ExceptionList = ppvVar2;
      iVar7 = puVar10[1];
      uVar1 = *puVar10;
      puVar10 = (undefined4 *)puVar10[3];
      puVar6 = puVar9;
      if (((DAT_01258a98 != 0) && (iVar5 = FUN_009c1d40(), iVar5 != 0)) &&
         (cVar4 = (**(code **)(*(int *)(iVar5 + 0x30) + 0x18))(param_2), cVar4 != '\0')) {
        puVar6 = (undefined4 *)FUN_00aae9af(0x14);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = uVar1;
          puVar6[1] = iVar7;
          puVar6[2] = puVar9;
          puVar6[3] = 0;
          *(undefined1 *)(puVar6 + 4) = 0;
        }
        puVar3 = puVar6;
        if (local_20 != 0) {
          puVar9[3] = puVar6;
          puVar3 = local_28;
        }
        local_28 = puVar3;
        local_40 = local_40 + iVar7;
        local_20 = local_20 + 1;
      }
      puVar9 = puVar6;
      ppvVar2 = ExceptionList;
    } while (puVar10 != (undefined4 *)0x0);
    if (local_40 != 0) {
      iVar7 = FUN_009b7950(0x20,5);
      iVar5 = DAT_01258a98;
      iVar7 = iVar7 % local_40;
      while (local_28 != (undefined4 *)0x0) {
        iVar7 = iVar7 - local_28[1];
        local_28 = (undefined4 *)local_28[3];
        if (((iVar7 < 0) && (iVar5 != 0)) && (iVar8 = FUN_009c1d40(), iVar8 != 0)) {
          FUN_0068ff60();
          ExceptionList = pvStack_14;
          return iVar8;
        }
      }
    }
  }
  FUN_0068ff60();
  ExceptionList = pvStack_14;
  return 0;
}

