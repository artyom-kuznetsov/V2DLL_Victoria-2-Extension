// FUN_0066eb20 @ 0066eb20 body=[[0066eb20, 0066ed1e] [0066ed22, 0066ed48] [0066ed4c, 0066ed86]]


void FUN_0066eb20(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int *in_ECX;
  char *local_54;
  undefined **local_50 [3];
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 local_34 [16];
  uint local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4c6a5;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((in_ECX[0x760] != 0) && (ExceptionList = &local_14, iVar4 = FUN_00868080(), iVar4 != 0)) {
    FUN_00868080();
    iVar4 = FUN_008676e0();
    if (*(char *)(iVar4 + 0x58) == '\0') {
      ExceptionList = local_14;
      return;
    }
  }
  local_3c = 0;
  puVar5 = (undefined4 *)FUN_00aae9af(0x24);
  if (puVar5 == (undefined4 *)0x0) {
    local_54 = (char *)0x0;
    std::exception::exception((exception *)local_50,&local_54);
    local_50[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_50,&DAT_00e6fb20);
  }
  *puVar5 = puVar5;
  puVar5[1] = puVar5;
  puVar5[2] = puVar5;
  *(undefined1 *)(puVar5 + 8) = 1;
  *(undefined1 *)((int)puVar5 + 0x21) = 1;
  local_c = 0;
  puVar2 = (undefined4 *)in_ECX[0x580];
  while (local_40 = puVar5, puVar2 != (undefined4 *)0x0) {
    uVar8 = *puVar2;
    puVar2 = (undefined4 *)puVar2[2];
    puVar6 = (undefined4 *)FUN_00679e10();
    iVar4 = puVar6[1];
    puVar7 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puVar7 = uVar8;
      puVar7[1] = iVar4;
      puVar7[2] = 0;
      *(undefined1 *)(puVar7 + 3) = 0;
    }
    iVar3 = puVar6[2];
    puVar6[1] = puVar7;
    puVar6[2] = iVar3 + 1;
    puVar5 = local_40;
    if (iVar3 == 0) {
      *puVar6 = puVar7;
    }
    else {
      *(undefined4 **)(iVar4 + 8) = puVar7;
    }
  }
  puVar2 = (undefined4 *)*puVar5;
  while (puVar2 != puVar5) {
    iVar4 = FUN_00aae9af(0x4c);
    local_c._0_1_ = 1;
    if (iVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_005e13b0(iVar4,puVar2 + 4);
    }
    local_c = (uint)local_c._1_3_ << 8;
    iVar4 = (**(code **)(*in_ECX + 0x44))();
    (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))(uVar8);
    if (*(char *)((int)puVar2 + 0x21) == '\0') {
      puVar6 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar6 + 0x21) == '\0') {
        cVar1 = *(char *)((int)*puVar6 + 0x21);
        puVar2 = puVar6;
        puVar6 = (undefined4 *)*puVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar6 + 0x21);
          puVar2 = puVar6;
          puVar6 = (undefined4 *)*puVar6;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x21);
        puVar7 = (undefined4 *)puVar2[1];
        puVar6 = puVar2;
        while ((puVar2 = puVar7, cVar1 == '\0' && (puVar6 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x21);
          puVar7 = (undefined4 *)puVar2[1];
          puVar6 = puVar2;
        }
      }
    }
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = 0;
  FUN_00409350("click",5);
  local_c = CONCAT31(local_c._1_3_,2);
  piVar9 = (int *)FUN_009c7290();
  (**(code **)(*piVar9 + 0x60))(local_34);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  puStack_10 = (undefined1 *)0x3;
  FUN_00679f40(*local_44,local_44);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_44);
}

