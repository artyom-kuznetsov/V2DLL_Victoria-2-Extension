// FUN_009b1190 @ 009b1190 body=[[009b1190, 009b1458] [009b1473, 009b154c] [009b1550, 009b15b8]]


/* WARNING: Removing unreachable block (ram,0x009b13b0) */
/* WARNING: Removing unreachable block (ram,0x009b13b7) */
/* WARNING: Removing unreachable block (ram,0x009b13c0) */
/* WARNING: Removing unreachable block (ram,0x009b13c4) */
/* WARNING: Removing unreachable block (ram,0x009b13cb) */
/* WARNING: Removing unreachable block (ram,0x009b13f0) */
/* WARNING: Removing unreachable block (ram,0x009b13dc) */
/* WARNING: Removing unreachable block (ram,0x009b13f2) */
/* WARNING: Removing unreachable block (ram,0x009b1407) */
/* WARNING: Removing unreachable block (ram,0x009b1402) */
/* WARNING: Removing unreachable block (ram,0x009b140a) */
/* WARNING: Removing unreachable block (ram,0x009b1377) */
/* WARNING: Removing unreachable block (ram,0x009b1380) */
/* WARNING: Removing unreachable block (ram,0x009b138d) */
/* WARNING: Removing unreachable block (ram,0x009b1384) */
/* WARNING: Removing unreachable block (ram,0x009b138b) */
/* WARNING: Removing unreachable block (ram,0x009b144d) */

void FUN_009b1190(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int in_ECX;
  float10 fVar8;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49f3e;
  local_10 = ExceptionList;
  if (*(char *)(in_ECX + 0x1bc) == '\0') {
    puVar3 = *(undefined4 **)(in_ECX + 4);
    ExceptionList = &local_10;
    if (puVar3 != (undefined4 *)0x0) {
      do {
        (**(code **)(*(int *)*puVar3 + 4))(0xb);
        puVar3 = (undefined4 *)puVar3[2];
      } while (puVar3 != (undefined4 *)0x0);
      ExceptionList = local_10;
      return;
    }
  }
  else if (*(char *)(in_ECX + 0x3c) == '\0') {
    ExceptionList = &local_10;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    FUN_009a63f0();
    if (*(undefined4 **)(in_ECX + 0x38) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x38))(1);
    }
    iVar7 = FUN_00aae9af(0x10c);
    local_8 = 3;
    if (iVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00a63830(iVar7,in_ECX,*(undefined4 *)(in_ECX + 0x40),
                           *(undefined4 *)(in_ECX + 0xac),*(undefined4 *)(in_ECX + 0xb4),
                           *(undefined4 *)(in_ECX + 0xb8));
    }
    piVar6 = DAT_00f20c18;
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x38) = uVar5;
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)FUN_00aae9af(4);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
        DAT_00f20c18 = piVar6;
      }
      else {
        *piVar6 = (int)&PTR_FUN_00e38b28;
        DAT_00f20c18 = piVar6;
      }
    }
    piVar6 = (int *)(**(code **)(*piVar6 + 4))();
    local_8 = 4;
    (**(code **)(*piVar6 + 4))();
    do {
      fVar8 = (float10)(**(code **)(*piVar6 + 0x14))();
      if ((float10)2.0 < fVar8) {
        *(undefined4 *)(in_ECX + 0x2c) = 3;
        FUN_009ae5d0();
        break;
      }
      cVar2 = (**(code **)(**(int **)(in_ECX + 0x38) + 8))(1,0);
    } while (cVar2 == '\0');
    local_8 = 0xffffffff;
    (**(code **)*piVar6)(1);
  }
  else {
    ExceptionList = &local_10;
    for (puVar3 = *(undefined4 **)(in_ECX + 4); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[2]) {
      (**(code **)(*(int *)*puVar3 + 4))(4);
    }
    *(undefined1 *)(in_ECX + 0x34) = 1;
    iVar7 = *(int *)(in_ECX + 0x58);
    while (iVar7 != 0) {
      iVar4 = *(int *)(iVar7 + 8);
      FUN_0057aab0(iVar7);
      iVar7 = iVar4;
    }
    local_8 = 0;
    iVar7 = *(int *)(in_ECX + 0x60);
    FUN_009a63f0();
    iVar4 = *(int *)(in_ECX + 0x5c);
    puVar3 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = *(undefined4 *)(in_ECX + 0x6c);
      puVar3[1] = iVar4;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 3) = 0;
    }
    iVar1 = *(int *)(in_ECX + 0x60);
    *(undefined4 **)(in_ECX + 0x5c) = puVar3;
    *(int *)(in_ECX + 0x60) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 **)(in_ECX + 0x58) = puVar3;
    }
    else {
      *(undefined4 **)(iVar4 + 8) = puVar3;
    }
    if (*(undefined4 **)(in_ECX + 0x38) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x38))(1);
    }
    iVar4 = FUN_00aae9af(0xb0);
    local_8._0_1_ = 1;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00a60bd0(iVar4,in_ECX,*(undefined4 *)(in_ECX + 0x40),
                           *(undefined4 *)(in_ECX + 0xac),*(undefined4 *)(in_ECX + 0xb0),
                           *(undefined4 *)(in_ECX + 0xb4),*(undefined4 *)(in_ECX + 0xb8));
    }
    piVar6 = DAT_00f20c18;
    local_8._0_1_ = 0;
    *(undefined4 *)(in_ECX + 0x38) = uVar5;
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)FUN_00aae9af(4);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
        DAT_00f20c18 = piVar6;
      }
      else {
        *piVar6 = (int)&PTR_FUN_00e38b28;
        DAT_00f20c18 = piVar6;
      }
    }
    piVar6 = (int *)(**(code **)(*piVar6 + 4))();
    local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)(*piVar6 + 4))();
    iVar4 = 0;
    while ((iVar7 != 0 && (fVar8 = (float10)(**(code **)(*piVar6 + 0x14))(), fVar8 <= (float10)1)))
    {
      (**(code **)(*piVar6 + 0x14))();
      (**(code **)(**(int **)(in_ECX + 0x38) + 0x1c))(1);
      if (iVar4 < *(int *)(in_ECX + 0x60)) {
        iVar4 = *(int *)(in_ECX + 0x60);
      }
    }
    if (iVar7 < 1) {
      iVar7 = *(int *)(*(int *)(in_ECX + 0x38) + 0x90);
      while (iVar7 < 0) {
        (**(code **)(**(int **)(in_ECX + 0x38) + 0x1c))(1);
        iVar7 = *(int *)(*(int *)(in_ECX + 0x38) + 0x90);
      }
    }
    else {
      for (puVar3 = *(undefined4 **)(in_ECX + 4); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[2]) {
        (**(code **)(*(int *)*puVar3 + 4))(5);
      }
    }
    local_8 = local_8 & 0xffffff00;
    *(undefined4 *)(in_ECX + 0x2c) = 4;
    (**(code **)*piVar6)(1);
  }
  ExceptionList = local_10;
  return;
}

