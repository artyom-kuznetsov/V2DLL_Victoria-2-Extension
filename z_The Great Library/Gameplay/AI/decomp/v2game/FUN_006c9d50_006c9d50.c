// FUN_006c9d50 @ 006c9d50 body=[[006c9d50, 006ca08b]]


undefined4 FUN_006c9d50(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int in_ECX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 local_13c [92];
  int local_e0;
  undefined1 local_b0 [28];
  undefined4 local_94;
  int local_90;
  undefined1 local_8c [124];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b94fb6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0093fa60();
  local_8 = 0;
  cVar1 = FUN_006c9d30();
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x44))();
    uVar2 = FUN_00408fc0();
    iVar3 = FUN_00aafe90(uVar2,"outliner_view_");
    if (iVar3 == 0) {
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
      local_90 = *piVar5;
      do {
        do {
          if (local_90 == 0) goto LAB_006ca04d;
          local_e0 = local_90;
          local_90 = *(int *)(local_90 + 8);
          puVar4 = (undefined4 *)FUN_0043a900();
          local_94 = *puVar4;
          iVar3 = FUN_004f6350();
        } while (*(char *)(iVar3 + 0x67) == '\0');
        iVar3 = FUN_004f6350();
        cVar1 = (**(code **)(*(int *)(iVar3 + 0x18) + 0x94))(param_2);
      } while (cVar1 == '\0');
      FUN_006bf740(local_13c,param_2);
      local_8._0_1_ = 4;
      FUN_004115d0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00459820();
    }
    else {
      FUN_009885d0();
      local_8._0_1_ = 1;
      (**(code **)(*param_2 + 0x44))();
      FUN_00408fc0();
      FUN_00989030();
      FUN_00989aa0();
      puVar7 = local_8c;
      puVar6 = local_b0;
      FUN_004136d0(0x6d2);
      FUN_009a8ee0(puVar6,puVar7);
      local_8._0_1_ = 2;
      FUN_00475500();
      puVar4 = (undefined4 *)FUN_0040b440();
      FUN_009a9880(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
      local_8._0_1_ = 3;
      FUN_004012e0();
      local_8._0_1_ = 2;
      FUN_00408ad0();
      local_8._0_1_ = 1;
      FUN_009a9740(local_b0);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00408ad0();
    }
  }
LAB_006ca04d:
  FUN_0040c830(param_1);
  local_8 = 0xffffffff;
  FUN_00459820();
  ExceptionList = local_10;
  return param_1;
}

