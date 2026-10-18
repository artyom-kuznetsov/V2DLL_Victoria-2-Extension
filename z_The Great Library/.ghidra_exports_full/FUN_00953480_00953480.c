// FUN_00953480 @ 00953480 body=[[00953480, 00953550]]


undefined4 * FUN_00953480(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  undefined8 uVar5;
  int local_10;
  int local_c [2];
  
  iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x554);
  local_c[0] = iVar4;
  FUN_00951920();
  piVar2 = &local_10;
  if (iVar4 <= local_10) {
    piVar2 = local_c;
  }
  iVar1 = *piVar2;
  if (iVar4 == 0) {
    iVar4 = -1;
  }
  else if (iVar1 + 0x189373U < 0x39580e) {
    iVar4 = (iVar1 * 1000) / iVar4;
  }
  else {
    uVar5 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
    local_c[0] = (int)((ulonglong)uVar5 >> 0x20);
    iVar4 = __alldiv(uVar5,iVar4,iVar4 >> 0x1f);
  }
  uVar3 = __alldiv((longlong)((*(int *)(in_ECX + 0x2c) / 1000) * 1000) * (longlong)iVar4,1000,0);
  *param_1 = uVar3;
  if (param_2 != (int *)0x0) {
    *param_2 = iVar4;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return param_1;
}

