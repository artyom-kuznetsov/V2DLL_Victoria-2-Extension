// FUN_00a5e200 @ 00a5e200 body=[[00a5e200, 00a5e675] [00a5e690, 00a5e6b2]]


void FUN_00a5e200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined1 auStack_14c [7];
  char local_145;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint uStack_130;
  int local_128;
  undefined1 local_124 [196];
  undefined **ppuStack_60;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b77bf7;
  local_14 = ExceptionList;
  if (param_2 < 0x12d) {
    if (param_2 == 300) {
      ExceptionList = &local_14;
      local_128 = FUN_00aae9af();
      local_c = 3;
      if (local_128 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_009dcb10();
      }
      local_c = 0xffffffff;
      (**(code **)(*piVar4 + 0xc))();
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar1 = *(int *)(in_ECX + 0x100);
        puVar5 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = piVar4;
          puVar5[1] = iVar1;
          puVar5[2] = 0;
          *(undefined1 *)(puVar5 + 3) = 0;
        }
        iVar2 = *(int *)(in_ECX + 0x104);
        *(undefined4 **)(in_ECX + 0x100) = puVar5;
        *(int *)(in_ECX + 0x104) = iVar2 + 1;
        if (iVar2 == 0) {
          *(undefined4 **)(in_ECX + 0xfc) = puVar5;
          ExceptionList = pvStack_18;
          return;
        }
        *(undefined4 **)(iVar1 + 8) = puVar5;
        ExceptionList = pvStack_18;
        return;
      }
      (**(code **)*piVar4)(1);
      uStack_138 = 0xf;
      uStack_13c = 0;
      auStack_14c[0] = 0;
      FUN_00409350("textboxtype.cpp",0xf);
      local_14 = (void *)0x4;
      uVar6 = FUN_004015b0(auStack_14c,0x5d,0);
      local_14 = (void *)CONCAT31(local_14._1_3_,5);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
      puVar5 = (undefined4 *)(iVar1 + 0x14);
      FUN_00987d50(uVar6,"Error reading textblock in file ",0x20,0);
      if (0xf < *(uint *)(iVar1 + 0x28)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      FUN_00418e30(uVar6,puVar5);
      FUN_00401280();
      local_c = CONCAT31(local_c._1_3_,4);
      FUN_00987ac0();
      ppuStack_60 = std::ios_base::vftable;
      FUN_00aad52d();
      if (uStack_130 < 0x10) {
        ExceptionList = local_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    switch(param_2) {
    case 0x1d:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x88,0);
      ExceptionList = local_14;
      return;
    default:
      goto switchD_00a5e250_caseD_1e;
    case 0x24:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x6c,0);
      ExceptionList = local_14;
      return;
    case 0x4b:
      ExceptionList = &local_14;
      FUN_009a1e10();
      ExceptionList = local_14;
      return;
    case 0x71:
      iVar1 = *(int *)(param_1 + 0x228);
      if (iVar1 == 0x74) {
        *(undefined4 *)(in_ECX + 0xf8) = 2;
        return;
      }
      if (iVar1 == 0x73) {
        *(undefined4 *)(in_ECX + 0xf8) = 1;
        return;
      }
      if (iVar1 == 0x72) {
        *(undefined4 *)(in_ECX + 0xf8) = 0;
        return;
      }
      break;
    case 0x83:
      ExceptionList = &local_14;
      FUN_009a1e10();
      ExceptionList = local_14;
      return;
    case 0x8c:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0xa4,0);
      FUN_009885d0();
      local_c = 0;
      cVar3 = FUN_00416db0();
      local_145 = cVar3 == '\0';
      local_c = 0xffffffff;
      FUN_00408ad0();
      if (local_145 != '\0') {
        FUN_009a8ee0(local_124,in_ECX + 0xa4);
        local_c = 1;
        iVar1 = *(int *)(*(int *)(in_ECX + 0x10c) + 0xa8);
        FUN_009a9880(*(undefined8 *)(iVar1 + 8),*(undefined8 *)(iVar1 + 0x10));
        local_c = CONCAT31(local_c._1_3_,2);
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = 0xffffffff;
        FUN_009a9740();
        ExceptionList = local_14;
        return;
      }
      break;
    case 0x8d:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0x8e:
      ExceptionList = &local_14;
      FUN_009a1c10();
      ExceptionList = local_14;
      return;
    case 0xad:
      ExceptionList = &local_14;
      FUN_009a1bb0();
      ExceptionList = local_14;
      return;
    case 0xbf:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0xdc,0);
      ExceptionList = local_14;
      return;
    }
  }
  else {
switchD_00a5e250_caseD_1e:
    ExceptionList = &local_14;
    FUN_009ecfa0(param_1,param_2);
  }
  ExceptionList = local_14;
  return;
}

