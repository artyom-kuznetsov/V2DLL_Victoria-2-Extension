// FUN_00b27c10 @ 00b27c10 body=[[00b27c10, 00b27ceb]]


int FUN_00b27c10(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  size_t local_8;
  
  local_c = 0;
  iVar4 = *(ushort *)(param_1 + 4) - 1;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_8 = (int)pcVar2 - (int)(param_2 + 1);
  local_10 = -1;
  if (*param_2 == '\0') {
    return 0;
  }
  if ((local_8 != 0) && (param_2[local_8 - 1] == '/')) {
    local_8 = local_8 - 1;
  }
  if (iVar4 < 0) {
    return -1;
  }
  do {
    iVar5 = (iVar4 - local_c) / 2 + local_c;
    pcVar2 = *(char **)(*(int *)(param_1 + 8) + iVar5 * 0x30);
    iVar3 = _strncmp(param_2,pcVar2,local_8);
    if (iVar3 == 0) {
      if (pcVar2[local_8] < '0') {
        if (pcVar2[local_8] < '/') goto LAB_00b27cd3;
        if (param_3 != 0) {
          return iVar5;
        }
        local_10 = iVar5;
        if (pcVar2[local_8 + 1] == '\0') {
          return iVar5 + 1;
        }
      }
LAB_00b27cbf:
      iVar4 = iVar5 + -1;
    }
    else {
      if (iVar3 < 1) goto LAB_00b27cbf;
LAB_00b27cd3:
      local_c = iVar5 + 1;
    }
    if (iVar4 < local_c) {
      return local_10;
    }
  } while( true );
}

