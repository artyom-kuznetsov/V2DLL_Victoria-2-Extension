// FUN_004b9150 @ 004b9150 body=[[004b9150, 004b91d5] [004b91ee, 004b924a]]


void FUN_004b9150(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b0d0;
  local_10 = ExceptionList;
  if ((*(int *)(in_ECX + 100) == 0) ||
     (ExceptionList = &local_10, -1 < *(int *)(*(int *)(in_ECX + 100) + 0x58))) {
    ExceptionList = &local_10;
    FUN_004b9310();
  }
  uVar4 = FUN_004b8c80(*(undefined4 *)(in_ECX + 0x68),param_1);
  FUN_00955d90(uVar4);
  piVar5 = (int *)FUN_004bcae0();
  cVar3 = (**(code **)(*piVar5 + 0x20))();
  if (cVar3 != '\0') {
    FUN_00964370(in_ECX,0);
    FUN_00955ae0(in_ECX);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puVar6 = (undefined4 *)
           (*(int *)(*(int *)(in_ECX + 0x68) + 0x28) * 0x10 + *(int *)(param_1 + 0x194));
  iVar1 = puVar6[1];
  puVar6[1] = in_ECX;
  *(int *)(in_ECX + 0x278) = iVar1;
  *(undefined4 *)(in_ECX + 0x27c) = 0;
  iVar2 = puVar6[2];
  puVar6[2] = iVar2 + 1;
  if (iVar2 == 0) {
    *puVar6 = puVar6[1];
  }
  else {
    *(undefined4 *)(iVar1 + 0x27c) = puVar6[1];
  }
  FUN_00955f20(param_1);
  ExceptionList = local_10;
  return;
}

