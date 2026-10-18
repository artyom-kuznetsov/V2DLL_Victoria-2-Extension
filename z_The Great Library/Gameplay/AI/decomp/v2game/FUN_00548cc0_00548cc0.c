// FUN_00548cc0 @ 00548cc0 body=[[00548cc0, 00548e1d]]


undefined4 FUN_00548cc0(void)

{
  int iVar1;
  undefined8 *puVar2;
  size_t sVar3;
  int *in_ECX;
  size_t _Count;
  undefined8 local_30;
  undefined1 local_28;
  int local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  if ((in_ECX[0x11] == 0) || (*(char *)((int)in_ECX + 0x49) == '\0')) {
    return 1;
  }
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*in_ECX + 0xc))(0xffffffff);
  if (iVar1 == -1) {
    ExceptionList = local_10;
    return 0;
  }
  local_1c = 0xf;
  local_30 = 0;
  local_20 = 8;
  local_28 = 0;
  local_8 = 0;
  do {
    puVar2 = (undefined8 *)local_30;
    do {
      if (local_1c < 0x10) {
        puVar2 = &local_30;
      }
      iVar1 = (**(code **)(*(int *)in_ECX[0x11] + 0x18))
                        (in_ECX + 0x13,puVar2,(int)puVar2 + local_20,&local_14);
      if (iVar1 == 0) {
        *(undefined1 *)((int)in_ECX + 0x49) = 0;
      }
      else if (iVar1 != 1) {
        if (iVar1 != 3) goto LAB_00548d79;
        goto LAB_00548df4;
      }
      puVar2 = (undefined8 *)local_30;
      if (local_1c < 0x10) {
        puVar2 = &local_30;
      }
      _Count = local_14 - (int)puVar2;
      if (_Count != 0) {
        puVar2 = (undefined8 *)local_30;
        if (local_1c < 0x10) {
          puVar2 = &local_30;
        }
        sVar3 = __fwrite_nolock(puVar2,1,_Count,(FILE *)in_ECX[0x15]);
        if (_Count != sVar3) {
LAB_00548d79:
          FUN_00408ad0();
          ExceptionList = local_10;
          return 0;
        }
      }
      if (*(char *)((int)in_ECX + 0x49) == '\0') {
LAB_00548df4:
        FUN_00408ad0();
        ExceptionList = local_10;
        return 1;
      }
      puVar2 = (undefined8 *)local_30;
    } while (_Count != 0);
    FUN_00448860(8,0);
  } while( true );
}

