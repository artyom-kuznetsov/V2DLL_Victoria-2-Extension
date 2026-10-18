// FUN_00904680 @ 00904680 body=[[00904680, 0090475f]]


undefined1 FUN_00904680(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  if (*(char *)(in_ECX + 0x2c) != '\0') {
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      if ((iVar1 != 0) && (iVar2 != 0)) {
        ExceptionList = &local_10;
        cVar3 = FUN_00464d50(*(undefined4 *)(in_ECX + 0x20));
        if (cVar3 != '\0') {
          cVar3 = FUN_00464d50(*(undefined4 *)(in_ECX + 0x28));
          if (cVar3 != '\0') {
            FUN_00464d90(iVar2);
            local_8 = 0;
            FUN_00464d90(iVar1);
            local_8 = CONCAT31(local_8._1_3_,1);
            uVar4 = FUN_00416db0();
            FUN_00408ad0();
            FUN_00408ad0();
            ExceptionList = local_10;
            return uVar4;
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

