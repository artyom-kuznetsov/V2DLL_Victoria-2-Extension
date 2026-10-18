// FUN_00b25c40 @ 00b25c40 body=[[00b25c40, 00b25d27]]


ulonglong FUN_00b25c40(undefined4 *param_1,void *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  size_t _Size;
  char *pcVar5;
  
  uVar2 = param_3;
  _Size = param_3 * param_4;
  uVar4 = *(int *)(param_1[3] + 8) - param_1[5];
  param_3 = 0;
  if (_Size == 0) {
    pcVar5 = (char *)0x0;
LAB_00b25c67:
    FUN_00b1f840(pcVar5);
    return 0;
  }
  if (uVar4 == 0) {
    FUN_00b1f840("Past end of file");
    return 0;
  }
  if (uVar4 < _Size) {
    param_4 = uVar4 / uVar2;
    pcVar5 = "Past end of file";
    _Size = uVar4 - uVar4 % uVar2;
    if (param_4 == 0) goto LAB_00b25c67;
    FUN_00b1f840("Past end of file");
  }
  iVar3 = param_1[2];
  if (*(int *)(iVar3 + 8) == 0) {
    iVar1 = param_1[1];
    FUN_00b2b070(iVar1 + 0x58,iVar1 + 8,*param_1,iVar3,iVar3 + 8,iVar3 + 0xc,param_1 + 4,&param_3,
                 iVar1 + 0x48,iVar1 + 0x50);
    iVar3 = FUN_00b25bc0();
    if (iVar3 != 0) {
      return 0xffffffffffffffff;
    }
  }
  FID_conflict__memcpy(param_2,(void *)(param_1[4] + *(int *)(param_1[2] + 8) + param_1[5]),_Size);
  param_1[5] = param_1[5] + _Size;
  return (ulonglong)param_4;
}

