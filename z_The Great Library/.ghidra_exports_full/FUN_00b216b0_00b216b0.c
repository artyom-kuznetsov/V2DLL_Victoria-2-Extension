// PHYSFS_enumerateFilesCallback @ 00b216b0 body=[[00b216b0, 00b21812]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void PHYSFS_enumerateFilesCallback(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  char *local_c;
  uint local_8;
  
                    /* 0x7216b0  6  PHYSFS_enumerateFilesCallback */
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    FUN_00b1f840("Invalid argument");
  }
  else {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 + (1 - (int)(param_1 + 1)) < (char *)0x80) {
      pcVar4 = &stack0xffffffe4;
    }
    else {
      pcVar4 = (char *)0x0;
    }
    bVar6 = pcVar4 == (char *)0x0;
    if (bVar6) {
      pcVar4 = (char *)(*DAT_013f3aa8)(pcVar3 + (2 - (int)(param_1 + 1)),
                                       (char *)0xfffffffe < pcVar3 + (1 - (int)(param_1 + 1)));
    }
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = bVar6;
      pcVar3 = pcVar4 + 1;
      if (pcVar3 != (char *)0x0) {
        iVar5 = FUN_00b1fb50(pcVar3);
        if (iVar5 != 0) {
          FUN_00b2a660(DAT_00f20aa0);
          bVar6 = DAT_00f20a98 == 0;
          for (puVar2 = DAT_00f20a80; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[4])
          {
            local_c = pcVar3;
            iVar5 = FUN_00b1fc40(puVar2);
            if (iVar5 == 0) {
              iVar5 = FUN_00b201e0(puVar2,&local_c,0);
              if (iVar5 != 0) {
                (**(code **)(puVar2[3] + 0xc))(*puVar2,local_c,bVar6,param_2,param_1,param_3);
              }
            }
            else {
              FUN_00b215d0(puVar2,pcVar3,param_2,param_1,param_3);
            }
          }
          FUN_00b2a680(DAT_00f20aa0);
        }
        if (*pcVar4 != '\0') {
          (*DAT_013f3ab0)(pcVar4);
        }
        goto LAB_00b217ff;
      }
    }
    FUN_00b1f840("Out of memory");
  }
LAB_00b217ff:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

