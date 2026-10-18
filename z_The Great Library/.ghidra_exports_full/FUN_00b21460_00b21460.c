// PHYSFS_getRealDir @ 00b21460 body=[[00b21460, 00b215c7]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void PHYSFS_getRealDir(char *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  char *local_10;
  int local_c;
  uint local_8;
  
                    /* 0x721460  20  PHYSFS_getRealDir */
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_c = 0;
  if (param_1 == (char *)0x0) {
    FUN_00b1f840("Invalid argument");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  if (param_1 + (1 - (int)pcVar1) < (char *)0x80) {
    pcVar4 = &stack0xffffffe4;
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
        FUN_00b2a660(DAT_00f20aa0);
        puVar3 = DAT_00f20a80;
        while ((puVar3 != (undefined4 *)0x0 && (local_c == 0))) {
          local_10 = pcVar1;
          iVar5 = FUN_00b1fc40(puVar3);
          if ((iVar5 != 0) ||
             ((iVar5 = FUN_00b201e0(puVar3,&local_10,0), iVar5 != 0 &&
              (iVar5 = (**(code **)(puVar3[3] + 0x10))(*puVar3,local_10), iVar5 != 0)))) {
            local_c = puVar3[1];
          }
          puVar3 = (undefined4 *)puVar3[4];
        }
        FUN_00b2a680(DAT_00f20aa0);
      }
      if (*pcVar4 != '\0') {
        (*DAT_013f3ab0)(pcVar4);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_00b1f840("Out of memory");
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

