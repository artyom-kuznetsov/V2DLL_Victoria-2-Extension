// FUN_00547c50 @ 00547c50 body=[[00547c50, 00547e99]]


uint FUN_00547c50(void)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 uVar3;
  FILE *_File;
  uint uVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  int in_ECX;
  undefined4 ***local_38 [4];
  int local_28;
  uint local_24;
  byte *local_1c;
  int local_18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3fe98;
  local_10 = ExceptionList;
  if ((**(int **)(in_ECX + 0x20) != 0) &&
     (**(uint **)(in_ECX + 0x20) < **(int **)(in_ECX + 0x30) + **(uint **)(in_ECX + 0x20))) {
    **(int **)(in_ECX + 0x30) = **(int **)(in_ECX + 0x30) + -1;
    pbVar2 = (byte *)**(int **)(in_ECX + 0x20);
    **(int **)(in_ECX + 0x20) = (int)(pbVar2 + 1);
    return (uint)*pbVar2;
  }
  if (*(int *)(in_ECX + 0x54) == 0) {
    return 0xffffffff;
  }
  ExceptionList = &local_10;
  if (**(int **)(in_ECX + 0x10) == in_ECX + 0x48) {
    uVar3 = *(undefined4 *)(in_ECX + 0x40);
    ExceptionList = &local_10;
    **(int **)(in_ECX + 0x10) = *(int *)(in_ECX + 0x3c);
    **(undefined4 **)(in_ECX + 0x20) = uVar3;
    **(undefined4 **)(in_ECX + 0x30) = 0;
  }
  if (*(int *)(in_ECX + 0x44) == 0) {
    _File = *(FILE **)(in_ECX + 0x54);
    piVar1 = &_File->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar4 = __filbuf(_File);
    }
    else {
      uVar4 = (uint)(byte)*_File->_ptr;
      _File->_ptr = _File->_ptr + 1;
    }
    if (uVar4 != 0xffffffff) {
      ExceptionList = local_10;
      return uVar4 & 0xff;
    }
    ExceptionList = local_10;
    return 0xffffffff;
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = (undefined4 ***)((uint)local_38[0] & 0xffffff00);
  local_8 = 0;
  while( true ) {
    piVar1 = (int *)(*(int *)(in_ECX + 0x54) + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar4 = __filbuf(*(FILE **)(in_ECX + 0x54));
    }
    else {
      pbVar2 = (byte *)**(undefined4 **)(in_ECX + 0x54);
      uVar4 = (uint)*pbVar2;
      **(undefined4 **)(in_ECX + 0x54) = pbVar2 + 1;
    }
    if (uVar4 == 0xffffffff) break;
    FUN_00448860(1,uVar4);
    ppppuVar6 = (undefined4 ****)local_38[0];
    if (local_24 < 0x10) {
      ppppuVar6 = local_38;
    }
    iVar5 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x10))
                      (in_ECX + 0x4c,ppppuVar6,(int)ppppuVar6 + local_28,&local_18,&local_11,
                       &local_10,&local_1c);
    if (iVar5 < 0) break;
    if (iVar5 < 2) {
      if (local_1c != &local_11) {
        ppppuVar6 = (undefined4 ****)local_38[0];
        if (local_24 < 0x10) {
          ppppuVar6 = local_38;
        }
        for (iVar5 = (int)ppppuVar6 + (local_28 - local_18); 0 < iVar5; iVar5 = iVar5 + -1) {
          __ungetc_nolock((int)*(char *)(iVar5 + -1 + local_18),*(FILE **)(in_ECX + 0x54));
        }
        FUN_00408ad0();
        ExceptionList = local_10;
        return (uint)local_11;
      }
      ppppuVar6 = (undefined4 ****)local_38[0];
      if (local_24 < 0x10) {
        ppppuVar6 = local_38;
      }
      FUN_00409450(0,local_18 - (int)ppppuVar6);
    }
    else {
      if (iVar5 != 3) break;
      if (local_28 != 0) {
        ppppuVar6 = (undefined4 ****)local_38[0];
        if (local_24 < 0x10) {
          ppppuVar6 = local_38;
        }
        _memcpy_s(&local_11,1,ppppuVar6,1);
        FUN_00408ad0();
        ExceptionList = local_10;
        return (uint)local_11;
      }
    }
  }
  FUN_00408ad0();
  ExceptionList = local_10;
  return 0xffffffff;
}

