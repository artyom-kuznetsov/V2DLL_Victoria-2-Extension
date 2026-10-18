// FUN_004a2160 @ 004a2160 body=[[004a2160, 004a2284] [004a2288, 004a22cb]]


bool FUN_004a2160(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5feba;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x2ac4) = 1;
  local_18 = in_ECX;
  puVar2 = (undefined4 *)FUN_00aae9af(0x360);
  local_8 = 0;
  local_1c = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350("UNNAMED_SESSION",0xf);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_14 = 1;
    puVar3 = (undefined4 *)FUN_00aae9af(0x114);
    local_8 = 2;
    local_20 = puVar3;
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
    local_8 = 3;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2[7] = puVar3;
    puVar2[0xd0] = 0xf;
    puVar2[0xcf] = 0;
    *(undefined1 *)(puVar2 + 0xcb) = 0;
    FUN_00408ed0(local_3c,0,0xffffffff);
    puVar2[0xd2] = 0;
    puVar2[0xd3] = 0;
    puVar2[0xd4] = 0;
    *(undefined1 *)(puVar2 + 0xd6) = 1;
    puVar2[0xd7] = 0;
    in_ECX = local_18;
  }
  local_8 = 0xffffffff;
  if ((local_14 & 1) != 0) {
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
  }
  (**(code **)(*DAT_0125870c + 0xc))(puVar2);
  *(undefined1 *)(in_ECX + 0x2ac4) = 0;
  iVar1 = puVar2[3];
  (**(code **)*puVar2)(1);
  ExceptionList = local_10;
  return iVar1 == 0;
}

