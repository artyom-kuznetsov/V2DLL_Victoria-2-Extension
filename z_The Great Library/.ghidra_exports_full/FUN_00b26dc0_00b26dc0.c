// FUN_00b26dc0 @ 00b26dc0 body=[[00b26dc0, 00b26e8f]]


int FUN_00b26dc0(char *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t _MaxCount;
  int iVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar2 = *(int *)(in_EDX + 8);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _MaxCount = (int)pcVar3 - (int)(param_1 + 1);
  iVar5 = 0;
  local_8 = *(ushort *)(in_EDX + 4) - 1;
  if (-1 < local_8) {
    do {
      iVar6 = (local_8 - iVar5) / 2 + iVar5;
      pcVar3 = *(char **)(iVar2 + iVar6 * 0x30);
      iVar4 = _strncmp(param_1,pcVar3,_MaxCount);
      if (iVar4 < 1) {
        if (iVar4 < 0) {
          local_8 = iVar6 + -1;
        }
        else {
          if ((param_2 != (uint *)0x0) &&
             (cVar1 = pcVar3[_MaxCount], *param_2 = (uint)(cVar1 == '/'), (cVar1 == '/') != 0)) {
            return 0;
          }
          if (pcVar3[_MaxCount] == '\0') {
            return iVar6 * 0x30 + iVar2;
          }
          if (pcVar3[_MaxCount] < '0') goto LAB_00b26e73;
          local_8 = iVar6 + -1;
        }
      }
      else {
LAB_00b26e73:
        iVar5 = iVar6 + 1;
      }
    } while (iVar5 <= local_8);
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  FUN_00b1f840("File not found");
  return 0;
}

