// FUN_00b25010 @ 00b25010 body=[[00b25010, 00b2505e] [00b25060, 00b250db]]


int FUN_00b25010(char *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int in_EDX;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_8;
  
  iVar2 = *(int *)(in_EDX + 0x14);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  iVar7 = 0;
  local_8 = *(int *)(in_EDX + 0x10) + -1;
  if (-1 < local_8) {
    do {
      iVar9 = (local_8 - iVar7) / 2 + iVar7;
      iVar8 = iVar9 * 0x40 + iVar2;
      iVar5 = FUN_00b234a0(param_1,iVar8,iVar4);
      if (iVar5 < 1) {
        if (iVar5 < 0) {
          local_8 = iVar9 + -1;
        }
        else {
          if ((param_2 != (uint *)0x0) &&
             (uVar6 = (uint)(*(char *)(iVar8 + iVar4) == '/'), *param_2 = uVar6, uVar6 != 0)) {
            return 0;
          }
          if (*(char *)(iVar8 + iVar4) == '\0') {
            return iVar9 * 0x40 + iVar2;
          }
          if (*(char *)(iVar8 + iVar4) < '0') goto LAB_00b250c0;
          local_8 = iVar9 + -1;
        }
      }
      else {
LAB_00b250c0:
        iVar7 = iVar9 + 1;
      }
    } while (iVar7 <= local_8);
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_00b1f840("File not found");
  return 0;
}

