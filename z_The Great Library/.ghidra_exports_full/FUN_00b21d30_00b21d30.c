// FUN_00b21d30 @ 00b21d30 body=[[00b21d30, 00b21efb]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b21d30(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar8;
  bool bVar9;
  undefined1 *local_c;
  uint local_8;
  code *pcVar7;
  
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
    puVar4 = &stack0xffffffe4;
  }
  else {
    puVar4 = (undefined1 *)0x0;
  }
  bVar9 = puVar4 == (undefined1 *)0x0;
  if (bVar9) {
    puVar4 = (undefined1 *)
             (*DAT_013f3aa8)(param_1 + (2 - (int)pcVar1),
                             (char *)0xfffffffe < param_1 + (1 - (int)pcVar1));
  }
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    *puVar4 = bVar9;
    puVar4 = puVar4 + 1;
  }
  local_c = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    FUN_00b1f840("Out of memory");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = FUN_00b1fb50(puVar4);
  if (iVar5 != 0) {
    FUN_00b2a660(DAT_00f20aa0);
    puVar3 = DAT_00f20a84;
    if (DAT_00f20a84 == (undefined4 *)0x0) {
      FUN_00b1f840("Write directory is not set");
    }
    else {
      iVar5 = FUN_00b201e0(DAT_00f20a84,&local_c,0);
      if (iVar5 != 0) {
        iVar5 = puVar3[3];
        if (param_2 == 0) {
          pcVar7 = *(code **)(iVar5 + 0x24);
        }
        else {
          pcVar7 = *(code **)(iVar5 + 0x28);
        }
        iVar6 = (*pcVar7)(*puVar3,local_c);
        if (iVar6 != 0) {
          piVar8 = (int *)(*DAT_013f3aa8)(0x24,0);
          if (piVar8 == (int *)0x0) {
            (**(code **)(iVar5 + 0x50))(iVar6);
            FUN_00b1f840("Out of memory");
          }
          else {
            piVar8[1] = 0;
            piVar8[3] = 0;
            piVar8[4] = 0;
            piVar8[5] = 0;
            piVar8[6] = 0;
            piVar8[7] = 0;
            piVar8[8] = 0;
            *piVar8 = iVar6;
            piVar8[2] = (int)puVar3;
            piVar8[3] = puVar3[3];
            piVar8[8] = (int)DAT_00f20a88;
            DAT_00f20a88 = piVar8;
          }
        }
      }
    }
    FUN_00b2a680(DAT_00f20aa0);
    puVar4 = local_c;
  }
  if ((puVar4 != (undefined1 *)0x0) && (puVar4[-1] != '\0')) {
    (*DAT_013f3ab0)(puVar4 + -1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

