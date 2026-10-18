// FUN_009c3070 @ 009c3070 body=[[009c3070, 009c31eb] [009c31ef, 009c3217] [009c321b, 009c32fe]]


/* WARNING: Removing unreachable block (ram,0x009c320f) */

undefined4 *
FUN_009c3070(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 in_ECX;
  uint local_38;
  uint local_24;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f327;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_009ee0b0(param_1,param_3);
  *param_1 = &PTR_FUN_00e3a800;
  param_1[0x15] = &PTR_LAB_00e3a91c;
  param_1[0x26] = param_2;
  param_1[0x27] = *param_6;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2f] = in_ECX;
  param_1[0x1c] = 0;
  piVar4 = (int *)FUN_00996520(param_4,in_ECX,&DAT_00f0f728);
  local_14 = (uint)*(short *)((int)param_1 + 0x9e);
  local_18 = (undefined4 *)(int)*(short *)(param_1 + 0x27);
  param_1[0x25] = piVar4;
  (**(code **)(*piVar4 + 0xcc))(&local_18);
  local_14 = param_1[0x25];
  local_18 = param_1;
  FUN_0099e960();
  (**(code **)(*(int *)param_1[0x25] + 0x5c))(1);
  FUN_00409350("NOTOOLTIP",9);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_14 = 1;
  cVar3 = FUN_00416db0();
  if (cVar3 == '\0') {
    local_24 = 0xf;
    local_38 = local_38 & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 3;
    local_14 = 3;
    cVar3 = FUN_00416db0();
    bVar2 = true;
    if (cVar3 == '\0') goto LAB_009c31d3;
  }
  bVar2 = false;
LAB_009c31d3:
  if (((local_14 & 2) != 0) && (local_14 = local_14 & 0xfffffffd, 0xf < local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  local_8 = 1;
  if (bVar2) {
    iVar5 = (**(code **)(*param_3 + 0x38))(param_5);
    param_1[0x2c] = iVar5;
    if (*(char *)(iVar5 + 200) != '\0') {
      (**(code **)(**(int **)(iVar5 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar5 + 200) = 0;
    param_3 = (int *)CONCAT22(*(short *)((int)param_1 + 0x9e) + 10,*(short *)(param_1 + 0x27) + 0x1e
                             );
    FUN_009e7350(param_3);
  }
  else {
    param_1[0x2c] = 0;
  }
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  puVar6 = (undefined4 *)(**(code **)(*DAT_00f20c18 + 4))();
  puVar1 = (undefined4 *)param_1[0x2b];
  if ((puVar6 != puVar1) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  param_1[0x2b] = puVar6;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  ExceptionList = local_10;
  return param_1;
}

