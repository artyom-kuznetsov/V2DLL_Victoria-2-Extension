// FUN_00447d70 @ 00447d70 body=[[00447d70, 0044822b] [0044822f, 0044824a] [0044824e, 00448260]]


undefined4
FUN_00447d70(undefined4 param_1,int param_2,undefined4 param_3,char *****param_4,int param_5,
            int param_6,int param_7,size_t param_8,undefined4 param_9,undefined4 param_10)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  lconv *plVar5;
  void *pvVar6;
  char *****pppppcVar7;
  size_t sVar8;
  uint uVar9;
  uint uVar10;
  char *****pppppcVar11;
  undefined4 *puVar12;
  size_t _MaxCount;
  char ****local_68 [5];
  uint local_54;
  char ****local_4c [4];
  size_t local_3c;
  uint local_38;
  undefined1 local_30 [4];
  int *local_2c;
  undefined1 local_28 [4];
  void *local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pppppcVar11 = param_4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b40768;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00446040(&local_20);
  local_8 = 0;
  piVar4 = (int *)FUN_00448cc0();
  local_8 = 0xffffffff;
  local_2c = piVar4;
  if (local_20 != 0) {
    local_1c = local_20;
    std::_Lockit::_Lockit((_Lockit *)&local_18,0);
    iVar2 = *(int *)(local_20 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(local_20 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(local_20 + 4);
    FUN_00aad9f1();
    puVar12 = (undefined4 *)(~-(uint)(iVar2 != 0) & local_1c);
    if (puVar12 != (undefined4 *)0x0) {
      (**(code **)*puVar12)(1);
    }
  }
  FUN_00448a60();
  local_8 = 1;
  uVar3 = (**(code **)(*piVar4 + 8))();
  local_1c = CONCAT31(local_1c._1_3_,uVar3);
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = (char ****)((uint)local_4c[0] & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,2);
  if ((*(char *)pppppcVar11 == '+') || (local_18 = 0, *(char *)pppppcVar11 == '-')) {
    local_18 = 1;
  }
  plVar5 = _localeconv();
  _MaxCount = param_8;
  param_4._0_3_ = CONCAT21(0x65,*plVar5->decimal_point);
  local_14 = _memchr(pppppcVar11,0x65,param_8);
  pvVar6 = _memchr(pppppcVar11,(int)(char)param_4,_MaxCount);
  local_24 = pvVar6;
  if (pvVar6 == (void *)0x0) {
    param_7 = 0;
  }
  pppppcVar7 = (char *****)local_68[0];
  if (local_54 < 0x10) {
    pppppcVar7 = local_68;
  }
  if (*(char *)pppppcVar7 != '\x7f') {
    pppppcVar7 = (char *****)local_68[0];
    if (local_54 < 0x10) {
      pppppcVar7 = local_68;
    }
    if ('\0' < *(char *)pppppcVar7) {
      FUN_00448740(pppppcVar11,_MaxCount);
      if (local_14 == (void *)0x0) {
        FUN_00448860(param_7,0x30);
      }
      else {
        if (pvVar6 == (void *)0x0) {
          FUN_00448860(param_5,0x30);
          param_5 = 0;
        }
        FUN_00447c90(param_7,0x30);
        pvVar6 = local_24;
      }
      if (pvVar6 == (void *)0x0) {
        FUN_00448860(param_5,0x30);
      }
      else {
        param_8 = (int)pvVar6 - (int)pppppcVar11;
        FUN_00447c90(param_6,0x30);
        FUN_00447c90(param_5,0x30);
        param_6 = 0;
      }
      param_5 = 0;
      pppppcVar11 = (char *****)local_68[0];
      if (local_54 < 0x10) {
        pppppcVar11 = local_68;
      }
      pppppcVar7 = (char *****)local_4c[0];
      if (local_38 < 0x10) {
        pppppcVar7 = local_4c;
      }
      sVar8 = _strcspn((char *)pppppcVar7,(char *)&param_4);
      cVar1 = *(char *)pppppcVar11;
      _MaxCount = local_3c;
      while (((local_3c = _MaxCount, cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < sVar8 - local_18))) {
        sVar8 = sVar8 - (int)cVar1;
        FUN_00447c90(1,0);
        if ('\0' < *(char *)((int)pppppcVar11 + 1)) {
          pppppcVar11 = (char *****)((int)pppppcVar11 + 1);
        }
        _MaxCount = local_3c;
        cVar1 = *(char *)pppppcVar11;
      }
      pppppcVar11 = (char *****)local_4c[0];
      if (local_38 < 0x10) {
        pppppcVar11 = local_4c;
      }
      param_7 = 0;
      param_8 = _MaxCount;
    }
  }
  uVar10 = *(uint *)(param_2 + 0x20);
  uVar9 = param_5 + param_6 + param_7 + _MaxCount;
  if (((*(int *)(param_2 + 0x24) < 0) || ((*(int *)(param_2 + 0x24) < 1 && (uVar10 == 0)))) ||
     (uVar10 <= uVar9)) {
    local_14 = (void *)0x0;
  }
  else {
    local_14 = (void *)(uVar10 - uVar9);
  }
  uVar10 = *(uint *)(param_2 + 0x14) & 0x1c0;
  if (uVar10 != 0x40) {
    if ((uVar10 == 0x100) && (local_18 != 0)) {
      puVar12 = (undefined4 *)FUN_00448950(local_28,param_9,param_10,1);
      param_9 = *puVar12;
      param_10 = puVar12[1];
      pppppcVar11 = (char *****)((int)pppppcVar11 + 1);
      _MaxCount = _MaxCount - 1;
      param_8 = _MaxCount;
    }
    puVar12 = (undefined4 *)FUN_00448540(param_9,param_10,param_3);
    param_9 = *puVar12;
    param_10 = puVar12[1];
    local_14 = (void *)0x0;
  }
  pvVar6 = _memchr(pppppcVar11,(int)(char)param_4,_MaxCount);
  if (pvVar6 != (void *)0x0) {
    iVar2 = ((int)pvVar6 - (int)pppppcVar11) + 1;
    puVar12 = (undefined4 *)
              FUN_004489c0(local_28,pppppcVar11,(int)pvVar6 - (int)pppppcVar11,local_1c,param_9,
                           param_10);
    param_9 = *puVar12;
    param_10 = puVar12[1];
    puVar12 = (undefined4 *)FUN_00448540(*puVar12,puVar12[1],0x30);
    param_9 = *puVar12;
    param_10 = puVar12[1];
    uVar3 = (**(code **)(*local_2c + 4))();
    param_5 = CONCAT31(param_5._1_3_,uVar3);
    puVar12 = (undefined4 *)FUN_00448540(param_9,param_10,param_5);
    param_9 = *puVar12;
    param_10 = puVar12[1];
    puVar12 = (undefined4 *)FUN_00448540(*puVar12,puVar12[1],0x30);
    param_9 = *puVar12;
    pppppcVar11 = (char *****)((int)pppppcVar11 + iVar2);
    _MaxCount = param_8 - iVar2;
    param_10 = puVar12[1];
    param_8 = _MaxCount;
  }
  pvVar6 = _memchr(pppppcVar11,0x65,_MaxCount);
  if (pvVar6 != (void *)0x0) {
    iVar2 = ((int)pvVar6 - (int)pppppcVar11) + 1;
    puVar12 = (undefined4 *)
              FUN_004489c0(local_30,pppppcVar11,(int)pvVar6 - (int)pppppcVar11,local_1c,param_9,
                           param_10);
    param_9 = *puVar12;
    param_10 = puVar12[1];
    puVar12 = (undefined4 *)FUN_00448540(*puVar12,puVar12[1],0x30);
    param_9 = *puVar12;
    param_10 = puVar12[1];
    param_7 = 0;
    puVar12 = (undefined4 *)FUN_00448950(local_30,*puVar12,puVar12[1],1);
    param_9 = *puVar12;
    pppppcVar11 = (char *****)((int)pppppcVar11 + iVar2);
    _MaxCount = param_8 - iVar2;
    param_10 = puVar12[1];
    param_8 = _MaxCount;
  }
  puVar12 = (undefined4 *)FUN_004489c0(local_30,pppppcVar11,_MaxCount,local_1c,param_9,param_10);
  param_9 = *puVar12;
  param_10 = puVar12[1];
  puVar12 = (undefined4 *)FUN_00448540(*puVar12,puVar12[1],0x30);
  param_9 = *puVar12;
  param_10 = puVar12[1];
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  FUN_00448540(param_9,param_10,param_3);
  if (local_38 < 0x10) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = (char ****)((uint)local_4c[0] & 0xffffff00);
    if (local_54 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_4c[0]);
}

