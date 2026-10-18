// FUN_005471e0 @ 005471e0 body=[[005471e0, 0054732c] [00547397, 0054740b]]


int * FUN_005471e0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ce1a;
  local_10 = ExceptionList;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_1c = 0;
  bVar5 = false;
  ExceptionList = &local_10;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00989b80();
  }
  local_8 = 1;
  uVar7 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) && (param_2 != (int *)0x0)) {
    uVar8 = 0xffffffff;
    while( true ) {
      local_8 = 2;
      if (uVar8 == 0xffffffff) {
        if ((*(int *)param_2[8] == 0) || (*(int *)param_2[0xc] < 1)) {
          uVar8 = (**(code **)(*param_2 + 0x18))();
        }
        else {
          uVar8 = (uint)**(byte **)param_2[8];
        }
      }
      else {
        uVar8 = FUN_005474a0();
      }
      local_8 = 1;
      uVar7 = local_1c;
      if (uVar8 == 0xffffffff) goto LAB_005472fe;
      local_8._0_1_ = 4;
      local_8._1_3_ = 0;
      piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      if ((*(int *)piVar1[9] == 0) || (piVar2 = (int *)piVar1[0xd], *piVar2 < 1)) {
        uVar7 = (**(code **)(*piVar1 + 0xc))(uVar8 & 0xff);
      }
      else {
        *piVar2 = *piVar2 + -1;
        puVar3 = *(undefined1 **)piVar1[9];
        *(undefined1 **)piVar1[9] = puVar3 + 1;
        *puVar3 = (char)uVar8;
        uVar7 = uVar8 & 0xff;
      }
      if (uVar7 == 0xffffffff) break;
      bVar5 = true;
    }
    uVar7 = 4;
    local_8 = CONCAT31(local_8._1_3_,1);
  }
LAB_005472fe:
  iVar4 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar4 + 0x20 + (int)param_1) = 0;
  *(undefined4 *)(iVar4 + 0x24 + (int)param_1) = 0;
  if (param_2 == (int *)0x0) {
    uVar7 = 4;
  }
  else if (!bVar5) {
    uVar7 = uVar7 | 2;
  }
  if (uVar7 != 0) {
    uVar7 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | uVar7;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    FUN_00401120(uVar7,0);
  }
  local_8 = 6;
  cVar6 = thunk_FUN_00ab4d81();
  if (cVar6 == '\0') {
    FUN_00409590();
  }
  local_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

