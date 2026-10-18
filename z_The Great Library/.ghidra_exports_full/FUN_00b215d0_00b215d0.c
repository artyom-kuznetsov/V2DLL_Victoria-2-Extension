// FUN_00b215d0 @ 00b215d0 body=[[00b215d0, 00b216af]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b215d0(int param_1,char *param_2,code *param_3,undefined4 param_4,undefined4 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcVar9;
  bool bVar10;
  
  uVar4 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  pcVar1 = param_2 + 1;
  do {
    cVar3 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar3 != '\0');
  pcVar5 = *(char **)(param_1 + 8);
  pcVar2 = pcVar5 + 1;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  if (pcVar5 + (1 - (int)pcVar2) < (char *)0x80) {
    pcVar6 = &stack0xffffffe8;
  }
  else {
    pcVar6 = (char *)0x0;
  }
  bVar10 = pcVar6 == (char *)0x0;
  if (bVar10) {
    pcVar6 = (char *)(*DAT_013f3aa8)(pcVar5 + (2 - (int)pcVar2),
                                     (char *)0xfffffffe < pcVar5 + (1 - (int)pcVar2));
  }
  if (pcVar6 != (char *)0x0) {
    pcVar2 = pcVar6 + 1;
    *pcVar6 = bVar10;
    if (pcVar2 != (char *)0x0) {
      pcVar5 = *(char **)(param_1 + 8);
      pcVar9 = pcVar2;
      do {
        cVar3 = *pcVar5;
        *pcVar9 = cVar3;
        pcVar5 = pcVar5 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      if ((int)param_2 - (int)pcVar1 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = ((int)param_2 - (int)pcVar1) + 1;
      }
      puVar8 = (undefined1 *)FUN_00ab4790(pcVar2 + iVar7,0x2f);
      *puVar8 = 0;
      (*param_3)(param_5,param_4,pcVar2 + iVar7);
      if (*pcVar6 != '\0') {
        (*DAT_013f3ab0)(pcVar6);
      }
    }
  }
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}

