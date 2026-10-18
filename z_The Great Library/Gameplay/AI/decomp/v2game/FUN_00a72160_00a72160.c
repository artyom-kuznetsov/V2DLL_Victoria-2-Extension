// FUN_00a72160 @ 00a72160 body=[[00a72160, 00a721f2] [00a721f6, 00a72208]]


/* WARNING: Removing unreachable block (ram,0x00a721ea) */

void FUN_00a72160(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d728;
  local_10 = ExceptionList;
  param_1 = param_1 + 0x48;
  iVar1 = in_ECX + 0x68;
  ExceptionList = &local_10;
  cVar2 = FUN_00a725f0(iVar1,param_1);
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)FUN_00a72680(iVar1,param_1);
    FUN_009e6760(iVar1,param_1);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_00408ed0(param_1,0,0xffffffff);
  local_8 = 0;
  FUN_00a72850();
  ExceptionList = local_10;
  return;
}

