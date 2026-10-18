// PHYSFS_getLastModTime @ 00b21840 body=[[00b21840, 00b219de]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void PHYSFS_getLastModTime(char *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  char *local_18;
  int local_14;
  undefined8 local_10;
  uint local_8;
  
                    /* 0x721840  17  PHYSFS_getLastModTime */
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_10._0_4_ = 0xffffffff;
  local_10._4_4_ = 0xffffffff;
  if (param_1 == (char *)0x0) {
    FUN_00b1f840("Invalid argument");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0xffffffff);
    return;
  }
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  if (param_1 + (1 - (int)pcVar1) < (char *)0x80) {
    pcVar4 = &stack0xffffffdc;
  }
  else {
    pcVar4 = (char *)0x0;
  }
  bVar6 = pcVar4 == (char *)0x0;
  if (bVar6) {
    pcVar4 = (char *)(*DAT_013f3aa8)(param_1 + (2 - (int)pcVar1),
                                     (char *)0xfffffffe < param_1 + (1 - (int)pcVar1));
  }
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = bVar6;
    pcVar1 = pcVar4 + 1;
    if (pcVar1 != (char *)0x0) {
      iVar5 = FUN_00b1fb50(pcVar1);
      if (iVar5 != 0) {
        if (*pcVar1 == '\0') {
          local_10._0_4_ = 1;
          local_10._4_4_ = 0;
          local_10 = 1;
        }
        else {
          local_14 = 0;
          FUN_00b2a660(DAT_00f20aa0);
          uVar7 = CONCAT44(local_10._4_4_,(undefined4)local_10);
          puVar3 = DAT_00f20a80;
          while ((local_10 = uVar7, puVar3 != (undefined4 *)0x0 && (local_14 == 0))) {
            local_18 = pcVar1;
            local_14 = FUN_00b1fc40(puVar3);
            if (local_14 == 0) {
              iVar5 = FUN_00b201e0(puVar3,&local_18,0);
              uVar7 = local_10;
              if (iVar5 != 0) {
                uVar7 = (**(code **)(puVar3[3] + 0x1c))(*puVar3,local_18,&local_14);
              }
            }
            else {
              uVar7 = 1;
            }
            puVar3 = (undefined4 *)puVar3[4];
          }
          FUN_00b2a680(DAT_00f20aa0);
        }
      }
      uVar7 = local_10;
      if (*pcVar4 != '\0') {
        (*DAT_013f3ab0)(pcVar4);
        uVar7 = local_10;
      }
      local_10._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,local_10._4_4_);
      local_10 = uVar7;
      return;
    }
  }
  FUN_00b1f840("Out of memory");
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0xffffffff);
  return;
}

