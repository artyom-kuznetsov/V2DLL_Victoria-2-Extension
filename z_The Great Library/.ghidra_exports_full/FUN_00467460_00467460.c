// FUN_00467460 @ 00467460 body=[[00467460, 0046780f]]


bool FUN_00467460(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 in_ECX;
  int iVar7;
  bool bVar8;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46c9a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar4 = FUN_00467350(in_ECX,unaff_EDI,param_1,1);
  if (((cVar4 != '\0') || (cVar4 = FUN_00467350(in_ECX,unaff_EDI,param_1,2), cVar4 != '\0')) ||
     (cVar4 = FUN_00467350(in_ECX,unaff_EDI,param_1,3), cVar4 != '\0')) {
    ExceptionList = local_10;
    return *(int *)**(undefined4 **)(unaff_EDI + 0x34) == *(int *)**(undefined4 **)(param_1 + 0x34);
  }
  cVar4 = FUN_00467350(in_ECX,unaff_EDI,param_1,5);
  if (cVar4 != '\0') {
    FUN_00464d90(param_1);
    local_8 = 0;
    FUN_00464d90(unaff_EDI);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar5 = FUN_00416db0();
    FUN_00408ad0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return (bool)uVar5;
  }
  cVar4 = FUN_00467350(in_ECX,unaff_EDI,param_1,6);
  if (cVar4 != '\0') {
    FUN_00464d90(param_1);
    local_8 = 2;
    FUN_00464d90(unaff_EDI);
    local_8 = CONCAT31(local_8._1_3_,3);
    uVar5 = FUN_00416db0();
    FUN_00408ad0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return (bool)uVar5;
  }
  cVar4 = FUN_00467350(in_ECX,unaff_EDI,param_1,9);
  if (cVar4 != '\0') {
    ExceptionList = local_10;
    return *(int *)(**(int **)(unaff_EDI + 0x24) + 4) == *(int *)(**(int **)(param_1 + 0x24) + 4);
  }
  cVar4 = FUN_00467350(in_ECX,unaff_EDI,param_1,0x10);
  if (cVar4 != '\0') {
    iVar6 = **(int **)(unaff_EDI + 0x24);
    iVar7 = **(int **)(param_1 + 0x24);
LAB_004675ee:
    if ((*(int *)(iVar6 + 4) == *(int *)(iVar7 + 4)) &&
       (*(int *)(iVar6 + 0xc) == *(int *)(iVar7 + 0xc))) {
      ExceptionList = local_10;
      return true;
    }
    ExceptionList = local_10;
    return false;
  }
  cVar4 = FUN_00467350(in_ECX,unaff_EDI,param_1,0x11);
  if (cVar4 != '\0') {
    iVar6 = **(int **)(unaff_EDI + 0x24);
    iVar7 = **(int **)(param_1 + 0x24);
    goto LAB_004675ee;
  }
  cVar4 = FUN_00467350(in_ECX,unaff_EDI,param_1,0xf);
  if (cVar4 != '\0') {
    FUN_00464d90(param_1);
    local_8 = 4;
    FUN_00464d90(unaff_EDI);
    local_8 = CONCAT31(local_8._1_3_,5);
    uVar5 = FUN_00416db0();
    FUN_00408ad0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return (bool)uVar5;
  }
  cVar4 = FUN_00467350(in_ECX,unaff_EDI,param_1,0x13);
  if (cVar4 == '\0') {
    cVar4 = FUN_00467350(in_ECX,unaff_EDI,param_1,0x14);
    if (cVar4 == '\0') {
      ExceptionList = local_10;
      return false;
    }
    FUN_00464d90(param_1);
    local_8 = 10;
    FUN_00464d90(unaff_EDI);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    uVar5 = FUN_00416db0();
    FUN_00408ad0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return (bool)uVar5;
  }
  iVar6 = FUN_00465180(unaff_EDI);
  local_8 = 6;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  if (*(int *)(iVar6 + 0x10) != 0) {
    iVar6 = FUN_00465180(param_1);
    local_8 = 7;
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
    if (*(int *)(iVar6 + 0x10) != 0) {
      FUN_00465180(param_1);
      local_8 = 8;
      FUN_00465180(unaff_EDI);
      local_8 = 9;
      bVar3 = true;
      bVar2 = true;
      bVar1 = true;
      cVar4 = FUN_00416db0();
      if (cVar4 != '\0') {
        bVar8 = true;
        goto LAB_00467738;
      }
    }
  }
  bVar8 = false;
LAB_00467738:
  if (bVar1) {
    FUN_00408ad0();
  }
  if (bVar2) {
    FUN_00408ad0();
  }
  if (bVar3) {
    FUN_00408ad0();
  }
  FUN_00408ad0();
  ExceptionList = local_10;
  return bVar8;
}

