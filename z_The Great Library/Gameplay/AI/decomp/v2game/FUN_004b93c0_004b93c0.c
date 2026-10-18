// FUN_004b93c0 @ 004b93c0 body=[[004b93c0, 004b9501]]


void FUN_004b93c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int local_240;
  int *local_23c;
  undefined1 local_238 [548];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b517ad;
  local_14 = ExceptionList;
  local_23c = (int *)(in_ECX + 0x2a8);
  iVar1 = (*(int *)(in_ECX + 0x2ac) - *local_23c) / 0x220;
  iVar3 = 0;
  if (0 < iVar1) {
    local_240 = *local_23c;
    piVar2 = (int *)(local_240 + 0x20);
    do {
      if ((piVar2[-2] == param_1) && (*piVar2 == param_2)) {
        if (param_3 != 0) {
          *(int *)(iVar3 * 0x220 + 0x20 + local_240) = param_3;
          return;
        }
        local_240 = iVar3 * 0x220 + local_240;
        ExceptionList = &local_14;
        FUN_004be940(&local_240);
        ExceptionList = local_14;
        return;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x88;
    } while (iVar3 < iVar1);
  }
  if (param_3 != 0) {
    ExceptionList = &local_14;
    FUN_004f30d0(local_238,param_1,0,1);
    local_c = 0;
    FUN_004beaa0(local_23c);
    local_c = 0xffffffff;
    FUN_004f33c0(local_238);
    *(int *)(((*(int *)(in_ECX + 0x2ac) - *local_23c) / 0x220) * 0x220 + -0x200 + *local_23c) =
         param_3;
  }
  ExceptionList = local_14;
  return;
}

