// FUN_005486e0 @ 005486e0 body=[[005486e0, 005487e6]]


uint FUN_005486e0(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b463f8;
  pvStack_10 = ExceptionList;
  iVar5 = *(int *)(*param_1 + 4) + (int)param_1;
  ExceptionList = &pvStack_10;
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    ExceptionList = &pvStack_10;
    if (*(int *)(iVar5 + 0x3c) != 0) {
      ExceptionList = &pvStack_10;
      FUN_00989b80();
    }
    if ((param_2 == '\0') && ((*(uint *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) & 1) != 0)) {
      uVar2 = FUN_00446040(&param_2);
      local_8 = 0;
      iVar5 = FUN_00549710(uVar2);
      FUN_00445fc0();
      local_8 = 1;
      piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      if ((*(int *)piVar1[8] == 0) || (*(int *)piVar1[0xc] < 1)) {
        uVar3 = (**(code **)(*piVar1 + 0x18))();
      }
      else {
        uVar3 = (uint)**(byte **)piVar1[8];
      }
      while( true ) {
        if (uVar3 == 0xffffffff) {
          uVar3 = *(uint *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1);
          uVar4 = uVar3 | 1;
          if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
            uVar4 = uVar3 | 5;
          }
          FUN_00401120(uVar4,0);
          local_8 = 0xffffffff;
          uVar3 = FUN_00548818();
          return uVar3;
        }
        if ((*(byte *)(*(int *)(iVar5 + 0x10) + (uVar3 & 0xff) * 2) & 0x48) == 0) break;
        uVar3 = FUN_005474a0();
      }
      local_8 = 0xffffffff;
      uVar3 = FUN_00548818();
      return uVar3;
    }
    iVar5 = *(int *)(*param_1 + 4) + (int)param_1;
    if (*(int *)(iVar5 + 0xc) == 0) {
      ExceptionList = pvStack_10;
      return CONCAT31((int3)((uint)*param_1 >> 8),1);
    }
  }
  uVar3 = *(uint *)(iVar5 + 0xc) | 2;
  if (*(int *)(iVar5 + 0x38) == 0) {
    uVar3 = *(uint *)(iVar5 + 0xc) | 6;
  }
  uVar3 = FUN_00401120(uVar3,0);
  ExceptionList = pvStack_10;
  return uVar3 & 0xffffff00;
}

