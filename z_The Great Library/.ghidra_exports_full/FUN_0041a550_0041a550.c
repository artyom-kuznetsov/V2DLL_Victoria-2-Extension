// FUN_0041a550 @ 0041a550 body=[[0041a550, 0041a7ce] [0041a7d2, 0041a7e5]]


undefined1 * FUN_0041a550(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte ****ppppbVar3;
  int iVar4;
  char *_String;
  byte *pbVar5;
  bool bVar6;
  undefined8 uVar7;
  double dVar8;
  byte ***local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b408c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_14 = 1;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify the parameter on or off.",0x27);
    ExceptionList = local_10;
    return param_1;
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = (byte ***)((uint)local_38[0] & 0xffffff00);
  FUN_00408ed0(*param_2,0,0xffffffff);
  local_8 = 1;
  ppppbVar3 = (byte ****)local_38[0];
  if (local_24 < 0x10) {
    ppppbVar3 = local_38;
  }
  pbVar5 = &DAT_00df0dd0;
  do {
    bVar1 = *(byte *)ppppbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_0041a630:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0041a635;
    }
    if (bVar1 == 0) break;
    bVar1 = *(byte *)((int)ppppbVar3 + 1);
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_0041a630;
    ppppbVar3 = (byte ****)((int)ppppbVar3 + 2);
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0041a635:
  if ((iVar4 == 0) && ((param_2[1] - *param_2) / 0x1c < 2)) {
    *param_1 = 0;
    FUN_00409350("Please specify the city size 0-100.",0x23);
  }
  else {
    ppppbVar3 = (byte ****)local_38[0];
    if (local_24 < 0x10) {
      ppppbVar3 = local_38;
    }
    pbVar5 = &DAT_00df0df8;
    do {
      bVar1 = *(byte *)ppppbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0041a6a2:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0041a6a7;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)ppppbVar3 + 1);
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0041a6a2;
      ppppbVar3 = (byte ****)((int)ppppbVar3 + 2);
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0041a6a7:
    if (iVar4 == 0) {
      DAT_012586d9 = 0;
      FUN_00409350("City size override Disabled.",0x1c);
      *param_1 = 1;
    }
    else {
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
        FUN_00409350("Invalid argument. Specify on or off.",0x24);
        *param_1 = 0;
      }
      else {
        _String = (char *)(*param_2 + 0x1c);
        DAT_012586d9 = 1;
        if (0xf < *(uint *)(*param_2 + 0x30)) {
          _String = *(char **)_String;
        }
        dVar8 = _atof(_String);
        FUN_00401000(((float)dVar8 + 0.0005) * 1000.0);
        iVar4 = FUN_00b31c00();
        if (iVar4 + 0x189373U < 0x39580e) {
          DAT_00f0aa50 = (iVar4 * 1000) / 100000;
        }
        else {
          uVar7 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
          DAT_00f0aa50 = __alldiv(uVar7,100000,0);
          local_18 = DAT_00f0aa50 >> 0x1f;
        }
        if (DAT_00f0aa50 < 0) {
          DAT_00f0aa50 = 0;
        }
        else if (1000 < DAT_00f0aa50) {
          DAT_00f0aa50 = 1000;
        }
        FUN_00409350("City size override Enabled.",0x1b);
        *param_1 = 1;
      }
    }
  }
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

