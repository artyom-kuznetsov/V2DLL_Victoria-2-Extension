// FUN_00b24df0 @ 00b24df0 body=[[00b24df0, 00b24ec8]]


int FUN_00b24df0(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
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
  if ((local_8 != 0) && (param_2[local_8 + -1] == '/')) {
    local_8 = local_8 + -1;
  }
  if (iVar4 < 0) {
    return -1;
  }
  do {
    iVar6 = (iVar4 - local_c) / 2 + local_c;
    iVar5 = iVar6 * 0x40 + *(int *)(param_1 + 0x14);
    iVar3 = FUN_00b234a0(param_2,iVar5,local_8);
    if (iVar3 == 0) {
      if ('.' < *(char *)(iVar5 + local_8)) {
        if ('/' < *(char *)(iVar5 + local_8)) goto LAB_00b24eb0;
        if (param_3 != 0) {
          return iVar6;
        }
        local_10 = iVar6;
        if (*(char *)(iVar5 + 1 + local_8) == '\0') {
          return iVar6 + 1;
        }
      }
LAB_00b24e9c:
      iVar4 = iVar6 + -1;
    }
    else {
      if (iVar3 < 1) goto LAB_00b24e9c;
LAB_00b24eb0:
      local_c = iVar6 + 1;
    }
    if (iVar4 < local_c) {
      return local_10;
    }
  } while( true );
}

