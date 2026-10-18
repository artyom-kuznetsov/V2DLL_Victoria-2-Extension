// FUN_00674a70 @ 00674a70 body=[[00674a70, 00674b10] [00674b14, 00674c75] [00674c79, 00674ca1] [00674ca5, 00674cd1]]


void FUN_00674a70(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7f166;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  iVar1 = PHYSFS_exists("messagetypes_custom.txt");
  if (iVar1 != 0) {
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    FUN_00409350("messagetypes_custom.txt",0x17);
    local_8 = 0;
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)0x0;
      }
      else {
        *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
      }
    }
    (**(code **)(*DAT_00f20c18 + 0x20))(local_74);
    local_8 = 0xffffffff;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
  }
  puVar2 = (undefined4 *)FUN_00aae9af(0x360);
  local_8 = 1;
  local_1c = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("UNNAMED_SESSION",0xf);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_14 = 1;
    puVar3 = (undefined4 *)FUN_00aae9af(0x114);
    local_8 = 3;
    local_20 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      FUN_00409350("interface/messagetypes.txt",0x1a);
      local_8 = CONCAT31(local_8._1_3_,4);
      local_14 = 3;
      FUN_0098ffc0(local_3c);
      *puVar3 = &PTR_FUN_00e37c3c;
    }
    *puVar2 = &PTR_FUN_00e38524;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    local_8 = 6;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2[7] = puVar3;
    puVar2[0xd0] = 0xf;
    puVar2[0xcf] = 0;
    *(undefined1 *)(puVar2 + 0xcb) = 0;
    FUN_00408ed0(local_58,0,0xffffffff);
    puVar2[0xd2] = 0;
    puVar2[0xd3] = 0;
    puVar2[0xd4] = 0;
    *(undefined1 *)(puVar2 + 0xd6) = 1;
    puVar2[0xd7] = 0;
  }
  local_8 = 8;
  if (DAT_01262ef4 == 0) {
    local_20 = (undefined4 *)FUN_00aae9af(0x44);
    local_8 = 9;
    if (local_20 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_006a4e30();
    }
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_006a59b0(uVar4);
  }
  FUN_006a4fa0(DAT_01262ef4,puVar2);
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  if ((local_14 & 1) != 0) {
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
  }
  FUN_00673a10(local_18);
  FUN_006742d0(local_18);
  ExceptionList = local_10;
  return;
}

