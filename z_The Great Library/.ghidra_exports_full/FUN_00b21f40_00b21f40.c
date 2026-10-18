// PHYSFS_openRead @ 00b21f40 body=[[00b21f40, 00b22115]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void PHYSFS_openRead(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  char *local_10;
  int local_c;
  uint local_8;
  
                    /* 0x721f40  32  PHYSFS_openRead */
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
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
    pcVar3 = &stack0xffffffe0;
  }
  else {
    pcVar3 = (char *)0x0;
  }
  bVar8 = pcVar3 == (char *)0x0;
  if (bVar8) {
    pcVar3 = (char *)(*DAT_013f3aa8)(param_1 + (2 - (int)pcVar1),
                                     (char *)0xfffffffe < param_1 + (1 - (int)pcVar1));
  }
  if (pcVar3 != (char *)0x0) {
    pcVar1 = pcVar3 + 1;
    *pcVar3 = bVar8;
    if (pcVar1 != (char *)0x0) {
      iVar4 = FUN_00b1fb50(pcVar1);
      if (iVar4 != 0) {
        local_c = 0;
        iVar4 = 0;
        FUN_00b2a660(DAT_00f20aa0);
        puVar7 = DAT_00f20a80;
        if (DAT_00f20a80 == (undefined4 *)0x0) {
          FUN_00b1f840("Path not found");
        }
        else {
          do {
            local_10 = pcVar1;
            iVar5 = FUN_00b201e0(puVar7,&local_10,0);
            if (iVar5 != 0) {
              iVar4 = (**(code **)(puVar7[3] + 0x20))(*puVar7,local_10,&local_c);
              if (iVar4 != 0) goto LAB_00b2207b;
            }
            puVar7 = (undefined4 *)puVar7[4];
          } while ((puVar7 != (undefined4 *)0x0) && (local_c == 0));
          if (iVar4 != 0) {
LAB_00b2207b:
            piVar6 = (int *)(*DAT_013f3aa8)(0x24,0);
            if (piVar6 == (int *)0x0) {
              (**(code **)(puVar7[3] + 0x50))(iVar4);
              FUN_00b1f840("Out of memory");
            }
            else {
              piVar6[1] = 0;
              piVar6[3] = 0;
              piVar6[4] = 0;
              piVar6[5] = 0;
              piVar6[6] = 0;
              piVar6[7] = 0;
              piVar6[8] = 0;
              *piVar6 = iVar4;
              *(undefined1 *)(piVar6 + 1) = 1;
              piVar6[2] = (int)puVar7;
              piVar6[3] = puVar7[3];
              piVar6[8] = (int)DAT_00f20a8c;
              DAT_00f20a8c = piVar6;
            }
          }
        }
        FUN_00b2a680(DAT_00f20aa0);
      }
      if (*pcVar3 != '\0') {
        (*DAT_013f3ab0)(pcVar3);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_00b1f840("Out of memory");
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

