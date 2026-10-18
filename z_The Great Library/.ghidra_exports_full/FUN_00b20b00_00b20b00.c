// FUN_00b20b00 @ 00b20b00 body=[[00b20b00, 00b20d1e]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b20b00(char *param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *in_ECX;
  undefined2 *puVar8;
  bool bVar9;
  char *local_c;
  
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_c = (char *)0x0;
  if (in_ECX == (char *)0x0) {
    FUN_00b1f840("Invalid argument");
    __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_1 != (char *)0x0) {
    pcVar6 = param_1 + 1;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    if (param_1 + (1 - (int)pcVar6) < (char *)0x80) {
      puVar3 = &stack0xffffffe8;
    }
    else {
      puVar3 = (undefined1 *)0x0;
    }
    bVar9 = puVar3 == (undefined1 *)0x0;
    if (bVar9) {
      puVar3 = (undefined1 *)
               (*DAT_013f3aa8)(param_1 + (2 - (int)pcVar6),
                               (char *)0xfffffffe < param_1 + (1 - (int)pcVar6));
    }
    if (puVar3 == (undefined1 *)0x0) {
LAB_00b20ba0:
      FUN_00b1f840("Out of memory");
      __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_c = puVar3 + 1;
    *puVar3 = bVar9;
    if (local_c == (char *)0x0) goto LAB_00b20ba0;
    iVar4 = FUN_00b1fb50(local_c);
    if (iVar4 == 0) goto LAB_00b20c98;
  }
  puVar5 = (undefined4 *)FUN_00b1f9b0();
  if (puVar5 != (undefined4 *)0x0) {
    pcVar6 = in_ECX;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar6 = (char *)(*DAT_013f3aa8)(pcVar6 + (1 - (int)(in_ECX + 1)),0);
    puVar5[1] = pcVar6;
    if (pcVar6 != (char *)0x0) {
      do {
        cVar1 = *in_ECX;
        *pcVar6 = cVar1;
        in_ECX = in_ECX + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if ((local_c == (char *)0x0) || (*local_c == '\0')) {
LAB_00b20cf2:
        if ((local_c != (char *)0x0) && (local_c[-1] != '\0')) {
          (*DAT_013f3ab0)(local_c + -1);
        }
        __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
        return;
      }
      pcVar6 = local_c;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar7 = (char *)(*DAT_013f3aa8)(pcVar6 + (2 - (int)(local_c + 1)),0);
      puVar5[2] = pcVar7;
      pcVar6 = local_c;
      if (pcVar7 != (char *)0x0) {
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        puVar8 = (undefined2 *)(puVar5[2] + -1);
        do {
          pcVar6 = (char *)((int)puVar8 + 1);
          puVar8 = (undefined2 *)((int)puVar8 + 1);
        } while (*pcVar6 != '\0');
        *puVar8 = 0x2f;
        goto LAB_00b20cf2;
      }
    }
    FUN_00b1f840("Out of memory");
    (**(code **)(puVar5[3] + 0x34))(*puVar5);
    (*DAT_013f3ab0)(puVar5[1]);
    (*DAT_013f3ab0)(puVar5[2]);
    (*DAT_013f3ab0)(puVar5);
  }
LAB_00b20c98:
  if ((local_c != (char *)0x0) && (local_c[-1] != '\0')) {
    (*DAT_013f3ab0)(local_c + -1);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

