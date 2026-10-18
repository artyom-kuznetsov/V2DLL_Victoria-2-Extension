// FUN_00495bb0 @ 00495bb0 body=[[00495bb0, 00495d0a] [00495d0e, 00495d45]]


int * FUN_00495bb0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b60375;
  local_10 = ExceptionList;
  local_14 = 0;
  DAT_01258710 = param_1;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x2af0);
  local_8 = 0;
  if (iVar1 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)FUN_00495d50(iVar1);
  }
  local_8 = 0xffffffff;
  DAT_0125870c = param_1;
  puVar2 = (undefined4 *)FUN_00aae9af(0x360);
  local_8 = 1;
  local_18 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("UNNAMED_SESSION",0xf);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_14 = 1;
    puVar3 = (undefined4 *)FUN_00aae9af(0x114);
    local_8 = 3;
    local_1c = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_0098ffc0(&DAT_00f0aed8);
      *puVar3 = &PTR_FUN_00e37c3c;
    }
    *puVar2 = &PTR_FUN_00e38524;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    local_8 = 4;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2[7] = puVar3;
    puVar2[0xd0] = 0xf;
    puVar2[0xcf] = 0;
    *(undefined1 *)(puVar2 + 0xcb) = 0;
    FUN_00408ed0(local_38,0,0xffffffff);
    puVar2[0xd2] = 0;
    puVar2[0xd3] = 0;
    puVar2[0xd4] = 0;
    *(undefined1 *)(puVar2 + 0xd6) = 1;
    puVar2[0xd7] = 0;
  }
  local_8 = 0xffffffff;
  if ((local_14 & 1) != 0) {
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
  }
  (**(code **)(*param_1 + 0xc))(puVar2);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  ExceptionList = local_10;
  return param_1;
}

