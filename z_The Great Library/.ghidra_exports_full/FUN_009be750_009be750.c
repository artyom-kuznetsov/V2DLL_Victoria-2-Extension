// FUN_009be750 @ 009be750 body=[[009be750, 009be7d4] [009be7d8, 009be7ee] [009be7f4, 009be8bb] [009be8bf, 009be8dc] [009be8e0, 009be8ea]]


undefined4
FUN_009be750(int param_1,undefined4 param_2,char *param_3,undefined4 param_4,undefined4 *param_5,
            size_t *param_6)

{
  char cVar1;
  size_t _Size;
  void *pvVar2;
  undefined8 uVar3;
  undefined **local_9c [5];
  uint local_88;
  undefined4 local_78;
  uint local_74;
  int local_6c;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  uint local_28 [4];
  undefined4 local_18;
  uint local_14;
  undefined8 local_c;
  
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = local_28[0] & 0xffffff00;
  do {
    cVar1 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  if (*(int *)(param_1 + 8) != 0) {
    local_30 = 0xf;
    local_34 = 0;
    local_44 = local_44 & 0xffffff00;
    FUN_00409350();
    FUN_00988f20();
    FUN_00408ed0();
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  FUN_00989720();
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_9c,local_28,0);
  if (local_6c == 0) {
    local_c = 0;
    local_c._0_4_ = 0;
    _Size = (size_t)local_c;
  }
  else {
    uVar3 = PHYSFS_fileLength();
    local_c = CONCAT44((int)((ulonglong)uVar3 >> 0x20),(size_t)local_c);
    _Size = (size_t)uVar3;
  }
  *param_6 = _Size;
  pvVar2 = _malloc(_Size);
  *param_5 = pvVar2;
  FUN_00992f20();
  local_9c[0] = &PTR_FUN_00e37dc0;
  if (local_6c != 0) {
    PHYSFS_close();
    local_6c = 0;
  }
  local_9c[0] = &PTR_FUN_00e3b540;
  if (local_74 < 0x10) {
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (local_14 < 0x10) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

