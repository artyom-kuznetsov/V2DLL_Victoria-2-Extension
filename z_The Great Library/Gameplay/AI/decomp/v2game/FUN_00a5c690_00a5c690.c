// FUN_00a5c690 @ 00a5c690 body=[[00a5c690, 00a5c81d]]


void FUN_00a5c690(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6342b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)FUN_00aae9af(0x24);
  local_8 = 0;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14[6] = 0xf;
    local_14[5] = 0;
    *(undefined1 *)(local_14 + 1) = 0;
    local_24 = local_14;
    FUN_00408ed0(param_2,0,0xffffffff);
  }
  local_8 = 0xffffffff;
  *local_14 = param_3;
  piVar6 = (int *)(param_1 + 0x14);
  *(undefined1 *)(local_14 + 8) = 0;
  piVar9 = (int *)*piVar6;
  local_24 = local_14;
  if (piVar9 != (int *)0x0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    local_18 = *(undefined4 *)(param_2 + 0x14);
    local_1c = uVar1;
    do {
      local_20 = *piVar9;
      uVar2 = *(uint *)(local_20 + 0x14);
      uVar10 = uVar1;
      if (local_1c < uVar1) {
        uVar10 = local_1c;
      }
      uVar7 = uVar10;
      if (uVar2 <= uVar10) {
        uVar7 = uVar2;
      }
      uVar7 = FUN_00414bd0(uVar7);
      if (uVar7 == 0) {
        if (uVar10 < uVar2) goto LAB_00a5c779;
        uVar7 = (uint)(uVar10 != uVar2);
      }
      if ((int)uVar7 < 0) {
LAB_00a5c779:
        for (piVar9 = (int *)*piVar6; (piVar9 != (int *)0x0 && (*piVar9 != local_20));
            piVar9 = (int *)piVar9[2]) {
        }
        FUN_009b3c80(piVar6,&local_24,piVar9);
        ExceptionList = local_10;
        return;
      }
      piVar9 = (int *)piVar9[2];
    } while (piVar9 != (int *)0x0);
  }
  puVar5 = local_14;
  iVar3 = *(int *)(param_1 + 0x18);
  puVar8 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *puVar8 = puVar5;
    puVar8[1] = iVar3;
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  *(undefined4 **)(param_1 + 0x18) = puVar8;
  *(int *)(param_1 + 0x1c) = iVar4 + 1;
  if (iVar4 == 0) {
    *piVar6 = (int)puVar8;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 **)(iVar3 + 8) = puVar8;
  ExceptionList = local_10;
  return;
}

