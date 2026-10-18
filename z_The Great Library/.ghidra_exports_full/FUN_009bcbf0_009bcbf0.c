// FUN_009bcbf0 @ 009bcbf0 body=[[009bcbf0, 009bccdd]]


int FUN_009bcbf0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = in_EAX + 0x6b6c4;
  local_14 = FUN_00462500(param_1);
  if (local_14 != *(int *)(in_EAX + 0x6b6c8)) {
    cVar1 = FUN_0098ab20();
    if (cVar1 == '\0') {
      piVar3 = &local_14;
      goto LAB_009bcc3b;
    }
  }
  local_18 = *(int *)(in_EAX + 0x6b6c8);
  piVar3 = &local_18;
LAB_009bcc3b:
  if (*piVar3 == *(int *)(in_EAX + 0x6b6c8)) {
    local_18 = 0;
    local_14 = 0;
    local_10 = FUN_009bc490(in_EAX,param_1,&local_18,&local_14,param_2);
    iVar2 = FUN_009bc440();
    iVar4 = iVar2 * 0x2c + in_EAX;
    *(int *)(iVar4 + 0x24) = local_18;
    *(int *)(iVar4 + 0x28) = local_14;
    *(undefined4 *)(iVar4 + 4) = local_10;
    FUN_00408ed0(param_1,0,0xffffffff);
    *(undefined4 *)(iVar4 + 0x2c) = 1;
    *(int *)(in_EAX + 0x6b6d8) = *(int *)(in_EAX + 0x6b6d8) + 1;
    piVar3 = (int *)FUN_00a45090(param_1);
    *piVar3 = iVar2;
    return iVar2;
  }
  iVar2 = *(int *)(*piVar3 + 0x28);
  piVar3 = (int *)((iVar2 + 1) * 0x2c + in_EAX);
  *piVar3 = *piVar3 + 1;
  return iVar2;
}

