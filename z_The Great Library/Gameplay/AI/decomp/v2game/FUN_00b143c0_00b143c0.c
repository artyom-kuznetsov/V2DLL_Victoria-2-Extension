// FUN_00b143c0 @ 00b143c0 body=[[00b143c0, 00b14501]]


undefined4 * FUN_00b143c0(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39be1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = (char *)*in_ECX;
  if (pcVar1 == (char *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_00b13660(0,0);
    if ((void *)*param_1 != (void *)0x0) {
      FID_conflict__memcpy((void *)*param_1,&DAT_00ded94d,param_1[1]);
    }
  }
  else {
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    cVar2 = *pcVar1;
    iVar5 = 0;
    local_4 = 1;
    iVar3 = 0;
    while ((((cVar2 == ' ' || (cVar2 == '\n')) || (cVar2 == '\t')) && (cVar2 != '\0'))) {
      iVar4 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      cVar2 = pcVar1[iVar4];
    }
    cVar2 = pcVar1[iVar3];
    while (iVar4 = iVar3, cVar2 != '\0') {
      while (((cVar2 != ' ' && (cVar2 != '\0')) && ((cVar2 != '\n' && (cVar2 != '\t'))))) {
        cVar2 = pcVar1[iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      if (iVar5 == param_2) {
        FUN_00b137d0(pcVar1 + iVar3,iVar4 - iVar3);
        FUN_00b00110(local_18);
        local_4 = local_4 & 0xffffff00;
        if (local_18[0] == 0) {
          ExceptionList = local_c;
          return param_1;
        }
        (*(code *)PTR__free_00f01b10)(local_18[0]);
        ExceptionList = local_c;
        return param_1;
      }
      iVar5 = iVar5 + 1;
      for (; ((cVar2 = pcVar1[iVar4], cVar2 == ' ' || (cVar2 == '\n')) ||
             (iVar3 = iVar4, cVar2 == '\t')); iVar4 = iVar4 + 1) {
        if (cVar2 == '\0') goto LAB_00b1449c;
      }
    }
LAB_00b1449c:
    FUN_00b00110(local_18);
  }
  ExceptionList = local_c;
  return param_1;
}

