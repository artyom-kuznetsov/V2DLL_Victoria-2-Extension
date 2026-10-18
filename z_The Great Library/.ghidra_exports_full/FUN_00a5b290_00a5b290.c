// FUN_00a5b290 @ 00a5b290 body=[[00a5b290, 00a5b36f] [00a5b373, 00a5b3f5] [00a5b40c, 00a5b4a4]]


void FUN_00a5b290(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b77c36;
  local_10 = ExceptionList;
  switch(param_2) {
  case 0x84:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0x78,0);
    ExceptionList = local_10;
    return;
  default:
    ExceptionList = &local_10;
    FUN_009ecfa0(param_1,param_2);
    break;
  case 0x89:
    ExceptionList = &local_10;
    iVar5 = FUN_00aae9af(0x1a8);
    local_8 = 3;
    if (iVar5 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_00a56810(iVar5,*(undefined4 *)(in_ECX + 0x98),
                                   *(undefined4 *)(in_ECX + 0x9c));
    }
    local_8 = 0xffffffff;
    (**(code **)(*piVar6 + 0xc))(param_1);
    iVar5 = *(int *)(in_ECX + 0xa0);
    uVar7 = (**(code **)(*piVar6 + 0x18))(piVar6);
    (**(code **)(iVar5 + 0x18))(uVar7);
    ExceptionList = local_10;
    return;
  case 0x8a:
    ExceptionList = &local_10;
    FUN_009a1ca0();
    ExceptionList = local_10;
    return;
  case 0xa1:
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a1750(local_48,0);
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 1;
    cVar3 = FUN_00416db0();
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    if (cVar3 == '\0') {
      iVar5 = *(int *)(in_ECX + 0x6c);
      puVar4 = (undefined1 *)FUN_00aae9af(0x28);
      local_8._0_1_ = 2;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar4 + 0x14) = 0xf;
        *(undefined4 *)(puVar4 + 0x10) = 0;
        *puVar4 = 0;
        FUN_00408ed0(local_48,0,0xffffffff);
        *(int *)(puVar4 + 0x1c) = iVar5;
        *(undefined4 *)(puVar4 + 0x20) = 0;
        puVar4[0x24] = 0;
      }
      iVar1 = *(int *)(in_ECX + 0x70);
      *(undefined1 **)(in_ECX + 0x6c) = puVar4;
      *(int *)(in_ECX + 0x70) = iVar1 + 1;
      uVar2 = (undefined1)local_8;
      if (iVar1 == 0) {
        *(undefined1 **)(in_ECX + 0x68) = puVar4;
      }
      else {
        *(undefined1 **)(iVar5 + 0x20) = puVar4;
      }
    }
    local_8._0_1_ = uVar2;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

